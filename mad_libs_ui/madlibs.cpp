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
   // delete wordInput;
    //need to delete all new heap memory
}


void MadLibs::on_Story_1_clicked()
{
    WordInput *wordInput = new WordInput(this);
    wordInput->show();
    this->hide();
}

void MadLibs::on_Story_2_clicked()
{
    WordInput *wordInput = new WordInput(this);
    wordInput->show();
    this->hide();
}

void MadLibs::on_Story_3_clicked()
{
    WordInput *wordInput = new WordInput(this);
    wordInput->show();
    this->hide();
}
