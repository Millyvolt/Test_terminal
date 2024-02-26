/********************************************************************************
** Form generated from reading UI file 'packets.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKETS_H
#define UI_PACKETS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Packets
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;

    void setupUi(QWidget *Packets)
    {
        if (Packets->objectName().isEmpty())
            Packets->setObjectName(QString::fromUtf8("Packets"));
        Packets->resize(582, 418);
        lineEdit = new QLineEdit(Packets);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 100, 271, 31));
        lineEdit->setClearButtonEnabled(true);
        lineEdit_2 = new QLineEdit(Packets);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 150, 271, 31));
        lineEdit_2->setClearButtonEnabled(true);
        lineEdit_3 = new QLineEdit(Packets);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(20, 200, 271, 31));
        lineEdit_3->setClearButtonEnabled(true);
        lineEdit_4 = new QLineEdit(Packets);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(20, 250, 271, 31));
        lineEdit_4->setClearButtonEnabled(true);
        lineEdit_5 = new QLineEdit(Packets);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(20, 300, 271, 31));
        lineEdit_5->setClearButtonEnabled(true);

        retranslateUi(Packets);

        QMetaObject::connectSlotsByName(Packets);
    } // setupUi

    void retranslateUi(QWidget *Packets)
    {
        Packets->setWindowTitle(QCoreApplication::translate("Packets", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Packets: public Ui_Packets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKETS_H
