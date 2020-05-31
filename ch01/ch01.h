#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ch01.h"
#include "CommonLib.h"

using namespace heylink;

class ch01 : public QMainWindow
{
    Q_OBJECT

public:
    ch01(QWidget *parent = Q_NULLPTR);
	~ch01();
private:
    Ui::ch01Class ui;

	CommonLib * m_commonLib;

private slots:
	void calcSlot();
};
