#include "SimpleTcpDemo.h"

#include <qmessagebox.h>

#pragma execution_character_set("UTF-8")


SimpleTcpDemo::SimpleTcpDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//初始化状态栏
	labState = new QLabel(this);
	labState->setText("状态：");
	labState->setMinimumWidth(300);
	ui.statusBar->addWidget(labState);

	//初始化服务器
	mServer = new QTcpServer(this);
	connect(mServer, SIGNAL(newConnection()), this, SLOT(on_newConnection()));

	ui.actStart->setEnabled(true);
	ui.actStop->setEnabled(false);
	ui.actNewClient->setEnabled(false);

	this->setCentralWidget(ui.lstMsg);
}

void SimpleTcpDemo::on_actStart_triggered()
{
	QHostAddress addr("192.168.249.134");

	if (mServer->listen(addr, 8008) == false)
	{
		QMessageBox::warning(this, "错误", "开启监听失败，返回错误：" + mServer->errorString());
		return;
	}

	ui.actStart->setEnabled(false);
	ui.actStop->setEnabled(true);
	ui.actNewClient->setEnabled(true);
}

void SimpleTcpDemo::closeEvent(QCloseEvent * event)
{
	mServer->close();
}

void SimpleTcpDemo::on_actStop_triggered()
{
	mServer->close();

	ui.actStart->setEnabled(true);
	ui.actStop->setEnabled(false);
	ui.actNewClient->setEnabled(false);
}

void SimpleTcpDemo::on_actNewClient_triggered()
{
	//使用QRunnable，线程池启动新的线程
	ClientRunnable *runnable = new ClientRunnable(++mSeq);
	runnable->setAutoDelete(false);		//问题：找不到Runnable的析构函数
	QThreadPool::globalInstance()->start(runnable);

	//使用QtConcurrent的run函数启动新的线程，可以把任何函数放在新的线程执行，但不能使用信号槽
	//QFuture<bool> future = QtConcurrent::run(this, &SimpleTcpDemo::runFun, ++mSeq);
	//future.waitForFinished();

	//bool bRev = future.result();
}

void SimpleTcpDemo::on_actQuit_triggered()
{
	this->close();
}

void SimpleTcpDemo::on_newConnection()
{
	QTcpSocket *newClient = mServer->nextPendingConnection();

	//关闭后自动delete，释放内存
	connect(newClient, &QAbstractSocket::disconnected, newClient, &QObject::deleteLater);

	//创建流对象，设置版本
	QDataStream ds(newClient);
	ds.setVersion(QDataStream::Qt_4_0);

	//读取消息
	newClient->waitForReadyRead();
	QString strMsg;
	ds >> strMsg;

	ui.lstMsg->insertItem(0, strMsg);

	//发送消息
	strMsg = "Server: OK";
	ds << strMsg;
	newClient->waitForBytesWritten();

	ui.lstMsg->insertItem(0, strMsg);

	//关闭连接
	newClient->disconnectFromHost();
}

bool SimpleTcpDemo::runFun(int seq)
{
	QTcpSocket *client = new QTcpSocket();
	client->connect(client, &QAbstractSocket::disconnected, client, &QObject::deleteLater);

	QHostAddress addr("192.168.249.134");
	client->connectToHost(addr, 8008);
	qDebug() << "开始连接";

	if (client->waitForConnected() == false)
	{
		qDebug() << "连接服务器超时，返回错误：" + client->errorString();
		return false;
	}

	QDataStream ds(client);
	ds.setVersion(QDataStream::Qt_4_0);

	QString strMsg = QString::asprintf("Client%d: %s", seq, "Server, how are you?");
	ds << strMsg;
	client->waitForBytesWritten();
	qDebug() << "发送数据：" + strMsg;

	client->waitForReadyRead();
	ds >> strMsg;
	qDebug() << "接收数据：" + strMsg;

	client->waitForDisconnected();
	qDebug() << "关闭连接";

	return true;
}
