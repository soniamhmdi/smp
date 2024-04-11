#include "smp4.h"
#include "ui_smp4.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "smp5.h"

smp4::smp4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::smp4)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("g:\\linkedin proje.db");
    database.open();

    ui->spinBox->setMinimum(1900);
    ui->spinBox->setMaximum(2030);

    QStringList JOBS = (QStringList()
                        <<""
                        <<"artificial intelligence engineer"
                        <<"big data developer"
                        <<"community manager"
                        <<"customer success specialist"
                        <<"cybersecurity specialist"
                        <<"data consultant"
                        <<"data engineer"
                        <<"data protection officer"
                        <<"data scientist"
                        <<"dev ops engineer"
                        <<"IT recruiter"
                        <<"private equity analyst"
                        <<"real state agent"
                        <<"requiretment mananger"
                        <<"site reliability engineer"
                        <<"business analyst"
                        <<"community manager"
                        <<"cybersecurity engineer"
                        <<"data scientist"
                        <<"database adminstrator"
                        <<"front end developer"
                        <<"information system architect"
                        <<"Io IT network engineer"
                        <<"IT project manager"
                        <<"industrial computer technician"
                        <<"motion designer"
                        <<"network engineer"
                        <<"seo consultant"
                        <<"security engineer"
                        <<"technical sales engineer"
                        <<"telecommunications technician"
                        <<"UX designer"
                        <<"web designer"
                        <<"webmaster"
                        <<"advertising manager"
                        <<"account manager"
                        <<"art director"
                        <<"creative director"
                        <<"communication assistant"
                        <<"communication officer"
                        <<"corporate journalist"
                        <<"direct marketing manager"
                        <<"director of communication"
                        <<"marketing research manager"
                        <<"press attache"
                        <<"buyer"
                        <<"business manager"
                        <<"export assistant"
                        <<"head of department"
                        <<"profit center manager"
                        <<"sales agent"
                        <<"store manager"
                        <<"blockchain developer"
                        <<"graphic designer"
                        <<"game designer"
                        <<"chat agent"
                        <<"sales"
                        <<"software engineer"
                        <<"teacher"
                        <<"available for employment"
                        <<"unemployed"
                        );

    ui->comboBox->addItems(JOBS);

}

smp4::~smp4()
{
    delete ui;
}


void smp4::on_pushButton_clicked()
{
    QSqlQuery s;
    QString s3,s4,s5,s6,s7;
    s3=ui->lineEdit->text();
    s4=ui->lineEdit_2->text();
    s5=ui->spinBox->text();
    s6=ui->comboBox->currentText();
    s7=ui->lineEdit_3->text();


    s.exec("INSERT INTO user(name,lastname,birth year,job,sch/uni)VALUES('"+s3+"','"+s4+"','"+s5+"','"+s6+"','"+s7+"')");

    smp5 *w5 = new smp5;
    w5->setWindowTitle("nothing for now");
    w5->show();
}

