QT       += core gui
QT       += svgwidgets
QT       += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutme.cpp \
    animatedbutton.cpp \
    footer.cpp \
    header.cpp \
    hero.cpp \
    main.cpp \
    mainwindow.cpp \
    projects.cpp \
    scrollview.cpp

HEADERS += \
    aboutme.h \
    animatedbutton.h \
    footer.h \
    header.h \
    hero.h \
    mainwindow.h \
    projects.h \
    scrollview.h

FORMS += \
    aboutme.ui \
    footer.ui \
    header.ui \
    hero.ui \
    mainwindow.ui \
    projects.ui \
    scrollview.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
