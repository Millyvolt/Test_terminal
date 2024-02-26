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

private:
    Ui::Packets *ui;
};

#endif // PACKETS_H
