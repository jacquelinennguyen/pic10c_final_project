#include "madlibs.h"
#include "ui_madlibs.h"

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
