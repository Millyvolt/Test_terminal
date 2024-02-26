#include "packets.h"
#include "ui_packets.h"

Packets::Packets(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Packets)
{
    ui->setupUi(this);

    ui->lineEdit->setPlaceholderText("Field 1 - input data to send");
    ui->lineEdit_2->setPlaceholderText("Field 2 - input data to send");
    ui->lineEdit_3->setPlaceholderText("Field 3 - input data to send");
    ui->lineEdit_4->setPlaceholderText("Field 4 - input data to send");
    ui->lineEdit_5->setPlaceholderText("Field 5 - input data to send");

    //doesn't working from here
//    ui->lineEdit_2->setClearButtonEnabled(true);
}

Packets::~Packets()
{
    delete ui;
}
