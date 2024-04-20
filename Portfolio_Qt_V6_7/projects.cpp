#include "mainwindow.h"
#include "projects.h"
#include "ui_projects.h"

#include <QDesktopServices>
#include <QFile>
#include <QLabel>
#include <QPropertyAnimation>

Projects::Projects(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Projects)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_StyledBackground);
    SetupUI();

    MainWindow::SetWidgetStyleSheet(this, ":/stylesheets/stylesheets/projects.qss");

    connect(m_CC_YTButton, &QPushButton::clicked, this, &Projects::OnCC_YTButtonClicked);
    connect(m_CC_itchButton, &QPushButton::clicked, this, &Projects::OnCC_ItchButtonClicked);
    connect(m_CC_DocButton, &QPushButton::clicked, this, &Projects::OnCC_DocButtonClicked);

    connect(m_TgW_YTButton, &QPushButton::clicked, this, &Projects::OnTgW_YTButtonClicked);
    connect(m_TgW_itchButton, &QPushButton::clicked, this, &Projects::OnTgW_ItchButtonClicked);
    connect(m_TgW_DocButton, &QPushButton::clicked, this, &Projects::OnTgW_DocButtonClicked);

    connect(m_ST_YTButton, &QPushButton::clicked, this, &Projects::OnST_YTButtonClicked);
    connect(m_ST_DocButton, &QPushButton::clicked, this, &Projects::OnST_DocButtonClicked);

    connect(m_GDH_YTButton, &QPushButton::clicked, this, &Projects::OnGDH_YTButtonClicked);
    connect(m_GDH_webButton, &QPushButton::clicked, this, &Projects::OnGDH_WebButtonClicked);
    connect(m_GDH_DocButton, &QPushButton::clicked, this, &Projects::OnGDH_DocButtonClicked);

    connect(m_WTD_itchButton, &QPushButton::clicked, this, &Projects::OnWTD_ItchButtonClicked);

    connect(m_LITN_YTButton, &QPushButton::clicked, this, &Projects::OnLITN_YTButtonClicked);
    connect(m_LITN_itchButton, &QPushButton::clicked, this, &Projects::OnLITN_ItchButtonClicked);
}

Projects::~Projects()
{
    delete ui;
}

void Projects::SetupUI()
{
    ui->pictureLabel_1->setPixmap(QPixmap(":/images/images/chromaCore.png"));
    ui->pictureLabel_2->setPixmap(QPixmap(":/images/images/TuwasGegenMuda.png"));
    ui->pictureLabel_3->setPixmap(QPixmap(":/images/images/SlimeTempest.png"));
    ui->pictureLabel_4->setPixmap(QPixmap(":/images/images/GodDamnHell.png"));
    ui->pictureLabel_5->setPixmap(QPixmap(":/images/images/WickedTD.png"));
    ui->pictureLabel_6->setPixmap(QPixmap(":/images/images/LurkerInTheNightlight.png"));

    m_CC_YTButton = new AnimatedButton(ui->buttonWidget_1);
    m_CC_YTButton->setObjectName("m_CC_YTButton");
    m_CC_YTButton->setMinimumSize(ui->pushButton_1_1->minimumSize());
    m_CC_YTButton->setMaximumSize(ui->pushButton_1_1->maximumSize());
    m_CC_YTButton->setText(ui->pushButton_1_1->text());
    ui->buttonWidget_1->layout()->replaceWidget(ui->pushButton_1_1, m_CC_YTButton);
    ui->pushButton_1_1->hide();

    m_CC_itchButton = new AnimatedButton(ui->buttonWidget_1);
    m_CC_itchButton->setObjectName("m_CC_itchButton");
    m_CC_itchButton->setMinimumSize(ui->pushButton_1_2->minimumSize());
    m_CC_itchButton->setMaximumSize(ui->pushButton_1_2->maximumSize());
    m_CC_itchButton->setText(ui->pushButton_1_2->text());
    ui->buttonWidget_1->layout()->replaceWidget(ui->pushButton_1_2, m_CC_itchButton);
    ui->pushButton_1_2->hide();

    m_CC_DocButton = new AnimatedButton(ui->buttonWidget_1);
    m_CC_DocButton->setObjectName("m_CC_DocButton");
    m_CC_DocButton->setMinimumSize(ui->pushButton_1_3->minimumSize());
    m_CC_DocButton->setMaximumSize(ui->pushButton_1_3->maximumSize());
    m_CC_DocButton->setText(ui->pushButton_1_3->text());
    ui->buttonWidget_1->layout()->replaceWidget(ui->pushButton_1_3, m_CC_DocButton);
    ui->pushButton_1_3->hide();

    m_TgW_YTButton = new AnimatedButton(ui->buttonWidget_2);
    m_TgW_YTButton->setObjectName("m_TgW_YTButton");
    m_TgW_YTButton->setMinimumSize(ui->pushButton_2_1->minimumSize());
    m_TgW_YTButton->setMaximumSize(ui->pushButton_2_1->maximumSize());
    m_TgW_YTButton->setText(ui->pushButton_2_1->text());
    ui->buttonWidget_2->layout()->replaceWidget(ui->pushButton_2_1, m_TgW_YTButton);
    ui->pushButton_2_1->hide();

    m_TgW_itchButton = new AnimatedButton(ui->buttonWidget_2);
    m_TgW_itchButton->setObjectName("m_TgW_itchButton");
    m_TgW_itchButton->setMinimumSize(ui->pushButton_2_2->minimumSize());
    m_TgW_itchButton->setMaximumSize(ui->pushButton_2_2->maximumSize());
    m_TgW_itchButton->setText(ui->pushButton_2_2->text());
    ui->buttonWidget_2->layout()->replaceWidget(ui->pushButton_2_2, m_TgW_itchButton);
    ui->pushButton_2_2->hide();

    m_TgW_DocButton = new AnimatedButton(ui->buttonWidget_2);
    m_TgW_DocButton->setObjectName("m_TgW_DocButton");
    m_TgW_DocButton->setMinimumSize(ui->pushButton_2_3->minimumSize());
    m_TgW_DocButton->setMaximumSize(ui->pushButton_2_3->maximumSize());
    m_TgW_DocButton->setText(ui->pushButton_2_3->text());
    ui->buttonWidget_2->layout()->replaceWidget(ui->pushButton_2_3, m_TgW_DocButton);
    ui->pushButton_2_3->hide();

    m_ST_YTButton = new AnimatedButton(ui->buttonWidget_3);
    m_ST_YTButton->setObjectName("m_ST_YTButton");
    m_ST_YTButton->setMinimumSize(ui->pushButton_3_1->minimumSize());
    m_ST_YTButton->setMaximumSize(ui->pushButton_3_1->maximumSize());
    m_ST_YTButton->setText(ui->pushButton_3_1->text());
    ui->buttonWidget_3->layout()->replaceWidget(ui->pushButton_3_1, m_ST_YTButton);
    ui->pushButton_3_1->hide();

    m_ST_DocButton = new AnimatedButton(ui->buttonWidget_3);
    m_ST_DocButton->setObjectName("m_ST_DocButton");
    m_ST_DocButton->setMinimumSize(ui->pushButton_3_2->minimumSize());
    m_ST_DocButton->setMaximumSize(ui->pushButton_3_2->maximumSize());
    m_ST_DocButton->setText(ui->pushButton_3_2->text());
    ui->buttonWidget_3->layout()->replaceWidget(ui->pushButton_3_2, m_ST_DocButton);
    ui->pushButton_3_2->hide();

    m_GDH_YTButton = new AnimatedButton(ui->buttonWidget_4);
    m_GDH_YTButton->setObjectName("m_GDH_YTButton");
    m_GDH_YTButton->setMinimumSize(ui->pushButton_4_1->minimumSize());
    m_GDH_YTButton->setMaximumSize(ui->pushButton_4_1->maximumSize());
    m_GDH_YTButton->setText(ui->pushButton_4_1->text());
    ui->buttonWidget_4->layout()->replaceWidget(ui->pushButton_4_1, m_GDH_YTButton);
    ui->pushButton_4_1->hide();

    m_GDH_webButton = new AnimatedButton(ui->buttonWidget_4);
    m_GDH_webButton->setObjectName("m_GDH_webButton");
    m_GDH_webButton->setMinimumSize(ui->pushButton_4_2->minimumSize());
    m_GDH_webButton->setMaximumSize(ui->pushButton_4_2->maximumSize());
    m_GDH_webButton->setText(ui->pushButton_4_2->text());
    ui->buttonWidget_4->layout()->replaceWidget(ui->pushButton_4_2, m_GDH_webButton);
    ui->pushButton_4_2->hide();

    m_GDH_DocButton = new AnimatedButton(ui->buttonWidget_4);
    m_GDH_DocButton->setObjectName("m_GDH_DocButton");
    m_GDH_DocButton->setMinimumSize(ui->pushButton_4_3->minimumSize());
    m_GDH_DocButton->setMaximumSize(ui->pushButton_4_3->maximumSize());
    m_GDH_DocButton->setText(ui->pushButton_4_3->text());
    ui->buttonWidget_4->layout()->replaceWidget(ui->pushButton_4_3, m_GDH_DocButton);
    ui->pushButton_4_3->hide();

    m_WTD_itchButton = new AnimatedButton(ui->buttonWidget_5);
    m_WTD_itchButton->setObjectName("m_WTD_itchButton");
    m_WTD_itchButton->setMinimumSize(ui->pushButton_5_1->minimumSize());
    m_WTD_itchButton->setMaximumSize(ui->pushButton_5_1->maximumSize());
    m_WTD_itchButton->setText(ui->pushButton_5_1->text());
    ui->buttonWidget_5->layout()->replaceWidget(ui->pushButton_5_1, m_WTD_itchButton);
    ui->pushButton_5_1->hide();

    m_LITN_YTButton = new AnimatedButton(ui->buttonWidget_6);
    m_LITN_YTButton->setObjectName("m_LITN_YTButton");
    m_LITN_YTButton->setMinimumSize(ui->pushButton_6_1->minimumSize());
    m_LITN_YTButton->setMaximumSize(ui->pushButton_6_1->maximumSize());
    m_LITN_YTButton->setText(ui->pushButton_6_1->text());
    ui->buttonWidget_6->layout()->replaceWidget(ui->pushButton_6_1, m_LITN_YTButton);
    ui->pushButton_6_1->hide();

    m_LITN_itchButton = new AnimatedButton(ui->buttonWidget_6);
    m_LITN_itchButton->setObjectName("m_LITN_itchButton");
    m_LITN_itchButton->setMinimumSize(ui->pushButton_6_2->minimumSize());
    m_LITN_itchButton->setMaximumSize(ui->pushButton_6_2->maximumSize());
    m_LITN_itchButton->setText(ui->pushButton_6_2->text());
    ui->buttonWidget_6->layout()->replaceWidget(ui->pushButton_6_2, m_LITN_itchButton);
    ui->pushButton_6_2->hide();
}

void Projects::OnCC_YTButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://youtu.be/xGSmEAZ2DBQ"));
}

void Projects::OnCC_ItchButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://dillonlm00.itch.io/chroma-core"));
}

void Projects::OnCC_DocButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://1drv.ms/b/s!Ajf8_wO7GGi5kBK97j8SjwZQzjPf"));
}

void Projects::OnTgW_YTButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://youtu.be/VyZglp0VhdI"));
}

void Projects::OnTgW_ItchButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://infoboard.itch.io/tuwas-gegen-muda"));
}

void Projects::OnTgW_DocButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://1drv.ms/b/s!Ajf8_wO7GGi5kBSXlmmnXzz8rv3j"));
}

void Projects::OnST_YTButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://youtu.be/l4wtp2Y3LRw"));
}

void Projects::OnST_DocButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://1drv.ms/b/s!Ajf8_wO7GGi5kBMwbZ7ZCao9lHtR"));
}

void Projects::OnGDH_YTButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://youtu.be/ooRUAIQaN7o"));
}

void Projects::OnGDH_WebButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://www.hs-kempten.de/fakultaet-informatik/aktuelles/artikel/god-damn-hell-1212"));
}

void Projects::OnGDH_DocButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://1drv.ms/b/s!Ajf8_wO7GGi5kBFGvx8LNPn9eLsa"));
}

void Projects::OnWTD_ItchButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://jan0h4ck.itch.io/wickedtd"));
}

void Projects::OnLITN_YTButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://youtu.be/IPoiKoNWf3s"));
}

void Projects::OnLITN_ItchButtonClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString("https://stjpa.itch.io/lurkers-in-the-nightlight"));
}
