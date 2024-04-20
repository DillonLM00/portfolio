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
}

Header::~Header()
{
    delete ui;
}


