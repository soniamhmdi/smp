#ifndef SMP2_H
#define SMP2_H

#include <QMainWindow>

namespace Ui {
class smp2;
}

class smp2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit smp2(QWidget *parent = nullptr);
    ~smp2();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::smp2 *ui;
};

#endif // SMP2_H
