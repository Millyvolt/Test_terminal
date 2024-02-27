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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
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
    QSpinBox *spinBoxUsBetweenBytes;
    QLabel *labelBetweenBytes;
    QPushButton *pushButtonSend;

    void setupUi(QWidget *Packets)
    {
        if (Packets->objectName().isEmpty())
            Packets->setObjectName(QString::fromUtf8("Packets"));
        Packets->resize(609, 511);
        lineEdit = new QLineEdit(Packets);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 150, 271, 31));
        lineEdit->setClearButtonEnabled(true);
        lineEdit_2 = new QLineEdit(Packets);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 200, 271, 31));
        lineEdit_2->setClearButtonEnabled(true);
        lineEdit_3 = new QLineEdit(Packets);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 250, 271, 31));
        lineEdit_3->setClearButtonEnabled(true);
        lineEdit_4 = new QLineEdit(Packets);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(40, 300, 271, 31));
        lineEdit_4->setClearButtonEnabled(true);
        lineEdit_5 = new QLineEdit(Packets);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(40, 350, 271, 31));
        lineEdit_5->setClearButtonEnabled(true);
        spinBoxUsBetweenBytes = new QSpinBox(Packets);
        spinBoxUsBetweenBytes->setObjectName(QString::fromUtf8("spinBoxUsBetweenBytes"));
        spinBoxUsBetweenBytes->setGeometry(QRect(40, 50, 91, 31));
        labelBetweenBytes = new QLabel(Packets);
        labelBetweenBytes->setObjectName(QString::fromUtf8("labelBetweenBytes"));
        labelBetweenBytes->setGeometry(QRect(40, 20, 111, 31));
        pushButtonSend = new QPushButton(Packets);
        pushButtonSend->setObjectName(QString::fromUtf8("pushButtonSend"));
        pushButtonSend->setGeometry(QRect(170, 50, 91, 31));

        retranslateUi(Packets);

        QMetaObject::connectSlotsByName(Packets);
    } // setupUi

    void retranslateUi(QWidget *Packets)
    {
        Packets->setWindowTitle(QCoreApplication::translate("Packets", "Form", nullptr));
        spinBoxUsBetweenBytes->setSuffix(QCoreApplication::translate("Packets", ", us", nullptr));
        labelBetweenBytes->setText(QCoreApplication::translate("Packets", "\320\227\320\260\320\264\320\265\321\200\320\266\320\272\320\260", nullptr));
        pushButtonSend->setText(QCoreApplication::translate("Packets", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Packets: public Ui_Packets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKETS_H
