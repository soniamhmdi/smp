#include "smp.h"
#include "ui_smp.h"
#include "smp2.h"

SMP::SMP(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SMP)
{
    ui->setupUi(this);
}

SMP::~SMP()
{
    delete ui;
}

void SMP::on_pushButton_clicked()
{
    smp2 *w2 = new smp2;
    w2->setWindowTitle("start page");
    w2->show();
    this->close();
}

