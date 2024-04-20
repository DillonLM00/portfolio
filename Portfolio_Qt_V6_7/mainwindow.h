#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "header.h"
#include "hero.h"
#include "scrollview.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    static void SetWidgetStyleSheet(QWidget *widget, QString path);
    static MainWindow* GetMainWindow(QWidget* widget);

signals:
    void ResizeSignal();

protected:
    void resizeEvent(QResizeEvent* event);

private:
    Ui::MainWindow *ui;

    Header* m_header;
    ScrollView* m_scrollView;
    Hero* m_hero;

};
#endif // MAINWINDOW_H
