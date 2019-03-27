#ifndef WORDINPUT_H
#define WORDINPUT_H

#include <QDialog>
#include <QAbstractButton>

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

private:
    Ui::WordInput *ui;
};

#endif // WORDINPUT_H
