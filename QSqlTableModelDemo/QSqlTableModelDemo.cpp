#include "QSqlTableModelDemo.h"

#include <qfiledialog.h>
#include <qmessagebox.h>

#pragma execution_character_set("UTF-8")

QSqlTableModelDemo::QSqlTableModelDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->setCentralWidget(ui.splitter_2);
	this->setWindowState(Qt::WindowMaximized);

	tabModel = NULL;
	selModel = NULL;
	dataMapper = NULL;
}

void QSqlTableModelDemo::openTable()
{
	//�����ݱ�
	tabModel = new QSqlTableModel(this, DB);
	tabModel->setTable("employee");		//�򿪵����ݱ�
	tabModel->setSort(tabModel->fieldIndex("EmpNo"), Qt::AscendingOrder);	//Ĭ��������EmpNo
	tabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);		//�ֶ��ύ�޸�

	if (!tabModel->select())
	{
		QMessageBox::warning(this, "����", "��ѯ���ݱ�ʧ�ܣ�", QMessageBox::Ok);
		return;
	}

	//�����ֶ���ʾ����
	tabModel->setHeaderData(tabModel->fieldIndex("EmpNo"), Qt::Horizontal, "���");
	tabModel->setHeaderData(tabModel->fieldIndex("EmpName"), Qt::Horizontal, "����");
	tabModel->setHeaderData(tabModel->fieldIndex("Gender"), Qt::Horizontal, "�Ա�");
	tabModel->setHeaderData(tabModel->fieldIndex("Height"), Qt::Horizontal, "���");
	tabModel->setHeaderData(tabModel->fieldIndex("Birthday"), Qt::Horizontal, "��������");
	tabModel->setHeaderData(tabModel->fieldIndex("Mobile"), Qt::Horizontal, "�ֻ�");
	tabModel->setHeaderData(tabModel->fieldIndex("Province"), Qt::Horizontal, "ʡ��");
	tabModel->setHeaderData(tabModel->fieldIndex("City"), Qt::Horizontal, "����");
	tabModel->setHeaderData(tabModel->fieldIndex("Department"), Qt::Horizontal, "����");
	tabModel->setHeaderData(tabModel->fieldIndex("Education"), Qt::Horizontal, "ѧ��");
	tabModel->setHeaderData(tabModel->fieldIndex("Salary"), Qt::Horizontal, "����");
	tabModel->setHeaderData(tabModel->fieldIndex("Photo"), Qt::Horizontal, "��Ƭ");
	tabModel->setHeaderData(tabModel->fieldIndex("Memo"), Qt::Horizontal, "��ע");

	//ѡ��ģ��
	selModel = new QItemSelectionModel(tabModel);
	connect(selModel, SIGNAL(currentChanged(QModelIndex, QModelIndex)), this, SLOT(on_currentChanged(QModelIndex, QModelIndex)));
	connect(selModel, SIGNAL(currentRowChanged(QModelIndex, QModelIndex)), this, SLOT(on_currentRowChanged(QModelIndex, QModelIndex)));

	//����view���
	ui.tv->setModel(tabModel);
	ui.tv->setSelectionModel(selModel);
	ui.tv->setSelectionMode(QAbstractItemView::SingleSelection);

	//����ĳ��
	ui.tv->setColumnHidden(tabModel->fieldIndex("Photo"), true);
	ui.tv->setColumnHidden(tabModel->fieldIndex("Memo"), true);

	//��������ӳ��
	dataMapper = new QDataWidgetMapper(this);
	dataMapper->setModel(tabModel);
	dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);		//�޸��Զ��ύ

	dataMapper->addMapping(ui.sbEmpNo, tabModel->fieldIndex("EmpNo"));
	dataMapper->addMapping(ui.txtName, tabModel->fieldIndex("EmpName"));
	dataMapper->addMapping(ui.cbSex, tabModel->fieldIndex("Gender"));
	dataMapper->addMapping(ui.sbHeight, tabModel->fieldIndex("Height"));
	dataMapper->addMapping(ui.dtBirthday, tabModel->fieldIndex("Birthday"));
	dataMapper->addMapping(ui.txtMobile, tabModel->fieldIndex("Mobile"));
	dataMapper->addMapping(ui.cbProv, tabModel->fieldIndex("Province"));
	dataMapper->addMapping(ui.txtCity, tabModel->fieldIndex("City"));
	dataMapper->addMapping(ui.cbPartment, tabModel->fieldIndex("Department"));
	dataMapper->addMapping(ui.cbEducation, tabModel->fieldIndex("Education"));
	dataMapper->addMapping(ui.sbSalary, tabModel->fieldIndex("Salary"));
	dataMapper->addMapping(ui.ptMemo, tabModel->fieldIndex("Memo"));

	dataMapper->toFirst();	//�ƶ����׼�¼

	//�Զ������
	QStringList lstSex;
	lstSex << "��" << "Ů";
	cbDelegate.SetList(lstSex);
	ui.tv->setItemDelegateForColumn(tabModel->fieldIndex("Gender"), &cbDelegate);

	//��ʼ��������ֶ��б�
	getFieldNames();

	//Actionʹ��
	ui.actOpen->setEnabled(false);
	ui.actAdd->setEnabled(true);
	ui.actInsert->setEnabled(true);
	ui.actDelete->setEnabled(true);

	ui.actSetImage->setEnabled(true);
	ui.actClearImage->setEnabled(true);
	ui.actAddSalary->setEnabled(true);

	ui.groupBox_Sort->setEnabled(true);
	ui.groupBox_Filter->setEnabled(true);
}

void QSqlTableModelDemo::getFieldNames()
{
	QSqlRecord rec = tabModel->record();	//���ؿյ���

	ui.cbSort->clear();
	for (int i = 0; i < rec.count(); i++)
	{
		ui.cbSort->addItem(rec.fieldName(i));	//��ȡ�ֶ�����
	}

	if (ui.cbSort->count() != 0) ui.cbSort->setCurrentIndex(0);
}

void QSqlTableModelDemo::closeEvent(QCloseEvent * event)
{
	if (tabModel != NULL)
	{
		if (tabModel->isDirty())
		{
			int intRev = QMessageBox::warning(this, "ѯ�ʿ�",
				"���ݿ��Ѿ��޸ģ��Ƿ񱣴沢�˳�����",
				QMessageBox::Yes, QMessageBox::No);

			if (intRev == QMessageBox::Yes)
			{
				tabModel->submitAll();
			}
			else
			{ 
				event->ignore();	//ȡ���˳�
				return;
			}
		}
	}

	event->accept();
}

void QSqlTableModelDemo::on_actOpen_triggered()
{
	//�����ݿ�
	QString strDBFile = QFileDialog::getOpenFileName(this, "", QCoreApplication::applicationDirPath(), "SQLite���ݿ�(*.db *.db3 *.sqlite);;�����ļ�(*.*)");
	if (strDBFile.isEmpty()) return;

	DB = QSqlDatabase::addDatabase("QSQLITE");
	DB.setDatabaseName(strDBFile);

	if (!DB.open())
	{
		//��ʧ��
		QMessageBox::warning(this, "����", "�����ݿ�ʧ�ܣ�", QMessageBox::Ok);
		return;
	}

	openTable();
}

void QSqlTableModelDemo::on_actAdd_triggered()
{
	//��Ӽ�¼
	tabModel->insertRow(tabModel->rowCount());
	QModelIndex newIndex = tabModel->index(tabModel->rowCount() - 1, 1);

	selModel->clearSelection();	//ȡ����ǰѡ��
	selModel->setCurrentIndex(newIndex, QItemSelectionModel::Select);

	int currRow = newIndex.row();
	tabModel->setData(tabModel->index(currRow, 0), 2000 + tabModel->rowCount());	//���ó�ʼ���
	tabModel->setData(tabModel->index(currRow, 2), "��");
}

void QSqlTableModelDemo::on_actInsert_triggered()
{
	//�����¼
	QModelIndex currIndex = selModel->currentIndex();
	tabModel->insertRow(currIndex.row(), QModelIndex());

	selModel->clearSelection();
	selModel->setCurrentIndex(currIndex, QItemSelectionModel::Select);
}

void QSqlTableModelDemo::on_actDelete_triggered()
{
	//ɾ����ǰ��¼
	QModelIndex currIndex = selModel->currentIndex();
	tabModel->removeRow(currIndex.row());
}

void QSqlTableModelDemo::on_actSetImage_triggered()
{
	//������Ƭ=========================
	//��ȡ��ǰ����
	QModelIndex currIndex = selModel->currentIndex();
	if (!currIndex.isValid()) return;

	//ѡ���ļ�
	QString imageFile = QFileDialog::getOpenFileName(this, "ѡ��һ��ͼƬ", 
		QCoreApplication::applicationDirPath(), "Image File(*.jpg *.png *.bmp *.jpge);;All File(*.*)");
	if (imageFile.isEmpty()) return;

	//��ȡ��Ƭ
	QByteArray arr;
	QFile *file = new QFile(imageFile);
	if (!file->open(QIODevice::ReadOnly))
	{
		QMessageBox::warning(this, "����", "��ȡͼƬʧ�ܣ�");
		return;
	}

	arr = file->readAll();
	file->close();

	//�޸���Ƭ����
	QSqlRecord rec = tabModel->record(currIndex.row());
	rec.setValue("Photo", arr);
	tabModel->setRecord(currIndex.row(), rec);

	//��ʾͼƬ
	QPixmap pix;
	pix.loadFromData(arr);

	ui.labPhoto->setPixmap(pix.scaledToWidth(ui.labPhoto->size().width()));
}

void QSqlTableModelDemo::on_actClearImage_triggered()
{
	//�����Ƭ===================
	//��ȡ��ǰ����
	QModelIndex currIndex = selModel->currentIndex();
	if (!currIndex.isValid()) return;

	//�޸���Ƭ����
	QSqlRecord rec = tabModel->record(currIndex.row());
	rec.setNull("Photo");
	tabModel->setRecord(currIndex.row(), rec);

	//��ʾͼƬ
	ui.labPhoto->clear();
}

void QSqlTableModelDemo::on_actAddSalary_triggered()
{
	//ȫ���ӹ���%10
	int cnt = tabModel->rowCount();
	if (cnt <= 0) return;

	for (int i = 0; i < cnt; i++)
	{
		QSqlRecord rec = tabModel->record(i);

		float fSalary = 10000;
		if (!rec.isNull("Salary")) fSalary = rec.value("Salary").toFloat();

		fSalary *= 1.1;
		rec.setValue("Salary", fSalary);

		tabModel->setRecord(i, rec);
	}

	if (tabModel->submitAll())
	{
		QMessageBox::information(this, "��ʾ", "ȫԱ�ǹ���10%��ϣ��������ͣ�");
	}
	else
	{
		QMessageBox::warning(this, "����", "�ύ���ݿ�ʧ�ܣ�");
	}
}

void QSqlTableModelDemo::on_actSave_triggered()
{
	//�����޸�
	bool bRev = tabModel->submitAll();
	if (bRev)
	{
		ui.actSave->setEnabled(false);
		ui.actCancel->setEnabled(false);
	}
	else
	{
		QMessageBox::warning(this, "����", "�������ݿ�ʧ�ܣ����ش���[" + tabModel->lastError().text() + "]", QMessageBox::Ok);
	}
}

void QSqlTableModelDemo::on_actCancel_triggered()
{
	//ȡ���޸�
	tabModel->revertAll();

	ui.actSave->setEnabled(false);
	ui.actCancel->setEnabled(false);
}

void QSqlTableModelDemo::on_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
	//��ǰ�б��޸�ʱ
	ui.actSave->setEnabled(tabModel->isDirty());
	ui.actCancel->setEnabled(tabModel->isDirty());
}

void QSqlTableModelDemo::on_currentRowChanged(const QModelIndex &current, const QModelIndex &previous)
{
	//���л�ʱ����ʾͼƬ
	ui.actDelete->setEnabled(current.isValid());
	ui.actSetImage->setEnabled(current.isValid());
	ui.actClearImage->setEnabled(current.isValid());

	//�������Чʱ
	if (!current.isValid())
	{
		ui.labPhoto->clear();	//�����Ƭ
		return;
	}

	//��������ӳ����кţ�����ʾ��Ƭ
	dataMapper->setCurrentIndex(current.row());	

	QSqlRecord rec = tabModel->record(current.row());
	if (rec.isNull("Photo"))
	{
		//��ƬΪ��
		ui.labPhoto->clear();
	}
	else
	{
		//��Ƭ��Ϊ�գ���ʾ��Ƭ
		QByteArray arr = rec.value("Photo").toByteArray();

		QPixmap pic;
		pic.loadFromData(arr);

		ui.labPhoto->setPixmap(pic.scaledToWidth(ui.labPhoto->size().width()));	//���ݿ�Ƚ�������
	}
}

void QSqlTableModelDemo::on_rbAsc_clicked(bool bCheck)
{
	on_cbSort_currentIndexChanged(0);
}

void QSqlTableModelDemo::on_rbDesc_clicked(bool bCheck)
{
	on_cbSort_currentIndexChanged(0);
}

void QSqlTableModelDemo::on_cbSort_currentIndexChanged(int index)
{
	if (ui.rbAsc->isChecked())
	{
		tabModel->setSort(ui.cbSort->currentIndex(), Qt::AscendingOrder);
	}
	else
	{
		tabModel->setSort(ui.cbSort->currentIndex(), Qt::DescendingOrder);
	}

	tabModel->select();
}

void QSqlTableModelDemo::on_rbBoy_clicked(bool bCheck)
{
	//����SQL�е�Where����
	if (bCheck)	tabModel->setFilter(" Gender = '��' ");
}

void QSqlTableModelDemo::on_rbGril_clicked(bool bCheck)
{
	//����SQL�е�Where����
	if (bCheck)	tabModel->setFilter(" Gender = 'Ů' ");
}

void QSqlTableModelDemo::on_rbBoyAndGril_clicked(bool bCheck)
{
	if (bCheck)	tabModel->setFilter("");
}

