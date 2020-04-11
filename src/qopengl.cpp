#include "../include/qopengl.h"

#include <QMenu>
#include <QDebug>
#include <QInputDialog>
#include <QFileDialog>
#include <QDir>
#include <QKeyEvent>
#include <QTimer>

QOpenGL::QOpenGL(QWidget* parent) : QMainWindow(parent) {
	ui.setupUi(this);

	
	QGridLayout* openGLLayout = new QGridLayout();
	ui.widgetOpenGL->setLayout(openGLLayout);
	glWidget = new GLWidget;
	openGLLayout->addWidget(glWidget);

	void(QOpenGLWidget:: * slot)() = &QOpenGLWidget::update;

	QTimer* timer = new QTimer();
	(void)connect(timer, &QTimer::timeout, glWidget, slot);
	timer->start(16);

}

void QOpenGL::keyPressEvent(QKeyEvent* e)
{
	if (e->key() == Qt::Key_Escape)
		close();
	else
		QWidget::keyPressEvent(e);
}