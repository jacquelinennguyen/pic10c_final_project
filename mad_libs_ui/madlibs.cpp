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
    story->ui->storyLabel->setText(thanksStory());
    story->show();
}

void MadLibs::on_ThanksgivingButtonBox_rejected()
{
    close();
}

void MadLibs::on_SolarButtonBox_accepted()
{
    QObject::connect(ui->sol_adj1,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_adj2,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_adj3,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_adj4,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_adv,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_ing,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_num,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_noun,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_first1,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_first2,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_first3,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_first4,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_first5,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_first6,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_first7,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_silly_noun,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_plnoun1,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_plnoun2,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));
    QObject::connect(ui->sol_plnoun3,SIGNAL(textChanged(QString)),this,SLOT(solarStory()));

    Story *story = new Story(this);
    story->ui->storyLabel->setText(solarStory());
    story->show();
}

void MadLibs::on_SolarButtonBox_rejected()
{
    close();
}

void MadLibs::on_VacationsButtonBox_accepted()
{
    QObject::connect(ui->vac_adj1,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_adj2,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_adj3,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_ing1,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_ing2,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_ing3,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_ing4,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_noun1,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_noun2,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_noun3,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_place,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_plnoun1,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_plnoun2,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_plnoun3,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_plnoun4,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_body,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_plant,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_number,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));
    QObject::connect(ui->vac_game,SIGNAL(textChanged()),this,SIGNAL(vacationsStory()));

    Story *story = new Story(this);
    story->ui->storyLabel->setText(vacationsStory());
    story->show();
}

void MadLibs::on_VacationsButtonBox_rejected()
{
    close();
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

QString MadLibs::thanksStory() {
    QString nouns[7];
    nouns[0] = ui->thx_noun1->text(); nouns[1] = ui->thx_noun2->text();
    nouns[2] = ui->thx_noun3->text(); nouns[3] = ui->thx_noun4->text();
    nouns[4] = ui->thx_noun5->text(); nouns[5] = ui->thx_noun6->text();
    nouns[6] = ui->thx_noun7->text();

    QString adj1 = ui->thx_adj1->text(); QString adj2 = ui->thx_adj2->text();
    QString adjs[] = {adj1,adj2};
    QString verb = ui->thx_verb->text(); QString body = ui->thx_body->text();
    QString female = ui->thx_female->text(); QString liquid = ui->thx_liquid->text();
    QString person = ui->thx_person->text(); QString plbody = ui->thx_plbody->text();
    QString plnoun1 = ui->thx_plnoun1->text(); QString plnoun2 = ui->thx_plnoun2->text();
    QString plns[] = {plnoun1,plnoun2};

    QString th = readStory("C:\\Users\\beuyenj\\Documents\\le college\\PIC10C\\final project\\pic10c_final_project\\mad_libs_ui\\thanksgiving.txt");
    for (int i = 0; i < nouns->size(); i++) {
        th.replace("<NOUN"+QString::number(i+1)+">",nouns[i]);
    }
    th.replace("<NOUN6>",nouns[5]);
    th.replace("<NOUN7>",nouns[6]);
    for (int i = 0; i < adjs->size(); i++) {
        th.replace("<ADJECTIVE"+QString::number(i+1)+">",adjs[i]);
    }
    for (int i = 0; i < plns->size(); i++) {
        th.replace("<PLURAL_NOUN"+QString::number(i+1)+">",plns[i]);
    }
    th.replace("<VERB>",verb);
    th.replace("<WOMAN>",female);
    th.replace("<BODY_PART>",body);
    th.replace("<LIQUID>",liquid);
    th.replace("<PERSON_IN_ROOM>",person);
    th.replace("<PLURAL_BODY_PART>",plbody);
    return th;
}

QString MadLibs::vacationsStory() {
    QString adjs[] = {ui->vac_adj1->text(),ui->vac_adj2->text(),ui->vac_adj3->text()};
    QString verbs_ing[] = {ui->vac_ing1->text(),ui->vac_ing2->text(),ui->vac_ing3->text(),ui->vac_ing4->text()};
    QString nouns[] = {ui->vac_noun1->text(),ui->vac_noun2->text(),ui->vac_noun3->text()};
    QString plnouns[] = {ui->vac_plnoun1->text(),ui->vac_plnoun2->text(),ui->vac_plnoun3->text(),ui->vac_plnoun4->text()};

    QString v = readStory("C:\\Users\\beuyenj\\Documents\\le college\\PIC10C\\final project\\pic10c_final_project\\mad_libs_ui\\vacations.txt");

    for (int i = 0; i < adjs->size(); i++) {
        v.replace("<ADJECTIVE"+QString::number(i+1)+">",adjs[i]);
    }
    for (int i = 0; i < nouns->size(); i++) {
        v.replace("<NOUN"+QString::number(i+1)+">",nouns[i]);
    }
    for (int i = 0; i < verbs_ing->size(); i++) {
        v.replace("<VERB_ING"+QString::number(i+1)+">",verbs_ing[i]);
    }
    for (int i = 0; i < plnouns->size(); i++) {
        v.replace("<PLURAL_NOUN"+QString::number(i+1)+">",plnouns[i]);
    }

    v.replace("<PLACE>",ui->vac_place->text());
    v.replace("<BODY_PART>",ui->vac_body->text());
    v.replace("<PLANT>",ui->vac_plant->text());
    v.replace("<GAME>",ui->vac_game->text());
    v.replace("<NUMBER>",ui->vac_number->text());

    return v;
}

QString MadLibs::solarStory() {
    QString adjs[] = {ui->sol_adj1->text(),ui->sol_adj2->text(),ui->sol_adj3->text(),ui->sol_adj4->text()};
    QString first_names[] = {ui->sol_first1->text(),ui->sol_first2->text(),ui->sol_first3->text(),ui->sol_first4->text(),ui->sol_first5->text(),ui->sol_first6->text(),ui->sol_first7->text()};
    QString pln1 = ui->sol_plnoun1->text(), pln2 = ui->sol_plnoun2->text(), pln3 = ui->sol_plnoun3->text();
    QString plnouns[] = {pln1,pln2,pln3};

    QString sol = readStory("C:\\Users\\beuyenj\\Documents\\le college\\PIC10C\\final project\\pic10c_final_project\\mad_libs_ui\\solarsystem.txt");

    for (int i = 0; i < adjs->size(); i++) {
        sol.replace("<ADJECTIVE"+QString::number(i+1)+">",adjs[i]);
    }
    for (int i = 0; i < first_names->size(); i++) {
        sol.replace("<FIRST_NAME"+QString::number(i+1)+">",first_names[i]);
    }
    for (int i = 0; i < plnouns->size(); i++) {
        sol.replace("<PLURAL_NOUN"+QString::number(i+1)+">",plnouns[i]);
    }
    sol.replace("<NOUN>",ui->sol_noun->text());
    sol.replace("<ADVERB>",ui->sol_adv->text());
    sol.replace("<VERB_ING>",ui->sol_ing->text());
    sol.replace("<SILLY_NOUN>",ui->sol_silly_noun->text());
    sol.replace("<NUMBER>",ui->sol_num->text());

    return sol;
}
