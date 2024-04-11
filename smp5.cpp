#include "smp5.h"
#include "ui_smp5.h"

smp5::smp5(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::smp5)
{
    ui->setupUi(this);
}

smp5::~smp5()
{
    delete ui;
}
