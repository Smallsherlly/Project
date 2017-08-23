#include <dialog.h>
#include <string.h>
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    client.connect();

}
void Dialog::studentInfo_c(CClientSock& client)
{
        studentInfo stu;

        stu.m_id = ui->id->text().toInt();

        strcpy(stu.m_name,ui->name->text().toStdString().c_str());

        strcpy(stu.m_sex,ui->sex->text().toStdString().c_str());

        strcpy(stu.m_phoneNumber,ui->phonum->text().toStdString().c_str());

        strcpy(stu.m_birth,ui->birth->text().toStdString().c_str());

        strcpy(stu.m_idNumber,ui->idnum->text().toStdString().c_str());

        strcpy(stu.m_nation,ui->nation->text().toStdString().c_str());

        strcpy(stu.m_originPlace,ui->oriplace->text().toStdString().c_str());

        strcpy(stu.m_remarks,ui->remarks->text().toStdString().c_str());
        CNotify notify(10110,sizeof(studentInfo),1);
        notify.set_data(stu);
        client.send_notify(notify);
        CNotify notify_ret;
        while(!client.receive_notify(notify_ret));
        if(notify_ret.get_type() == 10111)
        {
            QMessageBox msg;
            msg.setText("操作成功！");
            msg.exec();
            ui->m_birth->clear();
            ui->m_idNum->clear();
            ui->m_name->clear();
            ui->m_nation->clear();
            ui->m_sex->clear();
            ui->m_oriplace->clear();
            ui->m_phnum->clear();
            ui->m_remarks->clear();
            ui->m_id->clear();
        }

}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_input_clicked()
{
    studentInfo_c(client);
}

void Dialog::on_ret_clicked()
{
  //  CNotify notify2(10000,0,1);
  //  client.send_notify(notify2);
    this->accept();
    emit ret();
}
