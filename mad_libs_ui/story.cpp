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

}

void Story::on_pushButton_clicked()
{
    hide();
}

void Story::on_pushButton_2_clicked()
{
    close();
}
