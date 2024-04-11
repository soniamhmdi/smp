#ifndef SMP5_H
#define SMP5_H

#include <QMainWindow>

namespace Ui {
class smp5;
}

class smp5 : public QMainWindow
{
    Q_OBJECT

public:
    explicit smp5(QWidget *parent = nullptr);
    ~smp5();

private:
    Ui::smp5 *ui;
};

#endif // SMP5_H
