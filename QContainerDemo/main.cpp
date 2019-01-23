#include <QtCore/QCoreApplication>

//顺序容器
#include <qlist.h>
#include <qlinkedlist.h>
#include <qvector.h>
#include <qstack.h>
#include <qqueue.h>

//关联容器
#include <qset.h>
#include <qmap.h>
#include <qhash.h>

//STL内置算法
#include <algorithm>

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	//顺序容器类===================================
	//数组：自动增长的数组
	QList<int> arrInt, arrTmp;
	arrTmp << 10 << 20 << 30;
	arrInt.append(1);
	arrInt.append(2);
	arrInt.append(3);
	arrInt.append(arrTmp);
	int i1 = arrInt[1];
	int i4 = arrInt.at(4);

	//链表：不能随机访问，但可以快速插入删除；
	QLinkedList<int> laInt;
	laInt << 2 << 4 << 6;

	//向量：比List效率更高
	QVector<int> vect;
	vect << 3 << 6 << 9;

	//栈：先进后出
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

	//队列：先进先出
	QQueue<int> quInt;
	quInt << 12 << 45 << 39 << 83 << 72;
	quInt.pop_front();

	//关联容器类=======================================
	//集合：内部自动排序
	QSet<int> setInt;
	setInt << 1 << 32 << 53;
	if (setInt.contains(32))
	{
	}

	//映射：内部自动排序
	QMap<int, QString> mapInt;
	mapInt[12] = "GEF";
	mapInt[33] = "FKFL";
	mapInt[53] = "HHR";
	mapInt[37] = "EF";

	//多重映射
	QMultiMap<int, QString> mumapInt;

	//哈希表：速度比map快很多，但占用内存比较多
	//实现原理：数组链表，将Key通过哈希算法得到哈希值，再取模容量大小，将对象存取在特定的数组链表；查找时直接寻址在指定数组链表；(空间换时间)
	QHash<int, QString> hashInt;
	hashInt.insert(32, "AFIN");
	hashInt.insert(32, "FFEFEa");
	hashInt.insert(21, "FEFHJJ");

	//多重哈希表
	QMultiHash<int, QString> muhashInt;
	muhashInt.insert(13, "IANFIE");
	muhashInt.insert(13, "IANFIE");
	muhashInt.insert(445, "IANFIE");
	muhashInt.insertMulti(445, "IANFIE");

	//迭代器================================================
	//Java类型迭代器：提供其他高级接口
	QListIterator<int> javaIter(arrInt);
	while (javaIter.hasNext())
	{
		cout << javaIter.next() << " ";
	}

	cout << endl;

	//其他高级接口
	javaIter.toFront();	//移到第一个元素位置
	javaIter.next();	//移动下一个位置，并取得元素的值

	javaIter.toBack();
	javaIter.previous();

	int iNext = javaIter.peekNext();	//不移动位置，取得下一个元素的值
	int iPrev = javaIter.peekPrevious();

	//STL类型迭代器：适用于STL的算法，效率更高
	QList<int>::iterator stlIter = arrInt.begin();
	while (stlIter != arrInt.end())
	{
		cout << *stlIter << " ";
		stlIter++;
	}

	cout << endl;

	//使用STL内置算法重新排序
	sort(arrInt.rbegin(), arrInt.rend());

	//foreach关键字：不能在foreach语句中修改元素的值
	foreach (int iVal, arrInt)
	{
		cout << iVal << " ";
	}
	
	cout << endl;

	return a.exec();
}
