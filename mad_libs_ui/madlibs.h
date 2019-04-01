#ifndef MADLIBS_H
#define MADLIBS_H

#include <QMainWindow>
#include "story.h"
#include "ui_story.h"

namespace Ui {
class MadLibs;
}

class MadLibs : public QMainWindow
{
    Q_OBJECT

public:
    explicit MadLibs(QWidget *parent = nullptr);
    ~MadLibs();
    //Story* story;

private slots:

    void on_VacationsButton_clicked();

    void on_SolarButton_clicked();

    void on_ThanksgivingButton_clicked();

    void on_ThanksgivingButtonBox_accepted();

    void on_ThanksgivingButtonBox_rejected();

    void on_SolarButtonBox_accepted();

    void on_SolarButtonBox_rejected();

    void on_VacationsButtonBox_accepted();

    void on_VacationsButtonBox_rejected();

    QString thanksStory();
    QString vacationsStory();
    QString solarStory();
    QString readStory(QString f);

private:
    Ui::MadLibs *ui;
};

#endif // MADLIBS_H
