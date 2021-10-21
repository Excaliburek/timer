/********************************************************************************
** Form generated from reading UI file 'okienko1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKIENKO1_H
#define UI_OKIENKO1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_okienko1
{
public:
    QAction *actionWykres;
    QWidget *centralwidget;
    QFrame *verticalFrame;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QMenuBar *menubar;
    QMenu *menuTimer;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *okienko1)
    {
        if (okienko1->objectName().isEmpty())
            okienko1->setObjectName(QString::fromUtf8("okienko1"));
        okienko1->setWindowModality(Qt::WindowModal);
        okienko1->resize(800, 400);
        okienko1->setMinimumSize(QSize(800, 400));
        okienko1->setMaximumSize(QSize(800, 400));
        actionWykres = new QAction(okienko1);
        actionWykres->setObjectName(QString::fromUtf8("actionWykres"));
        centralwidget = new QWidget(okienko1);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalFrame = new QFrame(centralwidget);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setGeometry(QRect(610, 10, 160, 331));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalFrame->sizePolicy().hasHeightForWidth());
        verticalFrame->setSizePolicy(sizePolicy);
        verticalFrame->setMinimumSize(QSize(160, 201));
        verticalFrame->setMaximumSize(QSize(160, 16777215));
        verticalFrame->setLayoutDirection(Qt::LeftToRight);
        verticalFrame->setAutoFillBackground(false);
        verticalFrame->setFrameShape(QFrame::Box);
        pushButton = new QPushButton(verticalFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 10, 80, 21));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMaximumSize(QSize(80, 21));
        groupBox = new QGroupBox(verticalFrame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 141, 281));
        groupBox->raise();
        pushButton->raise();
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 30, 321, 71));
        label->setMaximumSize(QSize(321, 71));
        label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 160, 401, 161));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(120, 100, 401, 41));
        groupBox_3->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        groupBox_3->setFlat(false);
        okienko1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(okienko1);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuTimer = new QMenu(menubar);
        menuTimer->setObjectName(QString::fromUtf8("menuTimer"));
        okienko1->setMenuBar(menubar);
        statusbar = new QStatusBar(okienko1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        okienko1->setStatusBar(statusbar);

        menubar->addAction(menuTimer->menuAction());
        menuTimer->addAction(actionWykres);

        retranslateUi(okienko1);

        QMetaObject::connectSlotsByName(okienko1);
    } // setupUi

    void retranslateUi(QMainWindow *okienko1)
    {
        okienko1->setWindowTitle(QCoreApplication::translate("okienko1", "Qtimer", nullptr));
        actionWykres->setText(QCoreApplication::translate("okienko1", "Wykres", nullptr));
        pushButton->setText(QCoreApplication::translate("okienko1", "Wyczy\305\233\304\207", nullptr));
        groupBox->setTitle(QCoreApplication::translate("okienko1", "Czasy", nullptr));
        label->setText(QCoreApplication::translate("okienko1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">Wci\305\233nij spacje</span></p></body></html>", nullptr));
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QCoreApplication::translate("okienko1", "Scramble", nullptr));
        menuTimer->setTitle(QCoreApplication::translate("okienko1", "Zobacz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class okienko1: public Ui_okienko1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKIENKO1_H
