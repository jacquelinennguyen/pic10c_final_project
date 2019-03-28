#include "wordinput.h"
#include "ui_wordinput.h"
#include "madlibs.h"
#include "story.h"

WordInput::WordInput(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WordInput)
{
    ui->setupUi(this);
}

WordInput::~WordInput()
{
    delete ui;
    //delete story;
    //delete mainW;
}

void WordInput::on_buttonBox_accepted()
{
   hide();
   Story *story = new Story(this);
   story->show();
}



void WordInput::on_buttonBox_rejected()
{
    MadLibs *mainW = new MadLibs(this);
    mainW->show();
    this->hide();
}
