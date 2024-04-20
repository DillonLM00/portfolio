#include "aboutme.h"
#include "mainwindow.h"
#include "ui_aboutme.h"

AboutMe::AboutMe(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AboutMe)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_StyledBackground);

    MainWindow::SetWidgetStyleSheet(this, ":/stylesheets/stylesheets/aboutme.qss");
}

AboutMe::~AboutMe()
{
    delete ui;
}
