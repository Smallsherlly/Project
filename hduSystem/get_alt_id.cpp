#include "get_alt_id.h"
#include "ui_get_alt_id.h"

get_alt_id::get_alt_id(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::get_alt_id)
{
    ui->setupUi(this);
}

get_alt_id::~get_alt_id()
{
    delete ui;
}
