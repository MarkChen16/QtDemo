#include "CustomObject.h"

CustomObject::CustomObject(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	//在对象上添加属性
	ui.sbBoyAge->setProperty("isBoy", true);
	ui.sbGrilAge->setProperty("isBoy", false);

	ui.btnBoyInc->setProperty("isBoy", true);
	ui.btnGrilInc->setProperty("isBoy", false);

	//实例化对象，并在对象上添加属性
	boy = new QPerson(tr("小明"), 23, 79);
	boy->setProperty("sex", "男孩");

	girl = new QPerson(tr("小红"), 25, 85);
	girl->setProperty("sex", "女孩");

	//初始化界面
	ui.sbBoyAge->setValue(boy->age());
	ui.sbGrilAge->setValue(girl->age());

	//手动关联信号/槽
	bool bOK = false;
	bOK = connect(ui.btnBoyInc, SIGNAL(clicked()), this, SLOT(incAge()));
	bOK = connect(ui.btnGrilInc, SIGNAL(clicked()), this, SLOT(incAge()));
	bOK = connect(ui.sbBoyAge, SIGNAL(valueChanged(int)), this, SLOT(setAge(int)));
	bOK = connect(ui.sbGrilAge, SIGNAL(valueChanged(int)), this, SLOT(setAge(int)));
	bOK = connect(ui.btnMateInfo, SIGNAL(clicked()), this, SLOT(showMateInfo()));

	bOK = connect(boy, SIGNAL(ageChanged(int)), this, SLOT(personAgeChanged(int)));
	bOK = connect(girl, SIGNAL(ageChanged(int)), this, SLOT(personAgeChanged(int)));
}

CustomObject::~CustomObject()
{
	if (NULL != boy)
	{
		delete boy;
		boy = NULL;
	}

	if (NULL != girl)
	{
		delete girl;
		girl = NULL;
	}
}

void CustomObject::incAge()
{
	if (sender()->property("isBoy").toBool()) boy->incAge();
	else girl->incAge();
}

void CustomObject::setAge(int value)
{
	if (sender()->property("isBoy").toBool()) boy->setAge(value);
	else girl->setAge(value);
}

void CustomObject::personAgeChanged(int value)
{
	QPerson *per = qobject_cast<QPerson *>(sender());

	ui.txtInfo->append(per->name() + "是个" + per->property("age").toString() + "岁的" + per->property("sex").toString());
}

void CustomObject::showMateInfo()
{
	const QMetaObject *mo = boy->metaObject();

	QString strInfo = "类名：" + QString(mo->className());
	for (int i = mo->classInfoOffset(); i < mo->classInfoCount(); ++i)
	{
		//QMetaClassInfo ci = mo->classInfo(i);		//没有找到QT这个类实现的部分
	}

	ui.txtInfo->append(strInfo);
}
