#pragma once

#include <QMainWindow>
#include <QHeaderView>
#include <QTextEdit>
#include <QListWidget>

#include "../include/uic/ui_qopengl.h"
#include "../include/glwidget.h"

class QOpenGL : public QMainWindow
{
	Q_OBJECT
	
private:
	Ui::MainWindow ui;

	GLWidget* glWidget;

public:
	QOpenGL(QWidget* parent = Q_NULLPTR);

	QTextEdit* textEdit;
	QListWidget* customerList;
	QListWidget* paragraphsList;

public slots:

protected:
	void keyPressEvent(QKeyEvent* event) override;
};
