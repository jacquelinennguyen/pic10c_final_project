#ifndef WORDINPUT_H
#define WORDINPUT_H

#include <QDialog>
#include <QAbstractButton>
#include "story.h"
#include "madlibs.h"

namespace Ui {
class WordInput;
}

class WordInput : public QDialog
{
    Q_OBJECT

public:
    explicit WordInput(QWidget *parent = nullptr);
    ~WordInput();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::WordInput *ui;
    Story *story;
    MadLibs *mainW;
};

#endif // WORDINPUT_H
