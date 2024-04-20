/********************************************************************************
** Form generated from reading UI file 'footer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOOTER_H
#define UI_FOOTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Footer
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *backToTopButton;
    QSpacerItem *horizontalSpacer_6;
    QWidget *buttonWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *linkedInButton;
    QPushButton *itchButton;
    QPushButton *gitHubButton;
    QPushButton *youTubeButton;
    QSpacerItem *horizontalSpacer_4;
    QWidget *line;
    QLabel *bottomTextLabel;

    void setupUi(QWidget *Footer)
    {
        if (Footer->objectName().isEmpty())
            Footer->setObjectName("Footer");
        Footer->resize(733, 442);
        Footer->setMaximumSize(QSize(16777215, 442));
        verticalLayout = new QVBoxLayout(Footer);
        verticalLayout->setSpacing(64);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(128, 64, 128, 64);
        widget = new QWidget(Footer);
        widget->setObjectName("widget");
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(204, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        backToTopButton = new QPushButton(widget);
        backToTopButton->setObjectName("backToTopButton");
        backToTopButton->setMinimumSize(QSize(64, 64));
        backToTopButton->setMaximumSize(QSize(64, 64));
        backToTopButton->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(backToTopButton);

        horizontalSpacer_6 = new QSpacerItem(203, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(widget);

        buttonWidget = new QWidget(Footer);
        buttonWidget->setObjectName("buttonWidget");
        horizontalLayout_2 = new QHBoxLayout(buttonWidget);
        horizontalLayout_2->setSpacing(32);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        linkedInButton = new QPushButton(buttonWidget);
        linkedInButton->setObjectName("linkedInButton");
        linkedInButton->setMinimumSize(QSize(32, 32));
        linkedInButton->setMaximumSize(QSize(32, 32));
        linkedInButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(linkedInButton);

        itchButton = new QPushButton(buttonWidget);
        itchButton->setObjectName("itchButton");
        itchButton->setMinimumSize(QSize(32, 32));
        itchButton->setMaximumSize(QSize(32, 32));
        itchButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(itchButton);

        gitHubButton = new QPushButton(buttonWidget);
        gitHubButton->setObjectName("gitHubButton");
        gitHubButton->setMinimumSize(QSize(32, 32));
        gitHubButton->setMaximumSize(QSize(32, 32));
        gitHubButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(gitHubButton);

        youTubeButton = new QPushButton(buttonWidget);
        youTubeButton->setObjectName("youTubeButton");
        youTubeButton->setMinimumSize(QSize(32, 32));
        youTubeButton->setMaximumSize(QSize(32, 32));
        youTubeButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(youTubeButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(buttonWidget);

        line = new QWidget(Footer);
        line->setObjectName("line");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy);
        line->setMinimumSize(QSize(0, 2));
        line->setMaximumSize(QSize(16777215, 2));

        verticalLayout->addWidget(line);

        bottomTextLabel = new QLabel(Footer);
        bottomTextLabel->setObjectName("bottomTextLabel");
        bottomTextLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(bottomTextLabel);


        retranslateUi(Footer);

        QMetaObject::connectSlotsByName(Footer);
    } // setupUi

    void retranslateUi(QWidget *Footer)
    {
        Footer->setWindowTitle(QCoreApplication::translate("Footer", "Form", nullptr));
        backToTopButton->setText(QString());
        linkedInButton->setText(QString());
        itchButton->setText(QString());
        gitHubButton->setText(QString());
        youTubeButton->setText(QString());
        bottomTextLabel->setText(QCoreApplication::translate("Footer", "\302\251 Copyright 2024 - Made by Dillon Metzler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Footer: public Ui_Footer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOOTER_H
