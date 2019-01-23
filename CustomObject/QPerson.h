#pragma once

#include <qobject.h>

/*
QT元对象系统的基类是QObject，可以支持在运行时获取对象类型所有的接口信息，包括类信息、函数、信号、槽、属性等等；
QT元对象系统(MOS)的三大核心：信号/槽、运行时类型信息、动态属性；

注意：元对象类型在编译之前需要MOC预处理器转换成C++代码
*/

class QPerson : public QObject
{
	//使用信号、槽的类要包含Q_OBJECT宏
	Q_OBJECT

	//定义类的信息
	Q_CLASSINFO("author", "guiquan")
	Q_CLASSINFO("company", "dekey")
	Q_CLASSINFO("version", "1.1.0");

	//定义类的属性
	Q_PROPERTY(QString name READ name)		//定义只读属性
	Q_PROPERTY(int age READ age WRITE setAge NOTIFY ageChanged)		//定义可读写属性，只指定改变时发射的信号
	Q_PROPERTY(int score READ score WRITE setScore NOTIFY scoreChanged)		//定义可读写属性，只指定改变时发射的信号
public:
	explicit QPerson(QString szName, int intAge, int intScore, QObject *parent = nullptr);
	virtual ~QPerson();

	QString name();

	int age();
	void setAge(int value);

	void incAge();

	int score();
	void setScore(int value);

signals:
	//定义两个信号(信号只有函数声明，不用实现)
	void ageChanged(int value);
	void scoreChanged(int score);

private:
	QString m_name = "";
	int m_age = 0;
	int m_score = 0;
};

