#pragma once

#include "../include/uic/ui_left.h"
#include <QWidget>

class Left : public QWidget
{
	Q_OBJECT

public:
	Left(QWidget* parent = Q_NULLPTR);
	~Left();

private:
	Ui::Left ui;
};
