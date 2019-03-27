#include "madlibs.h"
#include "ui_madlibs.h"
#include "dialog.h"

MadLibs::MadLibs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MadLibs)
{
    ui->setupUi(this);
}

MadLibs::~MadLibs()
{
    delete ui;
}

void MadLibs::on_Story_clicked()
{
    Dialog secdialog;
    secdialog.setModal(true);
    secdialog.exec();

}
