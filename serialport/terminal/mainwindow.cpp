/****************************************************************************
**
** Copyright (C) 2012 Denis Shienkov <denis.shienkov@gmail.com>
** Copyright (C) 2012 Laszlo Papp <lpapp@kde.org>
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtSerialPort module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "console.h"
#include "settingsdialog.h"

#include <QLabel>
#include <QMessageBox>

//! [0]
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::MainWindow),
    m_status(new QLabel),
    m_console(new Console),
    m_settings(new SettingsDialog),
//! [1]
    m_serial(new QSerialPort(this)),
    repeat_timer(new QTimer(this))
//! [1]
{
//! [0]
    m_ui->setupUi(this);
    m_console->setEnabled(false);
//    setCentralWidget(m_console);
//    m_console->setTextInteractionFlags(Qt::TextSelectableByMouse | Qt::TextSelectableByKeyboard);
//    m_console->setMinimumSize(638, 50);

    m_ui->verticalLayout_2->addWidget(m_console);
    m_ui->verticalLayout_2->addWidget(m_ui->hexInConsCheckBox);

    m_ui->actionConnect->setEnabled(true);
    m_ui->actionDisconnect->setEnabled(false);
    m_ui->actionQuit->setEnabled(true);
    m_ui->actionConfigure->setEnabled(true);

    m_ui->actionFastConnect->setIcon(QIcon(":/images/connect_icon.png"));

//    m_ui->gridLayout->addWidget(m_console);

//    m_ui->gridLayout->addWidget(m_ui->hexInConsCheckBox);

    m_ui->statusBar->addWidget(m_status);

    m_ui->plainTextEdit_2->setPlaceholderText("Data field 2");
    m_ui->plainTextEdit->setPlainText("55AA496AD500000000000000000000000000000000000000000000000000"
                                      "000000703A11FA4000000000F0390F00000000000000000070D31467ABA5"
                                      "001BF8FFFFFF0700580055580A00D84BC30D");

    //set sizes of text fields
    m_console->setMinimumSize(650, 300);
    m_console->setMaximumSize(10000, 1000);
    m_ui->plainTextEdit_2->setMinimumSize(650, 40);
    m_ui->plainTextEdit_2->setMaximumSize(10000, 100);
    m_ui->plainTextEdit->setMinimumSize(650, 40);
    m_ui->plainTextEdit->setMaximumSize(10000, 100);

//    QPalette palette = m_ui->label->palette();
//    palette.setColor(m_ui->label->backgroundRole(), Qt::yellow);
//    palette.setColor(m_ui->label->foregroundRole(), Qt::yellow);
//    m_ui->label->setPalette(palette);

    initActionsConnections();

    connect(repeat_timer, &QTimer::timeout, this, &MainWindow::Send_data);

    connect(m_serial, &QSerialPort::errorOccurred, this, &MainWindow::handleError);

//! [2]
    connect(m_serial, &QSerialPort::readyRead, this, &MainWindow::readData);
//! [2]
    connect(m_console, &Console::getData, this, &MainWindow::writeData);
//! [3]
}
//! [3]

MainWindow::~MainWindow()
{
    delete m_settings;
    delete m_ui;
}

//! [4]
void MainWindow::openSerialPort()
{
    const SettingsDialog::Settings p = m_settings->settings();
    m_serial->setPortName(p.name);
    m_serial->setBaudRate(p.baudRate);
    m_serial->setDataBits(p.dataBits);
    m_serial->setParity(p.parity);
    m_serial->setStopBits(p.stopBits);
    m_serial->setFlowControl(p.flowControl);
    if (m_serial->open(QIODevice::ReadWrite)) {
        m_console->setEnabled(true);
        m_console->setLocalEchoEnabled(p.localEchoEnabled);
        m_ui->actionConnect->setEnabled(false);
        m_ui->actionDisconnect->setEnabled(true);
        m_ui->actionConfigure->setEnabled(false);
        showStatusMessage(tr("Connected to %1 : %2, %3, %4, %5, %6")
                          .arg(p.name).arg(p.stringBaudRate).arg(p.stringDataBits)
                          .arg(p.stringParity).arg(p.stringStopBits).arg(p.stringFlowControl));
    } else {
        QMessageBox::critical(this, tr("Error"), m_serial->errorString());

        showStatusMessage(tr("Open error"));
    }
}
//! [4]

//! [5]
void MainWindow::closeSerialPort()
{
    if (m_serial->isOpen())
        m_serial->close();
//    m_console->setEnabled(false);
    m_ui->actionConnect->setEnabled(true);
    m_ui->actionDisconnect->setEnabled(false);
    m_ui->actionConfigure->setEnabled(true);
    showStatusMessage(tr("Disconnected"));
}
//! [5]

void MainWindow::about()
{
    QMessageBox::about(this, tr("About Test Terminal"),
                       tr("The <b>Test Terminal</b> using for "
                          "testing properties."
                           " All rights reserved! Bch"));
}

//! [6]
void MainWindow::writeData(const QByteArray &data)
{
    m_serial->write(data);
    m_console->insertPlainText("\n\n<<<<");
    m_console->putData(data);
    m_console->insertPlainText("\n");
}
//! [6]

//! [7]
void MainWindow::readData()
{
    const QByteArray data = m_serial->readAll();
    m_console->putData(data);
}
//! [7]

//! [8]
void MainWindow::handleError(QSerialPort::SerialPortError error)
{
    if (error == QSerialPort::ResourceError) {
        QMessageBox::critical(this, tr("Critical Error"), m_serial->errorString());
        closeSerialPort();
    }
}
//! [8]

void MainWindow::initActionsConnections()
{
    connect(m_ui->actionConnect, &QAction::triggered, this, &MainWindow::openSerialPort);
    connect(m_ui->actionDisconnect, &QAction::triggered, this, &MainWindow::closeSerialPort);
    connect(m_ui->actionQuit, &QAction::triggered, this, &MainWindow::close);
    connect(m_ui->actionConfigure, &QAction::triggered, this, &MainWindow::showSettingsDialog);//m_settings, &SettingsDialog::show);
    connect(m_ui->actionClear, &QAction::triggered, m_console, &Console::clear);
    connect(m_ui->actionAbout, &QAction::triggered, this, &MainWindow::about);
    connect(m_ui->actionAboutQt, &QAction::triggered, qApp, &QApplication::aboutQt);
}

void MainWindow::showStatusMessage(const QString &message)
{
    m_status->setText(message);
}

void MainWindow::showSettingsDialog()
{
    m_settings->fillPortsInfo();
    m_settings->updateSettings();
    m_settings->show();
}

void MainWindow::Send_data()
{
    if (m_serial->isOpen())
    {
        QString string_tmp =  m_ui->plainTextEdit->toPlainText();
        QByteArray arr_tmp = string_tmp.toLocal8Bit();

        if(hex_checkbox)
        {
            QByteArray arr_hex_decoded = QByteArray::fromHex(arr_tmp);
            writeData(arr_hex_decoded);
        }
        else
            writeData(arr_tmp);
    }
    else
    {
        QMessageBox::information(this, tr("Info"), tr("Com port is not open"));
        if(repeat_timer_on)
        {
            repeat_timer->stop();
            repeat_timer_on = false;
            m_ui->repeat_label->setText("Repeat on");
        }
    }
}

void MainWindow::Label_color(QLabel *label, Qt::GlobalColor color)
{
    QPalette palette = label->palette();
    palette.setColor(label->backgroundRole(), color);
    palette.setColor(label->foregroundRole(), color);
    label->setPalette(palette);

}



/*************************************************************************************************
************************ slots handlers generated from ui: ***************************************/



void MainWindow::on_sendButton_clicked()
{
    if( (repeat_checkbox == true) && (repeat_timer_on == false) )
    {
//        if(repeat_timer_on)
//        {
//            repeat_timer->stop();
//            repeat_timer_on = false;
//            m_ui->repeat_label->setText("Repeat on");
//            Label_color(m_ui->repeat_label, Qt::green);
//        }
//        else
//        {
        Send_data();
        repeat_timer->start(m_ui->spinBox->value());
        repeat_timer_on = true;
        m_ui->repeat_label->setText("Sending");
        Label_color(m_ui->repeat_label, Qt::red);
//        }
    }
    else
        Send_data();

    if(repeat_timer_on)
    {
        repeat_timer->stop();
        repeat_timer_on = false;
        if(repeat_checkbox)
        {
            m_ui->repeat_label->setText("Repeat on");
            Label_color(m_ui->repeat_label, Qt::green);
        }
        else
        {
            m_ui->repeat_label->setText("Repeat off");
            Label_color(m_ui->repeat_label, Qt::black);
        }
    }
}

void MainWindow::on_HexCheckBox_stateChanged(int arg1)
{
    if(arg1)
        hex_checkbox = true;
    else
        hex_checkbox = false;
}

void MainWindow::on_hexInConsCheckBox_stateChanged(int arg1)
{
    if(arg1)
        m_console->hex_in_console = true;
    else
        m_console->hex_in_console = false;
}

void MainWindow::on_actionFastConnect_triggered()
{
    m_serial->setPortName("COM12");
    m_serial->setBaudRate(QSerialPort::Baud115200);
    m_serial->setDataBits(QSerialPort::Data8);
    m_serial->setParity(QSerialPort::NoParity);
    m_serial->setStopBits(QSerialPort::OneStop);
    m_serial->setFlowControl(QSerialPort::NoFlowControl);
    if (m_serial->open(QIODevice::ReadWrite)) {
        m_console->setEnabled(true);
        m_console->setLocalEchoEnabled(true);
        m_ui->actionConnect->setEnabled(false);
        m_ui->actionDisconnect->setEnabled(true);
        m_ui->actionConfigure->setEnabled(false);
        showStatusMessage(tr("Connected to %1 : %2, %3, %4, %5, %6")
                          .arg("COM12").arg(QString::number(m_serial->baudRate())).arg(QString::number(m_serial->dataBits()))
                          .arg(QString::number(m_serial->parity())).arg(QString::number(m_serial->stopBits())).arg(QString::number(m_serial->flowControl())));
    } else {
        QMessageBox::critical(this, tr("Error"), m_serial->errorString());

        showStatusMessage(tr("Open error"));
    }
}

void MainWindow::on_sendButton2_clicked()
{
    if (m_serial->isOpen())
    {
        QString string_tmp =  m_ui->plainTextEdit_2->toPlainText();
        QByteArray arr_tmp = string_tmp.toLocal8Bit();

        if(hex_checkbox2)
        {
            QByteArray arr_hex_decoded = QByteArray::fromHex(arr_tmp);
            writeData(arr_hex_decoded);
        }
        else
            writeData(arr_tmp);
    }
    else
        QMessageBox::information(this, tr("Info"), tr("Com port is not open"));
}

void MainWindow::on_repeatCheckBox_stateChanged(int arg1)
{
    if(arg1)
    {
        repeat_checkbox = true;
        m_ui->repeat_label->setText("Repeat on");
        Label_color(m_ui->repeat_label, Qt::green);
    }
    else
    {
        repeat_checkbox = false;
        m_ui->repeat_label->setText("Repeat off");
        Label_color(m_ui->repeat_label, Qt::black);
    }

    if(repeat_timer_on)
    {
        m_ui->repeat_label->setText("Sending");
        Label_color(m_ui->repeat_label, Qt::red);
    }
}
