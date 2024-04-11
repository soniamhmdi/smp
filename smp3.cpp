#include "smp3.h"
#include "ui_smp3.h"
#include "smp4.h"
#include "qmessagebox.h"
#include "QString"
#include <ctime>
#include <QIntValidator>

int a;
bool have;

smp3::smp3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::smp3)
{
    srand(time(NULL));

    ui->setupUi(this);

    ui->lineEdit->setValidator(new QIntValidator);


}

smp3::~smp3()
{
    delete ui;
}


void smp3::on_pushButton_2_clicked()
{
    a = rand() % 9000 + 1000 ;
    QMessageBox::information(this,"verify your account","verifiying code : " +QString::number(a) ,"ok."  );
    ui->pushButton_2->setEnabled(false);
}

void have_a(bool t)
{
    have =t ;
}


void smp3::on_pushButton_clicked()
{
    QString input = ui->lineEdit->text();

    int input_int;

    if(input =="" || input =="+" || input == "-" || input.length() !=4)
    {
        goto warn;
    }
    else
    {
        input_int =input.toInt();
    }
    if(input_int != a)
    {
        warn:
        QMessageBox::warning(this,"wrong","wrong code","ok");
        ui->pushButton_2->setEnabled(true);
        a =0;
    }
    else
    {
        smp4 *w4 = new smp4;
        w4->setWindowTitle("information page");
        w4->show();
        this->close();
    }
}

