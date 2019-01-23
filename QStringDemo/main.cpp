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

	//���ù���
	str1.prepend("��ʼ");
	str1.append("����");

	str1 = str1.toUpper();
	str1 = str1.toLower();

	int i1 = str1.count();
	int i2 = str1.size();
	int i3 = str1.length();

	str2 = "Are    you    OK?  ";
	str1 = str2.trimmed();
	str1 = str2.simplified();

	str3 = "C:\\123\\456\\123\\Info.txt";
	int i4 = str3.indexOf("123", 0, Qt::CaseInsensitive);	//�����ִ�Сд
	int i5 = str3.lastIndexOf("\\");

	bool b1 = str3.contains("456");




	return a.exec();
}
