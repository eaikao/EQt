/*******************************
** 作者： 	非正经程序员
** csdn：	https://blog.csdn.net/u012058778
** 公众号：	非正经码农
** 描述：	无
**Copyright ©2020 非正经程序员版权所有
*******************************/

#pragma once

#include <QWidget>
#include "ui_EDemoWidget.h"

class EDemoWidget  : public QWidget {
	Q_OBJECT
public:
	EDemoWidget ();
	~EDemoWidget();

private:
	Ui_EDemoWidgetClass ui;
};
