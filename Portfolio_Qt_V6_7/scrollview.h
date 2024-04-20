#ifndef SCROLLVIEW_H
#define SCROLLVIEW_H

#include "aboutme.h"
#include "footer.h"
#include "hero.h"
#include "projects.h"

#include <QWidget>

namespace Ui {
class ScrollView;
}

class ScrollView : public QWidget
{
    Q_OBJECT

public:
    explicit ScrollView(QWidget *parent = nullptr);
    ~ScrollView();

private:
    Ui::ScrollView *ui;

    Hero* m_hero;
    AboutMe* m_aboutMe;
    Projects* m_projects;
    Footer* m_footer;
};

#endif // SCROLLVIEW_H
