#include "madlibs.h"
#include "ui_madlibs.h"
#include "story.h"
#include "ui_story.h"
#include <QStackedWidget>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

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

void MadLibs::on_ThanksgivingButtonBox_accepted()
{
    QObject::connect(ui->thx_noun1, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_noun2, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_noun3, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_noun4, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_noun5, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_noun6, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_noun7, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_adj1, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_adj2, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_body, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_verb, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_female, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_liquid, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_person, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_plbody, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_plnoun1, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));
    QObject::connect(ui->thx_plnoun2, SIGNAL(textChanged(QString)), this, SLOT(thanksStory()));

    Story *story = new Story(this);
    story->ui->storyLabel->setText(readStory("C:\\Users\\beuyenj\\Documents\\le college\\PIC10C\\final project\\pic10c_final_project\\mad_libs_ui\\thanksgiving.txt"));
    story->show();
}

void MadLibs::on_ThanksgivingButtonBox_rejected()
{

}

void MadLibs::on_SolarButtonBox_accepted()
{

}

void MadLibs::on_SolarButtonBox_rejected()
{

}

void MadLibs::on_VacationsButtonBox_accepted()
{

}

void MadLibs::on_VacationsButtonBox_rejected()
{

}

QString MadLibs::readStory(QString f) {
    QFile file(f);
    //file.open(QFile::Text);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        //QMessageBox::warning(this,"title","file not open");
    }
    QTextStream in(&file);
    QString s = in.readAll();
    file.close();
    return s;
}

//void printStory(QString f) {}

void MadLibs::thanksStory() {
    QString nouns[7];
    nouns[0] = ui->thx_noun1->text(); nouns[1] = ui->thx_noun2->text();
    nouns[2] = ui->thx_noun3->text(); nouns[3] = ui->thx_noun4->text();
    nouns[4] = ui->thx_noun5->text(); nouns[5] = ui->thx_noun6->text();
    nouns[6] = ui->thx_noun7->text();

    QString adj1 = ui->thx_adj1->text(); QString adj2 = ui->thx_adj2->text();
    QString adjs[] = {adj1,adj2};
    QString verb = ui->thx_verb->text(); QString body = ui->thx_body->text();
    QString verbs[] = {verb};
    QString female = ui->thx_female->text(); QString liquid = ui->thx_liquid->text();
    QString person = ui->thx_person->text(); QString plbody = ui->thx_plbody->text();
    QString plnoun1 = ui->thx_plnoun1->text(); QString plnoun2 = ui->thx_plnoun2->text();


}

void MadLibs::vacationsStory() {

}

void MadLibs::solarStory() {

}
