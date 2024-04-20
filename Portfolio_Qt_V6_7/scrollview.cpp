#include "scrollview.h"
#include "ui_scrollview.h"

ScrollView::ScrollView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ScrollView)
{
    ui->setupUi(this);

    m_hero = new Hero(this);
    m_aboutMe = new AboutMe(this);
    m_projects = new Projects(this);
    m_footer = new Footer(this);

    ui->scrollAreaWidgetContents->layout()->addWidget(m_hero);
    ui->scrollAreaWidgetContents->layout()->addWidget(m_aboutMe);
    ui->scrollAreaWidgetContents->layout()->addWidget(m_projects);
    ui->scrollAreaWidgetContents->layout()->addWidget(m_footer);
}

ScrollView::~ScrollView()
{
    delete ui;
}
