#include "QPerson.h"

QPerson::QPerson(QString szName, int intAge, int intScore, QObject *parent) : QObject(parent)
{
	m_name = szName;
	m_age = intAge;
	m_score = intScore;
}

QPerson::~QPerson()
{
}

QString QPerson::name()
{
	return m_name;
}

int QPerson::age()
{
	return m_age;
}

void QPerson::setAge(int value)
{
	m_age = value;
	emit ageChanged(value);	//发射信号
}

void QPerson::incAge()
{
	m_age++;
	emit ageChanged(m_age);	//发射信号
}

int QPerson::score()
{
	return m_score;
}

void QPerson::setScore(int value)
{
	m_score = value;
	emit scoreChanged(value); //发射信号
}
