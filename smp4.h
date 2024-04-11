#ifndef SMP4_H
#define SMP4_H

#include <QMainWindow>

namespace Ui {
class smp4;
}

class smp4 : public QMainWindow
{
    Q_OBJECT

public:
    explicit smp4(QWidget *parent = nullptr);
    ~smp4();

private slots:

    void on_pushButton_clicked();

private:
    Ui::smp4 *ui;
};

#endif // SMP4_H
