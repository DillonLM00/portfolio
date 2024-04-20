#ifndef SCROLLVIEW_H
#define SCROLLVIEW_H

#include "aboutme.h"
#include "footer.h"
#include "hero.h"
#include "projects.h"

#include <QWidget>
#include <QPropertyAnimation>

namespace Ui {
class ScrollView;
}

class ScrollView : public QWidget
{
    Q_OBJECT

public:
    explicit ScrollView(QWidget *parent = nullptr);
    ~ScrollView();

public slots:
    void MovePageToTop();
    void MovePageToAboutMe();
    void MovePageToProjects();

private:
    Ui::ScrollView *ui;

    Hero* m_hero;
    AboutMe* m_aboutMe;
    Projects* m_projects;
    Footer* m_footer;

    QPropertyAnimation* m_pageAnimation;

    void StartPageAnimation(int endValue);

    void Upp();
};

#endif // SCROLLVIEW_H
