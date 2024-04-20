#include "footer.h"
#include "mainwindow.h"
#include "ui_footer.h"

#include <QDesktopServices>

Footer::Footer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Footer)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_StyledBackground);

    MainWindow::SetWidgetStyleSheet(this, ":/stylesheets/stylesheets/footer.qss");

    connect(ui->linkedInButton, &QPushButton::clicked, this, &Footer::OnLinkedInButtonClicked);
    connect(ui->itchButton, &QPushButton::clicked, this, &Footer::OnItchIoButtonClicked);
    connect(ui->gitHubButton, &QPushButton::clicked, this, &Footer::OnGitHubButtonClicked);
    connect(ui->youTubeButton, &QPushButton::clicked, this, &Footer::OnYouTubeButtonClicked);

    connect(ui->backToTopButton, &QPushButton::clicked, MainWindow::GetMainWindow(this), &MainWindow::OnHomeButtonClickedSignal);
}

Footer::~Footer()
{
    delete ui;
}

void Footer::OnLinkedInButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://www.linkedin.com/in/dillon-metzler-97b4ba249"));
}

void Footer::OnItchIoButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://dillonlm00.itch.io/"));
}

void Footer::OnGitHubButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://github.com/DillonLM00"));
}

void Footer::OnYouTubeButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://www.youtube.com/channel/UCsfuq6WfAsjpLSdltl0Op7Q"));
}
