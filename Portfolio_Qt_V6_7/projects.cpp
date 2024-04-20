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

    connect(m_CC_DocButton, &QPushButton::clicked, this, &Projects::OnCC_DocButtonClicked);

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

}

void Projects::OnCC_ItchButtonClicked()
{

}

void Projects::OnCC_DocButtonClicked()
{
    QDesktopServices service = QDesktopServices();

    QFile pdf = QFile(":/files/files/DillonMetzler_431015_ChromaCore_Dokumentation.pdf");
    service.openUrl(QUrl::fromLocalFile("DillonMetzler_431015_ChromaCore_Dokumentation.pdf"));
}

void Projects::OnTgW_YTButtonClicked()
{

}

void Projects::OnTgW_ItchButtonClicked()
{

}

void Projects::OnTgW_DocButtonClicked()
{

}

void Projects::OnST_YTButtonClicked()
{

}

void Projects::OnST_DocButtonClicked()
{

}

void Projects::OnGDH_YTButtonClicked()
{

}

void Projects::OnGDH_WebButtonClicked()
{

}

void Projects::OnGDH_DocButtonClicked()
{

}

void Projects::OnWTD_ItchButtonClicked()
{

}

void Projects::OnLITN_YTButtonClicked()
{

}

void Projects::OnLITN_ItchButtonClicked()
{

}

void Projects::OnGDHDocumentationClicked()
{
    QDesktopServices service = QDesktopServices();
    service.openUrl(QString(":/files/files/DillonMetzler_431015_ChromaCore_Dokumentation.pdf"));
}
