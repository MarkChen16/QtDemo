#include <QtCore/QCoreApplication>

#include <qglobal.h>
#include <qfloat16.h>

#include <iostream>

using namespace std;

//�����ⲿ����
Q_DECL_IMPORT void ImportFun();

//��������
Q_DECL_EXPORT void ExportFun()
{

}

class Rect
{
public:
	virtual void Paint();
};

//�ܾ��̳���
class MyRect Q_DECL_FINAL : public Rect
{
public:
	//���غ���
	void Paint() Q_DECL_OVERRIDE
	{

	}
};

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	//�������Ͷ���=======================================
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

	//ȫ�ֺ�������=======================================
	i8 = -3;
	qint8 tmp = qAbs(i8);
	
	qint8 maxTmp = qMax(i8, tmp);
	qint8 minTmp = qMin(i8, tmp);

	qsrand(88);
	qint32 intRand1 = qrand();
	qint32 intRand2 = qrand();
	qint32 intRand3 = qrand();

	//�궨��=============================================
	//QT�������汾
#if QT_VERSION > 0x040100
	//���������Ϣ
	qDebug("Version > 4.1.0");
#else
	//���������Ϣ
	qWarning("����Version̫�ͣ�");
#endif

	//ϵͳ�ڴ���ֽ��򣬴�С��
#if Q_BYTE_ORDER == Q_BIG_ENDIAN
	qDebug("Big endian!");
#else
	qDebug("little endian!");
#endif

	//ָ����������ʹ��
	Q_UNUSED(f16);

	//��������
	int arr[5] = {1, 2, 3, 4, 5};
	for each (int var in arr)
	{
		cout << var << endl;
	}

	return a.exec();
}
