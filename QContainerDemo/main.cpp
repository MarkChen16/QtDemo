#include <QtCore/QCoreApplication>

//˳������
#include <qlist.h>
#include <qlinkedlist.h>
#include <qvector.h>
#include <qstack.h>
#include <qqueue.h>

//��������
#include <qset.h>
#include <qmap.h>
#include <qhash.h>

//STL�����㷨
#include <algorithm>

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	//˳��������===================================
	//���飺�Զ�����������
	QList<int> arrInt, arrTmp;
	arrTmp << 10 << 20 << 30;
	arrInt.append(1);
	arrInt.append(2);
	arrInt.append(3);
	arrInt.append(arrTmp);
	int i1 = arrInt[1];
	int i4 = arrInt.at(4);

	//��������������ʣ������Կ��ٲ���ɾ����
	QLinkedList<int> laInt;
	laInt << 2 << 4 << 6;

	//��������ListЧ�ʸ���
	QVector<int> vect;
	vect << 3 << 6 << 9;

	//ջ���Ƚ����
	QStack<int> stInt;
	stInt << 12 << 45 << 39 << 83 << 72;
	stInt.push(12);
	stInt.push(73);
	stInt.push(56);
	stInt.push(18);
	stInt.push(42);
	int intPop1 = stInt.pop();
	int intPop2 = stInt.pop();
	int intPop3 = stInt.pop();

	//���У��Ƚ��ȳ�
	QQueue<int> quInt;
	quInt << 12 << 45 << 39 << 83 << 72;
	quInt.pop_front();

	//����������=======================================
	//���ϣ��ڲ��Զ�����
	QSet<int> setInt;
	setInt << 1 << 32 << 53;
	if (setInt.contains(32))
	{
	}

	//ӳ�䣺�ڲ��Զ�����
	QMap<int, QString> mapInt;
	mapInt[12] = "GEF";
	mapInt[33] = "FKFL";
	mapInt[53] = "HHR";
	mapInt[37] = "EF";

	//����ӳ��
	QMultiMap<int, QString> mumapInt;

	//��ϣ���ٶȱ�map��ܶ࣬��ռ���ڴ�Ƚ϶�
	//ʵ��ԭ������������Keyͨ����ϣ�㷨�õ���ϣֵ����ȡģ������С���������ȡ���ض���������������ʱֱ��Ѱַ��ָ����������(�ռ任ʱ��)
	QHash<int, QString> hashInt;
	hashInt.insert(32, "AFIN");
	hashInt.insert(32, "FFEFEa");
	hashInt.insert(21, "FEFHJJ");

	//���ع�ϣ��
	QMultiHash<int, QString> muhashInt;
	muhashInt.insert(13, "IANFIE");
	muhashInt.insert(13, "IANFIE");
	muhashInt.insert(445, "IANFIE");
	muhashInt.insertMulti(445, "IANFIE");

	//������================================================
	//Java���͵��������ṩ�����߼��ӿ�
	QListIterator<int> javaIter(arrInt);
	while (javaIter.hasNext())
	{
		cout << javaIter.next() << " ";
	}

	cout << endl;

	//�����߼��ӿ�
	javaIter.toFront();	//�Ƶ���һ��Ԫ��λ��
	javaIter.next();	//�ƶ���һ��λ�ã���ȡ��Ԫ�ص�ֵ

	javaIter.toBack();
	javaIter.previous();

	int iNext = javaIter.peekNext();	//���ƶ�λ�ã�ȡ����һ��Ԫ�ص�ֵ
	int iPrev = javaIter.peekPrevious();

	//STL���͵�������������STL���㷨��Ч�ʸ���
	QList<int>::iterator stlIter = arrInt.begin();
	while (stlIter != arrInt.end())
	{
		cout << *stlIter << " ";
		stlIter++;
	}

	cout << endl;

	//ʹ��STL�����㷨��������
	sort(arrInt.rbegin(), arrInt.rend());

	//foreach�ؼ��֣�������foreach������޸�Ԫ�ص�ֵ
	foreach (int iVal, arrInt)
	{
		cout << iVal << " ";
	}
	
	cout << endl;

	return a.exec();
}
