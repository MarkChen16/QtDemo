#include <QtCore/QCoreApplication>

#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QString str1, str2, str3;

	//ת��Ϊ�ַ���
	str1 = QString::number(123, 16);
	str2 = QString::asprintf("%.2f", 123.456);
	str3 = str3.sprintf("%d", 789);

	//ת��Ϊ��ֵ
	int i = str1.toInt();

	int j = str1.toInt(nullptr, 16);

	int k = str3.toInt(nullptr, 8);


	return a.exec();
}
