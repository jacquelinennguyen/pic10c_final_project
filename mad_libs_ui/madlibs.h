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
    void on_Story_clicked();

    void on_Story_1_clicked();

private:
    Ui::MadLibs *ui;
    WordInput *wordInput;
};

#endif // MADLIBS_H
