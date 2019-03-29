#ifndef MADLIBS_H
#define MADLIBS_H

#include <QMainWindow>
#include "wordinput.h"
#include "story.h"

namespace Ui {
class MadLibs;
}

class MadLibs : public QMainWindow
{
    Q_OBJECT

public:
    explicit MadLibs(QWidget *parent = nullptr);
    ~MadLibs();

private slots:

    void on_VacationsButton_clicked();

    void on_SolarButton_clicked();

    void on_ThanksgivingButton_clicked();

private:
    Ui::MadLibs *ui;
};

#endif // MADLIBS_H
