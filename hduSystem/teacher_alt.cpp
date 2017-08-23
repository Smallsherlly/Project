#include "teacher_alt.h"
#include "ui_teacher_alt.h"
#include <QMessageBox>

teacher_alt::teacher_alt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::teacher_alt)
{
    ui->setupUi(this);
    client.connect();
}

teacher_alt::~teacher_alt()
{
    delete ui;
}

void teacher_alt::on_up_buto_clicked()
{
    teacherInfo tea;

    tea.m_id = m_id;

    strcpy(tea.m_name,ui->n_name->text().toStdString().c_str());

    strcpy(tea.m_sex,ui->n_sex->text().toStdString().c_str());

    strcpy(tea.m_phoneNumber,ui->n_phonum->text().toStdString().c_str());

    strcpy(tea.m_birth,ui->n_birth->text().toStdString().c_str());

    strcpy(tea.m_idNumber,ui->n_idNumber->text().toStdString().c_str());

    strcpy(tea.m_nation,ui->n_nation->text().toStdString().c_str());
    tea.m_insClass = ui->n_class->text().toInt();

    strcpy(tea.m_workPlace,ui->n_workp->text().toStdString().c_str());

    strcpy(tea.m_remarks,ui->n_remarks->text().toStdString().c_str());
    CNotify notify(10230,sizeof(teacherInfo),1);
    notify.set_data(tea);
    client.send_notify(notify);
    CNotify notify_ret;
    while(!client.receive_notify(notify_ret));
    if(notify_ret.get_type() == 10231)
    {
        QMessageBox msg;
        msg.setText("操作成功！");
        msg.exec();
    }
}

void teacher_alt::on_ret_clicked()
{
    this->accept();
    emit ret();
}

void teacher_alt::recv(int id)
{
    m_id = id;
}
