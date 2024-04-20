#include "hero.h"
#include "mainwindow.h"
#include "ui_hero.h"

#include <QPropertyAnimation>
#include <QEvent>
#include <QDesktopServices>

Hero::Hero(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Hero)
{
    ui->setupUi(this);

    setAttribute(Qt::WA_StyledBackground);

    MainWindow::SetWidgetStyleSheet(this, ":/stylesheets/stylesheets/hero.qss");

    //m_projectsButton = new AnimatedButton(ui->content);
    //m_projectsButton->setObjectName("projectsButton");
    //m_projectsButton->setMinimumSize(ui->projectsButton->minimumSize());
    //m_projectsButton->setMaximumSize(ui->projectsButton->maximumSize());
    //m_projectsButton->setText(ui->projectsButton->text());
    //ui->content->layout()->replaceWidget(ui->projectsButton, m_projectsButton);
    //ui->projectsButton->hide();

    connect(ui->linkedInButton, &QPushButton::clicked, this, &Hero::OnLinkedInButtonClicked);
    connect(ui->itchButton, &QPushButton::clicked, this, &Hero::OnItchIoButtonClicked);
    connect(ui->gitHubButton, &QPushButton::clicked, this, &Hero::OnGitHubButtonClicked);
    connect(ui->youTubeButton, &QPushButton::clicked, this, &Hero::OnYouTubeButtonClicked);
}

Hero::~Hero()
{
    delete ui;
    delete m_projectsButton;
}

void Hero::OnLinkedInButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://www.linkedin.com/in/dillon-metzler-97b4ba249"));
}

void Hero::OnItchIoButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://dillonlm00.itch.io/"));
}

void Hero::OnGitHubButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://github.com/DillonLM00"));
}

void Hero::OnYouTubeButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://www.youtube.com/channel/UCsfuq6WfAsjpLSdltl0Op7Q"));
}


