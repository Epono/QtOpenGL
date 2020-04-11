#pragma once

#include <QMainWindow>
#include <QHeaderView>
#include "ui_qopengl.h"


#include "../glwidget.h"

class QOpenGL : public QMainWindow
{
	Q_OBJECT
	
private:
	Ui::MainWindow ui;

	GLWidget* glWidget;

public:
	QOpenGL(QWidget* parent = Q_NULLPTR);

public slots:

protected:
	void keyPressEvent(QKeyEvent* event) override;
};
