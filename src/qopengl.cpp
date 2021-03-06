#include <QMenu>
#include <QDebug>
#include <QInputDialog>
#include <QFileDialog>
#include <QDir>
#include <QKeyEvent>
#include <QTimer>
#include <QSplitter>
#include <QDockWidget>

#include "../include/qopengl.h"
#include "../include/left.h"

QOpenGL::QOpenGL(QWidget* parent) : QMainWindow(parent) {
	ui.setupUi(this);

	glWidget = new GLWidget;
	glWidget->setBaseSize(QSize(800, 450));
	setCentralWidget(glWidget);

	// Starting update loop
	void(QOpenGLWidget:: * slot)() = &QOpenGLWidget::update;
	QTimer* timer = new QTimer();
	(void)connect(timer, &QTimer::timeout, glWidget, slot);
	timer->start(16);


	QDockWidget* dock = new QDockWidget(tr("Left"), ui.centralwidget);
	dock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea | Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);
	Left* leftWidget = new Left();
	dock->setWidget(leftWidget);
	addDockWidget(Qt::LeftDockWidgetArea, dock);


	dock = new QDockWidget(tr("Customers"), ui.centralwidget);
	dock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea | Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);
	customerList = new QListWidget(dock);
	customerList->addItems(QStringList()
		<< "John Doe, Harmony Enterprises, 12 Lakeside, Ambleton"
		<< "Jane Doe, Memorabilia, 23 Watersedge, Beaton"
		<< "Tammy Shea, Tiblanka, 38 Sea Views, Carlton"
		<< "Tim Sheen, Caraba Gifts, 48 Ocean Way, Deal"
		<< "Sol Harvey, Chicos Coffee, 53 New Springs, Eccleston"
		<< "Sally Hobart, Tiroli Tea, 67 Long River, Fedula");
	dock->setWidget(customerList);
	addDockWidget(Qt::RightDockWidgetArea, dock);

	dock = new QDockWidget(tr("Paragraphs"), ui.centralwidget);
	dock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea | Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);
	paragraphsList = new QListWidget(dock);
	paragraphsList->addItems(QStringList()
		<< "Thank you for your payment which we have received today."
		<< "Your order has been dispatched and should be with you "
		"within 28 days."
		<< "We have dispatched those items that were in stock. The "
		"rest of your order will be dispatched once all the "
		"remaining items have arrived at our warehouse. No "
		"additional shipping charges will be made."
		<< "You made a small overpayment (less than $5) which we "
		"will keep on account for you, or return at your request."
		<< "You made a small underpayment (less than $1), but we have "
		"sent your order anyway. We'll add this underpayment to "
		"your next bill."
		<< "Unfortunately you did not send enough money. Please remit "
		"an additional $. Your order will be dispatched as soon as "
		"the complete amount has been received."
		<< "You made an overpayment (more than $5). Do you wish to "
		"buy more items, or should we return the excess to you?");
	dock->setWidget(paragraphsList);
	addDockWidget(Qt::BottomDockWidgetArea, dock);
}

void QOpenGL::keyPressEvent(QKeyEvent* e)
{
	if (e->key() == Qt::Key_Escape)
		close();
	else
		QWidget::keyPressEvent(e);
}