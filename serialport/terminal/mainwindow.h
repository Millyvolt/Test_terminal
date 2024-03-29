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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QTimer>
#include <QTextCursor>


#define LED_ON_DURATION_MS            100


QT_BEGIN_NAMESPACE

class QLabel;

namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE

class Console;
class SettingsDialog;
class Packets;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void writeDataPackets(const QByteArray &data);

private slots:
    void openSerialPort();
    void closeSerialPort();
    void about();
    void writeData(const QByteArray &data);
    void readData();

//    void writeTextData();

//    void Repeat_timeout();

    void handleError(QSerialPort::SerialPortError error);

    void on_sendButton_clicked();

    void on_HexCheckBox_stateChanged(int arg1);

    void on_hexInConsoleCheckBox_stateChanged(int arg1);

    void on_actionFastConnect_triggered();

    void on_sendButton2_clicked();

    void on_repeatCheckBox_stateChanged(int arg1);

    void on_timeCheckBox_stateChanged(int arg1);

    void on_lineEdit_returnPressed();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_searchResetButton_clicked();

    void on_checkBoxHex2_stateChanged(int arg1);

    void on_checkBoxRepeat2_stateChanged(int arg1);

    void on_checkBoxCapture_stateChanged(int arg1);


    void on_actionPackets_triggered();

private:
    void initActionsConnections();

private:
    void showStatusMessage(const QString &message);

    void showSettingsDialog();

    void Send_data();
    void Send_data2();
    void Set_label_color(QLabel *label, Qt::GlobalColor color);
    void LedRxOff();
    void LedTxOff();

    Ui::MainWindow *m_ui = nullptr;
    QLabel *m_status = nullptr;
    Console *m_console = nullptr;
    SettingsDialog *m_settings = nullptr;
    QSerialPort *m_serial = nullptr;
    Packets * ppackets{nullptr};

    bool hex_checkbox = false;
    bool hex_checkbox2 = false;
    bool repeat_checkbox = false;
    bool repeat_checkbox2 = false;
    bool repeat_timer_on = false;
    bool repeat_timer_on2 = false;
    bool time_checkbox = false;
    bool hex_console = false;
    bool start_search = true;
    bool capture_mode = false;

    QTimer *repeat_timer = nullptr;
    QTimer *repeat_timer2 = nullptr;

    //timers for leds TX Rx
    QTimer *ledRx_timer = nullptr;
    QTimer *ledTx_timer = nullptr;

    QTextCursor *cursor = nullptr;

    int pause_us{100};
};

#endif // MAINWINDOW_H
