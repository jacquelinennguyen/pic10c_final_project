#ifndef STORY_H
#define STORY_H

#include <QDialog>
#include "madlibs.h"

namespace Ui {
class Story;
}

class Story : public QDialog
{
    Q_OBJECT

public:
    explicit Story(QWidget *parent = nullptr);
    ~Story();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Story *ui;
    MadLibs *mainWindow;
};

#endif // STORY_H
