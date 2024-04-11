#include "smp2.h"
#include "ui_smp2.h"
#include"qmessagebox.h"
#include "smp3.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
int r;
smp2::smp2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::smp2)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("g:\\linkedin proje.db");
    database.open();
}

smp2::~smp2()
{
    delete ui;
}

void smp2::on_pushButton_2_clicked()
{
    r = rand()%5;
    switch(r){
    case 0:
        ui->label_3->setStyleSheet("image: url(:/new/prefix2/pas2.png);");
        break;
    case 1:
        ui->label_3->setStyleSheet("image: url(:/new/prefix2/pas3.jpg);");
        break;
    case 2:
        ui->label_3->setStyleSheet("image: url(:/new/prefix2/pas4.png);");
        break;
    case 3:
        ui->label_3->setStyleSheet("image: url(:/new/prefix2/pas5.png);");
        break;
    case 4:
        ui->label_3->setStyleSheet("image: url(:/new/prefix1/pas1.png);");
        break;
    }
    ui->pushButton_2->setEnabled(false);
}


void smp2::on_pushButton_clicked()
{
    if(r==0){
        if(ui->lineEdit_2 ->text()=="NF7Nz")
        {
            smp3 *w3 = new smp3;
            w3->setWindowTitle("security check");
            w3->show();
            this->close();
        }
        else{
            QMessageBox::warning(this,"wrong code","enter the correct code","try again");
            ui->lineEdit_2->setText("");
        }
    }
    else if(r==1){
        if(ui->lineEdit_2->text()=="4SZXT")
        {
            smp3 *w3 = new smp3;
            w3->setWindowTitle("security check");
            w3->show();
            this->close();
        }
        else{
              QMessageBox::warning(this,"wrong code","enter the correct code","try again");
              ui->lineEdit_2->setText("");
        }

    }
    else if(r==2){
        if(ui->lineEdit_2->text()=="c2jz98")
        {
            smp3 *w3 = new smp3;
            w3->setWindowTitle("security check");
            w3->show();
            this->close();
        }
        else{
              QMessageBox::warning(this,"wrong code","enter the correct code","try again");
              ui->lineEdit_2->setText("");
        }

    }
    else if(r==3){
        if(ui->lineEdit_2->text()=="263S2V")
        {
            smp3 *w3 = new smp3;
            w3->setWindowTitle("security check");
            w3->show();
            this->close();
        }
        else{
              QMessageBox::warning(this,"wrong code","enter the correct code","try again");
              ui->lineEdit_2->setText("");
        }
    }
    else if(r==4){
        if(ui->lineEdit_2->text()=="Td4eva")
        {
            smp3 *w3 = new smp3;
            w3->setWindowTitle("security check");
            w3->show();
            this->close();

        }
        else{
              QMessageBox::warning(this,"wrong code","enter the correct code","try again");
              ui->lineEdit_2->setText("");
        }
    }
}


void smp2::on_pushButton_3_clicked()
{
    if(ui->lineEdit_3->text()==""||ui->lineEdit_4->text()=="")
    {
        QMessageBox::warning(this,"warning","enter username & password","ok");
    }

    QSqlQuery q;
    QString s1,s2;
    QString n;
    s1=ui->lineEdit_3->text();
    s2=ui->lineEdit_4->text();
    q.exec("SELECT username FROM user WHERE username='"+n+"'");

    if(q.first())
    {
        QMessageBox::warning(this,"warning","this username is taken please enter another username","ok");
    }
    else
    {
        QSqlQueryModel *m = new QSqlQueryModel;
        m->setQuery(q);
    }


    q.exec("INSERT INTO user(username,password)VALUES('"+s1+"','"+s2+"')");

}

