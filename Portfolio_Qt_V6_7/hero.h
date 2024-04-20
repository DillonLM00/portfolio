#ifndef HERO_H
#define HERO_H

#include "animatedbutton.h"
#include <QWidget>

namespace Ui {
class Hero;
}

class Hero : public QWidget
{
    Q_OBJECT

public:
    explicit Hero(QWidget *parent = nullptr);
    ~Hero();

private:
    Ui::Hero *ui;

    AnimatedButton* m_projectsButton;

    void OnLinkedInButtonClicked();
    void OnItchIoButtonClicked();
    void OnGitHubButtonClicked();
    void OnYouTubeButtonClicked();
};

#endif // HERO_H
