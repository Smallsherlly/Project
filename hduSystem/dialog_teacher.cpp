#include "dialog_teacher.h"
#include "ui_dialog_teacher.h"
#include <iostream>
using namespace std;

Dialog_teacher::Dialog_teacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_teacher)
{
    ui->setupUi(this);
    client.connect();
    connect(&dialog,SIGNAL(ret()),this,SLOT(show()));
    connect(&dialog_del,SIGNAL(ret()),this,SLOT(show()));
    connect(&dialog_select,SIGNAL(ret()),this,SLOT(show()));
    connect(&dialog_update,SIGNAL(ret()),this,SLOT(show()));
    connect(&tea_alt,SIGNAL(ret()),this,SLOT(show()));
    connect(&tea_sel,SIGNAL(ret()),this,SLOT(show()));
    connect(this,SIGNAL(send(int)),&tea_sel,SLOT(recv(int)));
    connect(this,SIGNAL(send(int)),&tea_alt,SLOT(recv(int)));
}

Dialog_teacher::~Dialog_teacher()
{
    delete ui;
}

void Dialog_teacher::on_m_add_clicked()
{
    this->hide();
    dialog.show();
    dialog.exec();

}

void Dialog_teacher::on_m_del_clicked()
{
    this->hide();
    emit send(m_id);
    dialog_del.show();
    dialog_del.exec();

}

void Dialog_teacher::on_m_update_clicked()
{
    this->hide();
    emit send(m_id);
    dialog_update.show();
    dialog_update.exec();

}

void Dialog_teacher::on_m_select_clicked()
{
    this->hide();
    emit send(m_id);
    dialog_select.show();
    dialog_select.exec();

}

void Dialog_teacher::on_return_2_clicked()
{
   // CNotify notify2(10000,0,1);
   // client.send_notify(notify2);
    this->accept();
    emit ret();
}

void Dialog_teacher::on_quit_clicked()
{
    qApp->exit();
}

void Dialog_teacher::recv(int id)
{
    m_id = id;
}

void Dialog_teacher::on_per_info_clicked()
{
    this->hide();
    emit send(m_id);
    tea_sel.show();
    tea_sel.exec();
}

void Dialog_teacher::on_alt_info_clicked()
{
    this->hide();
    emit send(m_id);
    tea_alt.show();
    tea_alt.exec();
}
