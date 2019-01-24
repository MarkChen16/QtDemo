﻿#include <QtCore/QCoreApplication>

#include <iostream>

using namespace std;

#pragma execution_character_set("UTF-8")


int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QString str1, str2, str3;

	//转换为字符串
	str1 = QString::number(123, 16);
	str2 = QString::asprintf("%.2f", 123.456);
	str3 = str3.sprintf("%d", 789);

	//转换为数值
	int i = str1.toInt();

	int j = str1.toInt(nullptr, 16);

	int k = str3.toInt(nullptr, 8);

	//常用功能
	str1.prepend("开始");
	str1.append("结束");

	str1 = str1.toUpper();
	str1 = str1.toLower();

	int i1 = str1.count();
	int i2 = str1.size();
	int i3 = str1.length();

	str2 = "Are    you    OK?  ";
	str1 = str2.trimmed();
	str1 = str2.simplified();

	str3 = "C:\\123\\456\\123\\Info.txt";
	int i4 = str3.indexOf("123", 0, Qt::CaseInsensitive);	//不区分大小写
	int i5 = str3.lastIndexOf("\\");

	bool b1 = str3.contains("456");

	bool b2 = str3.startsWith("C:\\");
	bool b3 = str3.endsWith(".txt");

	QString s1 = str3.left(3);
	QString s2 = str3.right(3);

	str3 = "1,陈贵全,1986,汉族,广东,608";
	QString s3 = str3.section(",", 1, 2);
	QString s4 = str3.section(",", 3, 3);

	return a.exec();
}
