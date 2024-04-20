#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_header = new Header(ui->centralwidget);
    m_scrollView = new ScrollView(ui->centralwidget);

    ui->centralwidget->layout()->addWidget(m_scrollView);

    m_header->raise();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SetWidgetStyleSheet(QWidget *widget, QString path)
{
    QFile styleSheetFile(path);
#if defined(Q_DEBUG)
    Q_ASSERT(styleSheetFile.open(QFile::ReadOnly));
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    widget->setStyleSheet(styleSheet);
    styleSheetFile.close();
#else
    if(styleSheetFile.open(QFile::ReadOnly))
    {
        QString styleSheet = QLatin1String(styleSheetFile.readAll());
        widget->setStyleSheet(styleSheet);
        styleSheetFile.close();
    }
#endif

}

MainWindow* MainWindow::GetMainWindow(QWidget* widget)
{
    QWidget* prevWidget = nullptr;
    QWidget* currentWidget = widget;

    do
    {
        prevWidget = currentWidget;
        currentWidget = currentWidget->parentWidget();

        // Error if the mainWindow can not be found
        Q_ASSERT(prevWidget != currentWidget);
    }
    while(qobject_cast<MainWindow*>(currentWidget) == nullptr);

    return qobject_cast<MainWindow*>(currentWidget);
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
    emit ResizeSignal();
}
