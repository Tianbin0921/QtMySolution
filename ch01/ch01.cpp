#include "ch01.h"

ch01::ch01(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	m_commonLib = new CommonLib();
	QObject::connect(ui.calcButton, SIGNAL(clicked()), this, SLOT(calcSlot()));
}

ch01::~ch01()
{
	delete m_commonLib;
}

void ch01::calcSlot()
{
	int firstvalue = ui.firstValue->text().toInt();//取出第一个文本转化为整数类型  
	int secondvalue = ui.secondValue->text().toInt();
	int resultvalue = m_commonLib->add(firstvalue, secondvalue);//调用静态库方法
	ui.resultValue->setText(QString::number(resultvalue));
}