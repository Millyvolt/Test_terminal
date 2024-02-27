#ifndef PACKETS_H
#define PACKETS_H

#include <QWidget>

namespace Ui {
class Packets;
}

class Packets : public QWidget
{
    Q_OBJECT

public:
    explicit Packets(QWidget *parent = nullptr);
    ~Packets();

signals:
    void send_packet(QByteArray & ba);

private slots:
    void on_spinBoxUsBetweenBytes_valueChanged(int arg1);

    void on_pushButtonSend_clicked();

private:
    Ui::Packets *ui;

    QByteArray packet_to_send;
};

#endif // PACKETS_H
