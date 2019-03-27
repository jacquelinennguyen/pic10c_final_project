#ifndef MADLIBS_H
#define MADLIBS_H

#include <QMainWindow>
#include "dialog.h"


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

private:
    Ui::MadLibs *ui;
    Dialog *secDialog;
};

#endif // MADLIBS_H
