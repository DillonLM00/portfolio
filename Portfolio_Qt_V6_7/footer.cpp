#include "footer.h"
#include "mainwindow.h"
#include "ui_footer.h"

Footer::Footer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Footer)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_StyledBackground);

    MainWindow::SetWidgetStyleSheet(this, ":/stylesheets/stylesheets/footer.qss");
}

Footer::~Footer()
{
    delete ui;
}
