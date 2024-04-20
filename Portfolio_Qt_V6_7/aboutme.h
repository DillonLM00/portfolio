#ifndef ABOUTME_H
#define ABOUTME_H

#include <QWidget>

namespace Ui {
class AboutMe;
}

class AboutMe : public QWidget
{
    Q_OBJECT

public:
    explicit AboutMe(QWidget *parent = nullptr);
    ~AboutMe();

private:
    Ui::AboutMe *ui;
};

#endif // ABOUTME_H
