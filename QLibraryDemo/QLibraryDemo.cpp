#include "QLibraryDemo.h"

#include <qmessagebox.h>

#pragma execution_character_set("UTF-8")

//静态加载，声明导入的函数
extern "C"
{

	__declspec(dllimport) int getMin(int x, int y);

	__declspec(dllimport) int getMax(int x, int y);

}

//加载lib
#pragma comment(lib, "QCustomDLL.lib")



QLibraryDemo::QLibraryDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void QLibraryDemo::on_btnInv1_clicked()
{
	//静态加载===================================
	int iRev = 0;
	iRev = getMin(1, 2);
	QMessageBox::information(this, "计算结果", QString::asprintf("1和2的最小数是%d", iRev));

	iRev = getMax(1, 2);
	QMessageBox::information(this, "计算结果", QString::asprintf("1和2的最大数是%d", iRev));
}

void QLibraryDemo::on_btnInv2_clicked()
{
	//动态加载===================================
	QLibrary lib("QCustomDLL.dll");
	lib.load();

	if (lib.isLoaded())
	{
		typedef int(*funDef)(int, int);

		funDef minFun = (funDef)lib.resolve("getMin");
		funDef maxFun = (funDef)lib.resolve("getMax");

		int iRev = 0;
		iRev = minFun(1, 2);
		QMessageBox::information(this, "计算结果", QString::asprintf("1和2的最小数是%d", iRev));

		iRev = maxFun(1, 2);
		QMessageBox::information(this, "计算结果", QString::asprintf("1和2的最大数是%d", iRev));

		lib.unload();
	}
	else
	{
		QMessageBox::warning(this, "警告", "加载DLL失败！");
	}
}
