#ifndef SMP_H
#define SMP_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SMP; }
QT_END_NAMESPACE

class SMP : public QWidget
{
    Q_OBJECT

public:
    SMP(QWidget *parent = nullptr);
    ~SMP();

private slots:

    void on_pushButton_clicked();

private:
    Ui::SMP *ui;
};
#endif // SMP_H
