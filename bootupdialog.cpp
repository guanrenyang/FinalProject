#include "bootupdialog.h"
#include "ui_bootupdialog.h"

BootUpDialog::BootUpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BootUpDialog)
{
    ui->setupUi(this);
    connect(ui->ok,&QPushButton::clicked,this,&QDialog::close);
}

BootUpDialog::~BootUpDialog()
{
    delete ui;
}
