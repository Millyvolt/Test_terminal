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
#include <QDateTime>
#include <QScrollBar>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::MainWindow),
    m_status(new QLabel),
    m_console(new Console),
    m_settings(new SettingsDialog),
    m_serial(new QSerialPort(this)),
    repeat_timer(new QTimer(this))
{
    m_ui->setupUi(this);

//    m_console->setEnabled(false);
//    setCentralWidget(m_console);
//    m_ui->verticalLayout_2->addWidget(m_console);

    //my console setting up

    QPalette *text3_pal = new QPalette;
    text3_pal->setColor(QPalette::Base, Qt::black);
    text3_pal->setColor(QPalette::Text, Qt::green);
    m_ui->plainTextEdit_3->setPalette(*text3_pal);

//    m_ui->gridLayout->addWidget(m_ui->plainTextEdit_3);
//    m_ui->gridLayout->addWidget(m_ui->hexInConsoleCheckBox);

    m_ui->actionConnect->setEnabled(true);
    m_ui->actionDisconnect->setEnabled(false);
    m_ui->actionQuit->setEnabled(true);
    m_ui->actionConfigure->setEnabled(true);

    m_ui->actionFastConnect->setIcon(QIcon(":/images/lightning_icon.png"));

    m_ui->statusBar->addWidget(m_status);

    m_ui->plainTextEdit_2->setPlaceholderText("Data field 2");
    m_ui->plainTextEdit->setPlainText("55AA496AD500000000000000000000000000000000000000000000000000"
                                      "000000703A11FA4000000000F0390F00000000000000000070D31467ABA5"
                                      "001BF8FFFFFF0700580055580A00D84BC30D");

    //set sizes of text fields
    m_console->setMinimumSize(650, 200);
    m_console->setMaximumSize(10000, 1000);
    m_ui->plainTextEdit_3->setMinimumSize(650, 200);
    m_ui->plainTextEdit_3->setMaximumSize(10000, 1000);
    m_ui->plainTextEdit_2->setMinimumSize(650, 40);
    m_ui->plainTextEdit_2->setMaximumSize(10000, 100);
    m_ui->plainTextEdit->setMinimumSize(650, 40);
    m_ui->plainTextEdit->setMaximumSize(10000, 100);


    initActionsConnections();

    connect(repeat_timer, &QTimer::timeout, this, &MainWindow::Send_data);

    connect(m_serial, &QSerialPort::errorOccurred, this, &MainWindow::handleError);
    connect(m_serial, &QSerialPort::readyRead, this, &MainWindow::readData);
    connect(m_console, &Console::getData, this, &MainWindow::writeData);
}

MainWindow::~MainWindow()
{
    delete m_settings;
    delete m_ui;
}

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

void MainWindow::about()
{
    QMessageBox::about(this, tr("About Test Terminal"),
                       tr("The <b>Test Terminal</b> using for "
                          "testing properties."
                           " All rights reserved! Bch"));
}

void MainWindow::writeData(const QByteArray &data)
{
    if (m_serial->isOpen())
    {
        m_serial->write(data);
        m_console->insertPlainText("\n\n<<<<");
        m_console->putData(data);
        m_console->insertPlainText("\n");
    }
    else
        QMessageBox::information(this, tr("Info"), tr("Com port is not open"));
}

void MainWindow::readData()
{
    const QByteArray data = m_serial->readAll();
    QTime time = QTime::currentTime();

    //    m_console->putData(data);

    m_ui->plainTextEdit_3->moveCursor(QTextCursor::End, QTextCursor::MoveAnchor);

    if(time_checkbox)
        m_ui->plainTextEdit_3->insertPlainText("\n" + time.toString() + ":" + QString::number(time.msec()) + "\t");

    if(hex_console)
        m_ui->plainTextEdit_3->insertPlainText( (time_checkbox? "" : "\n") + data.toHex(' '));
    else
        m_ui->plainTextEdit_3->insertPlainText(data);

    QScrollBar *bar = m_ui->plainTextEdit_3->verticalScrollBar();
    bar->setValue(bar->maximum());
}

void MainWindow::handleError(QSerialPort::SerialPortError error)
{
    if (error == QSerialPort::ResourceError) {
        QMessageBox::critical(this, tr("Critical Error"), m_serial->errorString());
        closeSerialPort();
    }
}

void MainWindow::initActionsConnections()
{
    connect(m_ui->actionConnect, &QAction::triggered, this, &MainWindow::openSerialPort);
    connect(m_ui->actionDisconnect, &QAction::triggered, this, &MainWindow::closeSerialPort);
    connect(m_ui->actionQuit, &QAction::triggered, this, &MainWindow::close);
    connect(m_ui->actionConfigure, &QAction::triggered, this, &MainWindow::showSettingsDialog);//m_settings, &SettingsDialog::show);
//    connect(m_ui->actionClear, &QAction::triggered, m_console, &Console::clear);
    connect(m_ui->actionClear, &QAction::triggered, m_ui->plainTextEdit_3, &QPlainTextEdit::clear);
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
            if(repeat_checkbox)
            {
                m_ui->repeat_label->setText("Repeat on");
                Set_label_color(m_ui->repeat_label, Qt::green);
            }
            else
            {
                m_ui->repeat_label->setText("Repeat off");
                Set_label_color(m_ui->repeat_label, Qt::black);
            }
        }
    }
}

void MainWindow::Set_label_color(QLabel *label, Qt::GlobalColor color)
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
    if( repeat_checkbox == true && repeat_timer_on == false && m_serial->isOpen() )
    {
        Send_data();
        repeat_timer->start(m_ui->spinBox->value());
        repeat_timer_on = true;
        m_ui->repeat_label->setText("Sending");
        Set_label_color(m_ui->repeat_label, Qt::red);
    }
    else if(!m_serial->isOpen())
        QMessageBox::information(this, tr("Info"), tr("Com port is not open"));
    else if(repeat_timer_on)
    {
        repeat_timer->stop();
        repeat_timer_on = false;
        if(repeat_checkbox)
        {
            m_ui->repeat_label->setText("Repeat on");
            Set_label_color(m_ui->repeat_label, Qt::green);
        }
        else
        {
            m_ui->repeat_label->setText("Repeat off");
            Set_label_color(m_ui->repeat_label, Qt::black);
        }
    }
    else
        Send_data();
}

void MainWindow::on_HexCheckBox_stateChanged(int arg1)
{
    if(arg1)
        hex_checkbox = true;
    else
        hex_checkbox = false;
}

void MainWindow::on_hexInConsoleCheckBox_stateChanged(int arg1)
{
    if(arg1)
        hex_console = true;
    else
        hex_console = false;
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
        Set_label_color(m_ui->repeat_label, Qt::green);
    }
    else
    {
        repeat_checkbox = false;
        m_ui->repeat_label->setText("Repeat off");
        Set_label_color(m_ui->repeat_label, Qt::black);
    }

    if(repeat_timer_on)
    {
        m_ui->repeat_label->setText("Sending");
        Set_label_color(m_ui->repeat_label, Qt::red);
    }
}

void MainWindow::on_timeCheckBox_stateChanged(int arg1)
{
    if(arg1)
        time_checkbox = true;
    else
        time_checkbox = false;
}
