#include "selectdialog.h"
#include "ui_selectdialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->done,&QPushButton::clicked,[=](){
        StartEnd se;
        se.startDate=ui->startDate->date();
        se.endDate=ui->endDate->date();
        se.startTime=ui->startTime->time();
        se.endTime=ui->endTime->time();
        emit emitDateTime(se);
        emit emitAllFilesNumber((se.endDate.day()-se.startDate.day()+1)*5);
    });
    connect(this,SIGNAL(emitDateTime(StartEnd)),this,SLOT(close()));
}

Dialog::~Dialog()
{
    delete ui;
}
