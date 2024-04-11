#ifndef SMP3_H
#define SMP3_H

#include <QMainWindow>

namespace Ui {
class smp3;
}

class smp3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit smp3(QWidget *parent = nullptr);
    ~smp3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void have_a();

private:
    Ui::smp3 *ui;
};

#endif // SMP3_H
