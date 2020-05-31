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
	int firstvalue = ui.firstValue->text().toInt();//ȡ����һ���ı�ת��Ϊ��������  
	int secondvalue = ui.secondValue->text().toInt();
	int resultvalue = m_commonLib->add(firstvalue, secondvalue);//���þ�̬�ⷽ��
	ui.resultValue->setText(QString::number(resultvalue));
}