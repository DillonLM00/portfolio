/********************************************************************************
** Form generated from reading UI file 'header.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEADER_H
#define UI_HEADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Header
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *pictureLabel;
    QLabel *nameLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *homeButton;
    QPushButton *aboutButton;
    QPushButton *projectsButton;

    void setupUi(QWidget *Header)
    {
        if (Header->objectName().isEmpty())
            Header->setObjectName("Header");
        Header->resize(1043, 128);
        Header->setMinimumSize(QSize(0, 128));
        Header->setMaximumSize(QSize(16777215, 128));
        horizontalLayout = new QHBoxLayout(Header);
        horizontalLayout->setSpacing(32);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(64, 32, 64, 32);
        pictureLabel = new QLabel(Header);
        pictureLabel->setObjectName("pictureLabel");
        pictureLabel->setMinimumSize(QSize(64, 64));
        pictureLabel->setFrameShape(QFrame::Box);

        horizontalLayout->addWidget(pictureLabel);

        nameLabel = new QLabel(Header);
        nameLabel->setObjectName("nameLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Corbel")});
        nameLabel->setFont(font);

        horizontalLayout->addWidget(nameLabel);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        homeButton = new QPushButton(Header);
        homeButton->setObjectName("homeButton");
        homeButton->setMinimumSize(QSize(128, 64));
        homeButton->setMaximumSize(QSize(128, 64));

        horizontalLayout->addWidget(homeButton);

        aboutButton = new QPushButton(Header);
        aboutButton->setObjectName("aboutButton");
        aboutButton->setMinimumSize(QSize(128, 64));
        aboutButton->setMaximumSize(QSize(128, 64));

        horizontalLayout->addWidget(aboutButton);

        projectsButton = new QPushButton(Header);
        projectsButton->setObjectName("projectsButton");
        projectsButton->setMinimumSize(QSize(128, 64));
        projectsButton->setMaximumSize(QSize(128, 64));

        horizontalLayout->addWidget(projectsButton);


        retranslateUi(Header);

        QMetaObject::connectSlotsByName(Header);
    } // setupUi

    void retranslateUi(QWidget *Header)
    {
        Header->setWindowTitle(QCoreApplication::translate("Header", "Form", nullptr));
        pictureLabel->setText(QString());
        nameLabel->setText(QCoreApplication::translate("Header", "DILLON METZLER", nullptr));
        homeButton->setText(QCoreApplication::translate("Header", "HOME", nullptr));
        aboutButton->setText(QCoreApplication::translate("Header", "ABOUT", nullptr));
        projectsButton->setText(QCoreApplication::translate("Header", "PROJECTS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Header: public Ui_Header {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADER_H
