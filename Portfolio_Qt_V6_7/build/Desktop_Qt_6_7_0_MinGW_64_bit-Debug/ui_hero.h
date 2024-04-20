/********************************************************************************
** Form generated from reading UI file 'hero.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HERO_H
#define UI_HERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hero
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_7;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *buttonWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *linkedInButton;
    QPushButton *itchButton;
    QPushButton *gitHubButton;
    QPushButton *youTubeButton;
    QWidget *content;
    QVBoxLayout *verticalLayout_3;
    QLabel *headingLabel;
    QSpacerItem *verticalSpacer_5;
    QLabel *textLabel;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QWidget *Hero)
    {
        if (Hero->objectName().isEmpty())
            Hero->setObjectName("Hero");
        Hero->resize(858, 800);
        Hero->setMinimumSize(QSize(0, 800));
        verticalLayout = new QVBoxLayout(Hero);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 64);
        verticalSpacer_7 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        widget = new QWidget(Hero);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonWidget = new QWidget(widget);
        buttonWidget->setObjectName("buttonWidget");
        verticalLayout_2 = new QVBoxLayout(buttonWidget);
        verticalLayout_2->setSpacing(16);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(16, 16, 16, 16);
        linkedInButton = new QPushButton(buttonWidget);
        linkedInButton->setObjectName("linkedInButton");
        linkedInButton->setMinimumSize(QSize(64, 64));
        linkedInButton->setMaximumSize(QSize(64, 64));
        linkedInButton->setIconSize(QSize(32, 32));

        verticalLayout_2->addWidget(linkedInButton);

        itchButton = new QPushButton(buttonWidget);
        itchButton->setObjectName("itchButton");
        itchButton->setMinimumSize(QSize(64, 64));
        itchButton->setMaximumSize(QSize(64, 64));
        itchButton->setIconSize(QSize(32, 32));

        verticalLayout_2->addWidget(itchButton);

        gitHubButton = new QPushButton(buttonWidget);
        gitHubButton->setObjectName("gitHubButton");
        gitHubButton->setMinimumSize(QSize(64, 64));
        gitHubButton->setMaximumSize(QSize(64, 64));
        gitHubButton->setIconSize(QSize(32, 32));

        verticalLayout_2->addWidget(gitHubButton);

        youTubeButton = new QPushButton(buttonWidget);
        youTubeButton->setObjectName("youTubeButton");
        youTubeButton->setMinimumSize(QSize(64, 64));
        youTubeButton->setMaximumSize(QSize(64, 64));
        youTubeButton->setIconSize(QSize(32, 32));

        verticalLayout_2->addWidget(youTubeButton);


        horizontalLayout->addWidget(buttonWidget);

        content = new QWidget(widget);
        content->setObjectName("content");
        content->setMaximumSize(QSize(16777215, 336));
        verticalLayout_3 = new QVBoxLayout(content);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 16, 0, 0);
        headingLabel = new QLabel(content);
        headingLabel->setObjectName("headingLabel");
        headingLabel->setMinimumSize(QSize(0, 0));
        headingLabel->setContextMenuPolicy(Qt::PreventContextMenu);
        headingLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(headingLabel);

        verticalSpacer_5 = new QSpacerItem(20, 32, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        textLabel = new QLabel(content);
        textLabel->setObjectName("textLabel");
        textLabel->setMinimumSize(QSize(0, 88));
        textLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(textLabel);

        verticalSpacer_6 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);


        horizontalLayout->addWidget(content);

        horizontalLayout->setStretch(1, 2);

        verticalLayout->addWidget(widget);

        verticalSpacer_8 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);


        retranslateUi(Hero);

        QMetaObject::connectSlotsByName(Hero);
    } // setupUi

    void retranslateUi(QWidget *Hero)
    {
        Hero->setWindowTitle(QCoreApplication::translate("Hero", "Form", nullptr));
        linkedInButton->setText(QString());
        itchButton->setText(QString());
        gitHubButton->setText(QString());
        youTubeButton->setText(QString());
        headingLabel->setText(QCoreApplication::translate("Hero", "HEY, I'M DILLON METZLER", nullptr));
        textLabel->setText(QCoreApplication::translate("Hero", "<html><head/><body><p><span style=\" font-weight:700;\">I am driven by...</span></p><p>when I can face new challenges and develop myself through them</p><p>when good collaboration creates a genuine flow experience and a real feeling of togetherness<br/>.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hero: public Ui_Hero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HERO_H
