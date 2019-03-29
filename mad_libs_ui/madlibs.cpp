#include "madlibs.h"
#include "ui_madlibs.h"
#include <QStackedWidget>

MadLibs::MadLibs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MadLibs)
{
    ui->setupUi(this);
}

MadLibs::~MadLibs()
{
    delete ui;
   // delete wordInput;
    //need to delete all new heap memory
}



void MadLibs::on_VacationsButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Vacations);
}

void MadLibs::on_SolarButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->OurSolarSystem);
}

void MadLibs::on_ThanksgivingButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Thanksgiving);
}
