#ifndef WORDINPUT_H
#define WORDINPUT_H

#include <QDialog>

namespace Ui {
class WordInput;
}

class WordInput : public QDialog
{
    Q_OBJECT

public:
    explicit WordInput(QWidget *parent = nullptr);
    ~WordInput();

private:
    Ui::WordInput *ui;
};

#endif // WORDINPUT_H
