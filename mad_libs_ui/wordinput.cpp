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
}

void WordInput::on_buttonBox_accepted()
{
   hide();
   story = new Story(this);
   story->show();
}
