#ifndef PROJECTS_H
#define PROJECTS_H

#include "animatedbutton.h"
#include <QPushButton>
#include <QWidget>

namespace Ui {
class Projects;
}

class Projects : public QWidget
{
    Q_OBJECT

public:
    explicit Projects(QWidget *parent = nullptr);
    ~Projects();

private:
    Ui::Projects *ui;

    AnimatedButton* m_CC_YTButton;
    AnimatedButton* m_CC_itchButton;
    AnimatedButton* m_CC_DocButton;

    AnimatedButton* m_TgW_YTButton;
    AnimatedButton* m_TgW_itchButton;
    AnimatedButton* m_TgW_DocButton;

    AnimatedButton* m_ST_YTButton;
    AnimatedButton* m_ST_DocButton;

    AnimatedButton* m_GDH_YTButton;
    AnimatedButton* m_GDH_webButton;
    AnimatedButton* m_GDH_DocButton;

    AnimatedButton* m_WTD_itchButton;

    AnimatedButton* m_LITN_YTButton;
    AnimatedButton* m_LITN_itchButton;

    void SetupUI();
    void OnButtonEnter(QPushButton* target);
    void OnButtonLeave(QPushButton* target);

private slots:
    void OnCC_YTButtonClicked();
    void OnCC_ItchButtonClicked();
    void OnCC_DocButtonClicked();

    void OnTgW_YTButtonClicked();
    void OnTgW_ItchButtonClicked();
    void OnTgW_DocButtonClicked();

    void OnST_YTButtonClicked();
    void OnST_DocButtonClicked();

    void OnGDH_YTButtonClicked();
    void OnGDH_WebButtonClicked();
    void OnGDH_DocButtonClicked();

    void OnWTD_ItchButtonClicked();

    void OnLITN_YTButtonClicked();
    void OnLITN_ItchButtonClicked();
};

#endif // PROJECTS_H
