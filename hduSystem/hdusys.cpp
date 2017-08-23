#include "hdusys.h"
#include "ui_hdusys.h"
#include <QTextCodec>

hduSys::hduSys(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hduSys)
{
    ui->setupUi(this);
    QTextCodec* codec = QTextCodec::codecForName("utf8");
    QTextCodec::setCodecForCStrings(codec);
    connect(&tea_log,SIGNAL(ret()),this,SLOT(show()));
    connect(&stu_log,SIGNAL(ret()),this,SLOT(show()));
}

hduSys::~hduSys()
{
    delete ui;

}



void hduSys::on_tea_log_clicked()
{
    this->hide();
    tea_log.show();
    tea_log.exec();
}

void hduSys::on_stu_log_clicked()
{
    this->hide();
    stu_log.show();
    stu_log.exec();
}
