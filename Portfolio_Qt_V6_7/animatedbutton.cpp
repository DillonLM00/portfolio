#include "animatedbutton.h"

#include "mainwindow.h"

#include <QTimer>

AnimatedButton::AnimatedButton(QWidget *parent)
    : QPushButton(parent)
{
    m_moveAnimation = new QPropertyAnimation(this, "pos");
    m_moveAnimation->setDuration(150);

    connect(MainWindow::GetMainWindow(parent), &MainWindow::ResizeSignal, this, &AnimatedButton::UpdatePosition);

    QTimer::singleShot(0, this,  SLOT(OnLoad()));
}

AnimatedButton::~AnimatedButton()
{

}

void AnimatedButton::enterEvent(QEnterEvent* event)
{
    if(m_moveAnimation->state() == QAbstractAnimation::Running)
    {
        m_moveAnimation->stop();
    }

    m_moveAnimation->setStartValue(m_currentOrigin);
    m_moveAnimation->setEndValue(QPoint(this->pos().x() , m_currentOrigin.y() - 8));
    m_moveAnimation->start();
}

void AnimatedButton::leaveEvent(QEvent* event)
{
    if(m_moveAnimation->state() == QAbstractAnimation::Running)
    {
        m_moveAnimation->stop();
    }

    m_moveAnimation->setStartValue(this->pos());
    m_moveAnimation->setEndValue(m_currentOrigin);
    m_moveAnimation->start();
}

void AnimatedButton::OnLoad()
{
    m_currentOrigin = this->pos();
}

void AnimatedButton::UpdatePosition()
{
    m_currentOrigin = this->pos();
}




