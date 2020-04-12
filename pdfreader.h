#pragma once

#include <QtWidgets/QWidget>
#include "ui_pdfreader.h"

class pdfreader : public QWidget
{
	Q_OBJECT

public:
	pdfreader(QWidget *parent = Q_NULLPTR);

private:
	Ui::pdfreaderClass ui;
};
