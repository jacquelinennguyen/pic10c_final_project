#include "wordinput.h"
#include "ui_wordinput.h"

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
