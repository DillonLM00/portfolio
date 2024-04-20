#include "header.h"
#include "mainwindow.h"
#include "ui_header.h"

Header::Header(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Header)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_StyledBackground);

    MainWindow::SetWidgetStyleSheet(this, ":/stylesheets/stylesheets/header.qss");

    connect(ui->homeButton, &QPushButton::clicked, MainWindow::GetMainWindow(this), &MainWindow::OnHomeButtonClickedSignal);
    connect(ui->aboutButton, &QPushButton::clicked, MainWindow::GetMainWindow(this), &MainWindow::OnAboutButtonClickedSignal);
    connect(ui->projectsButton, &QPushButton::clicked, MainWindow::GetMainWindow(this), &MainWindow::OnProjectsButtonClickedSignal);
}

Header::~Header()
{
    delete ui;
}


