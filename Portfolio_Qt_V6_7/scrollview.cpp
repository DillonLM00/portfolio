#include "mainwindow.h"
#include "scrollview.h"
#include "ui_scrollview.h"

#include <QScrollBar>

ScrollView::ScrollView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ScrollView)
{
    ui->setupUi(this);

    MainWindow::SetWidgetStyleSheet(this, ":/stylesheets/stylesheets/scrollView.qss");

    m_hero = new Hero(this);
    m_aboutMe = new AboutMe(this);
    m_projects = new Projects(this);
    m_footer = new Footer(this);

    ui->scrollAreaWidgetContents->layout()->addWidget(m_hero);
    ui->scrollAreaWidgetContents->layout()->addWidget(m_aboutMe);
    ui->scrollAreaWidgetContents->layout()->addWidget(m_projects);
    ui->scrollAreaWidgetContents->layout()->addWidget(m_footer);

    m_pageAnimation = new QPropertyAnimation(ui->scrollArea->verticalScrollBar(), "value");
    m_pageAnimation->setDuration(500);

    ui->scrollArea->verticalScrollBar()->setSingleStep(32);

    connect(MainWindow::GetMainWindow(this), &MainWindow::OnHomeButtonClickedSignal, this, &ScrollView::MovePageToTop);
    connect(MainWindow::GetMainWindow(this), &MainWindow::OnAboutButtonClickedSignal, this, &ScrollView::MovePageToAboutMe);
    connect(MainWindow::GetMainWindow(this), &MainWindow::OnProjectsButtonClickedSignal, this, &ScrollView::MovePageToProjects);

    connect(MainWindow::GetMainWindow(this), &MainWindow::ResizeSignal, this, &ScrollView::Upp);
}

ScrollView::~ScrollView()
{
    delete ui;
}

void ScrollView::MovePageToTop()
{
    StartPageAnimation(0);
}

void ScrollView::MovePageToAboutMe()
{
    StartPageAnimation(m_aboutMe->y() - 128);
}

void ScrollView::MovePageToProjects()
{
    StartPageAnimation(m_projects->y() - 128);
}

void ScrollView::StartPageAnimation(int endValue)
{
    if(m_pageAnimation->state() == QAbstractAnimation::Running)
    {
        m_pageAnimation->stop();
    }

    m_pageAnimation->setStartValue(ui->scrollArea->verticalScrollBar()->value());
    m_pageAnimation->setEndValue(endValue);
    m_pageAnimation->start();
}

void ScrollView::Upp()
{
    qDebug() << m_aboutMe->y() - ui->scrollArea->verticalScrollBar()->value();
    qDebug() << m_projects->y() - ui->scrollArea->verticalScrollBar()->value();
}
