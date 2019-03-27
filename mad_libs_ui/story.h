#ifndef STORY_H
#define STORY_H

#include <QDialog>

namespace Ui {
class Story;
}

class Story : public QDialog
{
    Q_OBJECT

public:
    explicit Story(QWidget *parent = nullptr);
    ~Story();

private:
    Ui::Story *ui;
};

#endif // STORY_H
