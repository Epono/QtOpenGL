/********************************************************************************
** Form generated from reading UI file 'left.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEFT_H
#define UI_LEFT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Left
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTreeView *treeView;
    QPushButton *pushButton;

    void setupUi(QWidget *Left)
    {
        if (Left->objectName().isEmpty())
            Left->setObjectName(QString::fromUtf8("Left"));
        Left->resize(400, 300);
        gridLayout_2 = new QGridLayout(Left);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeView = new QTreeView(Left);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 0, 0, 1, 1);

        pushButton = new QPushButton(Left);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Left);

        QMetaObject::connectSlotsByName(Left);
    } // setupUi

    void retranslateUi(QWidget *Left)
    {
        Left->setWindowTitle(QCoreApplication::translate("Left", "Left", nullptr));
        pushButton->setText(QCoreApplication::translate("Left", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Left: public Ui_Left {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEFT_H
