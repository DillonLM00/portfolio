/********************************************************************************
** Form generated from reading UI file 'aboutme.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTME_H
#define UI_ABOUTME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutMe
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *headingLabel;
    QWidget *firstLine;
    QLabel *textLabel;
    QSpacerItem *verticalSpacer_5;
    QWidget *contentWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QWidget *getToKnowWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *headingGTKLabel;
    QLabel *textGTKLabel;
    QSpacerItem *verticalSpacer_8;
    QWidget *aboutMeWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *headingAMLabel;
    QWidget *skillsWidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *row1Widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;
    QWidget *row2Widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_2;
    QWidget *row3Widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_18;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QWidget *row4Widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_4;
    QWidget *row5Widget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_19;
    QLabel *label_21;
    QLabel *label_20;
    QSpacerItem *horizontalSpacer_9;
    QWidget *row6Widget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_17;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *AboutMe)
    {
        if (AboutMe->objectName().isEmpty())
            AboutMe->setObjectName("AboutMe");
        AboutMe->resize(1092, 882);
        verticalLayout = new QVBoxLayout(AboutMe);
        verticalLayout->setSpacing(16);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(128, 128, 128, 128);
        headingLabel = new QLabel(AboutMe);
        headingLabel->setObjectName("headingLabel");
        headingLabel->setMaximumSize(QSize(16777215, 16777215));
        headingLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(headingLabel);

        firstLine = new QWidget(AboutMe);
        firstLine->setObjectName("firstLine");
        firstLine->setMinimumSize(QSize(32, 4));
        firstLine->setMaximumSize(QSize(256, 4));

        verticalLayout->addWidget(firstLine, 0, Qt::AlignHCenter);

        textLabel = new QLabel(AboutMe);
        textLabel->setObjectName("textLabel");
        textLabel->setAlignment(Qt::AlignCenter);
        textLabel->setWordWrap(true);

        verticalLayout->addWidget(textLabel);

        verticalSpacer_5 = new QSpacerItem(20, 32, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        contentWidget = new QWidget(AboutMe);
        contentWidget->setObjectName("contentWidget");
        horizontalLayout = new QHBoxLayout(contentWidget);
        horizontalLayout->setSpacing(64);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        getToKnowWidget = new QWidget(contentWidget);
        getToKnowWidget->setObjectName("getToKnowWidget");
        verticalLayout_2 = new QVBoxLayout(getToKnowWidget);
        verticalLayout_2->setSpacing(32);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        headingGTKLabel = new QLabel(getToKnowWidget);
        headingGTKLabel->setObjectName("headingGTKLabel");

        verticalLayout_2->addWidget(headingGTKLabel);

        textGTKLabel = new QLabel(getToKnowWidget);
        textGTKLabel->setObjectName("textGTKLabel");
        textGTKLabel->setWordWrap(true);

        verticalLayout_2->addWidget(textGTKLabel);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);


        horizontalLayout->addWidget(getToKnowWidget);

        aboutMeWidget = new QWidget(contentWidget);
        aboutMeWidget->setObjectName("aboutMeWidget");
        verticalLayout_3 = new QVBoxLayout(aboutMeWidget);
        verticalLayout_3->setSpacing(32);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        headingAMLabel = new QLabel(aboutMeWidget);
        headingAMLabel->setObjectName("headingAMLabel");
        headingAMLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_3->addWidget(headingAMLabel);

        skillsWidget = new QWidget(aboutMeWidget);
        skillsWidget->setObjectName("skillsWidget");
        verticalLayout_4 = new QVBoxLayout(skillsWidget);
        verticalLayout_4->setSpacing(16);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        row1Widget = new QWidget(skillsWidget);
        row1Widget->setObjectName("row1Widget");
        horizontalLayout_2 = new QHBoxLayout(row1Widget);
        horizontalLayout_2->setSpacing(16);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 16);
        label_4 = new QLabel(row1Widget);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 32));
        label_4->setMaximumSize(QSize(16777215, 32));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);

        label_5 = new QLabel(row1Widget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 32));
        label_5->setMaximumSize(QSize(16777215, 32));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_5);

        label_8 = new QLabel(row1Widget);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(0, 32));
        label_8->setMaximumSize(QSize(16777215, 32));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_8);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(row1Widget);

        row2Widget = new QWidget(skillsWidget);
        row2Widget->setObjectName("row2Widget");
        horizontalLayout_3 = new QHBoxLayout(row2Widget);
        horizontalLayout_3->setSpacing(16);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(row2Widget);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(0, 32));
        label_6->setMaximumSize(QSize(16777215, 32));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_6);

        label_7 = new QLabel(row2Widget);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(0, 32));
        label_7->setMaximumSize(QSize(16777215, 32));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_7);

        label_9 = new QLabel(row2Widget);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(0, 32));
        label_9->setMaximumSize(QSize(16777215, 32));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_9);

        label_16 = new QLabel(row2Widget);
        label_16->setObjectName("label_16");
        label_16->setMinimumSize(QSize(0, 32));
        label_16->setMaximumSize(QSize(16777215, 32));
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_16);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_4->addWidget(row2Widget);

        row3Widget = new QWidget(skillsWidget);
        row3Widget->setObjectName("row3Widget");
        horizontalLayout_4 = new QHBoxLayout(row3Widget);
        horizontalLayout_4->setSpacing(16);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 16);
        label_18 = new QLabel(row3Widget);
        label_18->setObjectName("label_18");
        label_18->setMinimumSize(QSize(0, 32));
        label_18->setMaximumSize(QSize(16777215, 32));
        label_18->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_18);

        label_2 = new QLabel(row3Widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 32));
        label_2->setMaximumSize(QSize(16777215, 32));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_2);

        label_3 = new QLabel(row3Widget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 32));
        label_3->setMaximumSize(QSize(16777215, 16777215));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addWidget(row3Widget);

        row4Widget = new QWidget(skillsWidget);
        row4Widget->setObjectName("row4Widget");
        horizontalLayout_5 = new QHBoxLayout(row4Widget);
        horizontalLayout_5->setSpacing(16);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(row4Widget);
        label_10->setObjectName("label_10");
        label_10->setMinimumSize(QSize(0, 32));
        label_10->setMaximumSize(QSize(16777215, 32));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_10);

        label_12 = new QLabel(row4Widget);
        label_12->setObjectName("label_12");
        label_12->setMinimumSize(QSize(0, 32));
        label_12->setMaximumSize(QSize(16777215, 32));
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_12);

        label_13 = new QLabel(row4Widget);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(0, 32));
        label_13->setMaximumSize(QSize(16777215, 32));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_13);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_4->addWidget(row4Widget);

        row5Widget = new QWidget(skillsWidget);
        row5Widget->setObjectName("row5Widget");
        horizontalLayout_7 = new QHBoxLayout(row5Widget);
        horizontalLayout_7->setSpacing(16);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 16);
        label_19 = new QLabel(row5Widget);
        label_19->setObjectName("label_19");
        label_19->setMinimumSize(QSize(0, 32));
        label_19->setMaximumSize(QSize(16777215, 32));
        label_19->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_19);

        label_21 = new QLabel(row5Widget);
        label_21->setObjectName("label_21");
        label_21->setMinimumSize(QSize(0, 32));
        label_21->setMaximumSize(QSize(16777215, 32));
        label_21->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_21);

        label_20 = new QLabel(row5Widget);
        label_20->setObjectName("label_20");
        label_20->setMinimumSize(QSize(0, 32));
        label_20->setMaximumSize(QSize(16777215, 32));
        label_20->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_20);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);


        verticalLayout_4->addWidget(row5Widget);

        row6Widget = new QWidget(skillsWidget);
        row6Widget->setObjectName("row6Widget");
        horizontalLayout_6 = new QHBoxLayout(row6Widget);
        horizontalLayout_6->setSpacing(16);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(row6Widget);
        label_17->setObjectName("label_17");
        label_17->setMinimumSize(QSize(0, 32));
        label_17->setMaximumSize(QSize(16777215, 32));
        label_17->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_17);

        label = new QLabel(row6Widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 32));
        label->setMaximumSize(QSize(16777215, 32));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_4->addWidget(row6Widget);

        widget = new QWidget(skillsWidget);
        widget->setObjectName("widget");
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setSpacing(16);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(widget);
        label_15->setObjectName("label_15");
        label_15->setMinimumSize(QSize(0, 32));
        label_15->setMaximumSize(QSize(16777215, 32));
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_15);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        verticalLayout_4->addWidget(widget);


        verticalLayout_3->addWidget(skillsWidget);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout->addWidget(aboutMeWidget);

        horizontalSpacer_8 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        verticalLayout->addWidget(contentWidget);


        retranslateUi(AboutMe);

        QMetaObject::connectSlotsByName(AboutMe);
    } // setupUi

    void retranslateUi(QWidget *AboutMe)
    {
        AboutMe->setWindowTitle(QCoreApplication::translate("AboutMe", "Form", nullptr));
        headingLabel->setText(QCoreApplication::translate("AboutMe", "ABOUT ME", nullptr));
        textLabel->setText(QCoreApplication::translate("AboutMe", "Here you will find more information about me, what I do, and my current skills mostly in terms of programming and technology", nullptr));
        headingGTKLabel->setText(QCoreApplication::translate("AboutMe", "Get to know me!", nullptr));
        textGTKLabel->setText(QCoreApplication::translate("AboutMe", "<html><head/><body><p>I am currently studying Computer Science - Game Engineering in my 8th semester at Kempten University of Applied Sciences.<br/><br/>Games are my passion!</p><p>During my studies, I discovered my enthusiasm for games programming in particular. I also gained experience in the areas of modelling, animation and implementation. Through projects as part of my studies or in my free time, as well as by participating in game jams, I have acquired knowledge of Godot, Unity, C# and C++. I also learnt the importance of planning, structuring, communication, clear interfaces and time management within a team.</p><p>As part of my work as a student assistant at the Institute for Production and Computer Science in Sonthofen, I have been intensively involved with Qt for software development.<br/><br/>I am currently writing my bachelor's thesis at the IPI in Sonthofen in the field of embedded systems and am working there as a student assistant int part-time parallel to my bachelor's thesis.<br/><br/>I'm open"
                        " to Job opportunities where I can contribute, learn and grow. If you have a good opportunity that matches my skills and experience then don't hesitate to contact me.</p></body></html>", nullptr));
        headingAMLabel->setText(QCoreApplication::translate("AboutMe", "My Skills", nullptr));
        label_4->setText(QCoreApplication::translate("AboutMe", "C", nullptr));
        label_5->setText(QCoreApplication::translate("AboutMe", "C++", nullptr));
        label_8->setText(QCoreApplication::translate("AboutMe", "C#", nullptr));
        label_6->setText(QCoreApplication::translate("AboutMe", "Qt", nullptr));
        label_7->setText(QCoreApplication::translate("AboutMe", "Godot", nullptr));
        label_9->setText(QCoreApplication::translate("AboutMe", "Unity", nullptr));
        label_16->setText(QCoreApplication::translate("AboutMe", "Unreal Engine 4", nullptr));
        label_18->setText(QCoreApplication::translate("AboutMe", "Blender", nullptr));
        label_2->setText(QCoreApplication::translate("AboutMe", "Inkscape", nullptr));
        label_3->setText(QCoreApplication::translate("AboutMe", "Krita", nullptr));
        label_10->setText(QCoreApplication::translate("AboutMe", "GitHub", nullptr));
        label_12->setText(QCoreApplication::translate("AboutMe", "Audiokinetic Wwise", nullptr));
        label_13->setText(QCoreApplication::translate("AboutMe", "Tracktion Waveform", nullptr));
        label_19->setText(QCoreApplication::translate("AboutMe", "DaVinci Resolve", nullptr));
        label_21->setText(QCoreApplication::translate("AboutMe", "Visual Studio", nullptr));
        label_20->setText(QCoreApplication::translate("AboutMe", "Microsoft Office", nullptr));
        label_17->setText(QCoreApplication::translate("AboutMe", "Game Developement", nullptr));
        label->setText(QCoreApplication::translate("AboutMe", "Project management", nullptr));
        label_15->setText(QCoreApplication::translate("AboutMe", "Embedded Systems", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutMe: public Ui_AboutMe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTME_H
