#include "dialog_student.h"
#include "ui_dialog_student.h"

Dialog_student::Dialog_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_student)
{
    ui->setupUi(this);
    connect(&dialog_select,SIGNAL(ret()),this,SLOT(show()));
    connect(&dialog_update,SIGNAL(ret()),this,SLOT(show()));
}

Dialog_student::~Dialog_student()
{
    delete ui;
}

void Dialog_student::on_quit_clicked()
{
   // CNotify notify2(10000,0,1);
   // client.send_notify(notify2);
    qApp->exit();
}

void Dialog_student::on_return_2_clicked()
{
    this->accept();
    emit ret();
}

void Dialog_student::on_per_info_clicked()
{
    this->hide();
    emit send(m_id);
    dialog_select.show();
    dialog_select.exec();
}

void Dialog_student::recv(int id)
{
    m_id = id;
}

void Dialog_student::on_alt_info_clicked()
{
    this->hide();
    emit send(m_id);
    dialog_update.show();
    dialog_update.exec();

}
