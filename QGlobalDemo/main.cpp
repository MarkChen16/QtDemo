#include <QtCore/QCoreApplication>

#include <qglobal.h>
#include <qfloat16.h>

#include <iostream>

using namespace std;

//声明外部函数
Q_DECL_IMPORT void ImportFun();

//导出函数
Q_DECL_EXPORT void ExportFun()
{

}

class Rect
{
public:
	virtual void Paint();
};

//拒绝继承类
class MyRect Q_DECL_FINAL : public Rect
{
public:
	//重载函数
	void Paint() Q_DECL_OVERRIDE
	{

	}
};

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	//数据类型定义=======================================
	qint8 i8 = 0;
	qint16 i16 = 0;
	qint32 i32 = 0;
	qint64 i64 = 0;
	qlonglong ll = 0;

	quint8 ui8 = 0;
	quint16 ui16 = 0;
	quint32 ui32 = 0;
	quint64 ui64 = 0;
	qulonglong ull = 0;

	uchar uc = 0;
	ushort us = 0;
	uint ui = 0;
	ulong ul = 0;

	qreal qr = 0.0;		//double
	qfloat16 f16 = 0.0;

	//全局函数定义=======================================
	i8 = -3;
	qint8 tmp = qAbs(i8);
	
	qint8 maxTmp = qMax(i8, tmp);
	qint8 minTmp = qMin(i8, tmp);

	qsrand(88);
	qint32 intRand1 = qrand();
	qint32 intRand2 = qrand();
	qint32 intRand3 = qrand();

	//宏定义=============================================
	//QT编译器版本
#if QT_VERSION > 0x040100
	//输出调试信息
	qDebug("Version > 4.1.0");
#else
	//输出警告信息
	qWarning("警告Version太低！");
#endif

	//系统内存的字节序，大小端
#if Q_BYTE_ORDER == Q_BIG_ENDIAN
	qDebug("Big endian!");
#else
	qDebug("little endian!");
#endif

	//指明参数不做使用
	Q_UNUSED(f16);

	//遍历函数
	int arr[5] = {1, 2, 3, 4, 5};
	for each (int var in arr)
	{
		cout << var << endl;
	}

	return a.exec();
}
