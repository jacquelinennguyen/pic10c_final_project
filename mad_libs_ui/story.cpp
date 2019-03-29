#include "story.h"
#include "madlibs.h"
#include "ui_story.h"

Story::Story(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Story)
{
    ui->setupUi(this);
}

Story::~Story()
{
    delete ui;
    //delete mainWindow;
}
