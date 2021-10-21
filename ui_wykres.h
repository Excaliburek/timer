/********************************************************************************
** Form generated from reading UI file 'wykres.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WYKRES_H
#define UI_WYKRES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Wykres
{
public:

    void setupUi(QDialog *Wykres)
    {
        if (Wykres->objectName().isEmpty())
            Wykres->setObjectName(QString::fromUtf8("Wykres"));
        Wykres->resize(400, 300);

        retranslateUi(Wykres);

        QMetaObject::connectSlotsByName(Wykres);
    } // setupUi

    void retranslateUi(QDialog *Wykres)
    {
        Wykres->setWindowTitle(QCoreApplication::translate("Wykres", "\305\232rednia u\305\202o\305\274e\305\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wykres: public Ui_Wykres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WYKRES_H
