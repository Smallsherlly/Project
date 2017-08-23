#include "dialog_update.h"
#include "ui_dialog_update.h"
#include <QMessageBox>

Dialog_update::Dialog_update(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_update)
{
    ui->setupUi(this);
    client.connect();
}

Dialog_update::~Dialog_update()
{
    delete ui;
}

void Dialog_update::on_ret_clicked()
{
    this->accept();
    emit ret();
}

void Dialog_update::on_up_buto_clicked()
{
    studentInfo stu;

    stu.m_id = ui->n_id->text().toInt();

    strcpy(stu.m_name,ui->n_name->text().toStdString().c_str());

    strcpy(stu.m_sex,ui->n_sex->text().toStdString().c_str());

    strcpy(stu.m_phoneNumber,ui->n_phonum->text().toStdString().c_str());

    strcpy(stu.m_birth,ui->n_birth->text().toStdString().c_str());

    strcpy(stu.m_idNumber,ui->n_idNumber->text().toStdString().c_str());

    strcpy(stu.m_nation,ui->n_nation->text().toStdString().c_str());

    strcpy(stu.m_originPlace,ui->n_oriplace->text().toStdString().c_str());

    strcpy(stu.m_remarks,ui->n_remarks->text().toStdString().c_str());
    CNotify notify(10130,sizeof(studentInfo),1);
    notify.set_data(stu);
    client.send_notify(notify);
    CNotify notify_ret;
    while(!client.receive_notify(notify_ret));
    if(notify_ret.get_type() == 10131)
    {
        QMessageBox msg;
        msg.setText("操作成功！");
        msg.exec();
        ui->n_birth->clear();
        ui->n_idNumber->clear();
        ui->n_name->clear();
        ui->n_nation->clear();
        ui->n_sex->clear();
        ui->n_oriplace->clear();
        ui->n_phonum->clear();
        ui->n_remarks->clear();
        ui->n_id->clear();
    }

}

void Dialog_update::recv(int id)
{
    m_id = id;
}
