#ifndef ANIMATEDBUTTON_H
#define ANIMATEDBUTTON_H

#include <QObject>
#include <QPropertyAnimation>
#include <QPushButton>

class AnimatedButton : public QPushButton
{
    Q_OBJECT

public:
    explicit AnimatedButton(QWidget* parent = nullptr);
    ~AnimatedButton();

protected:
    void enterEvent(QEnterEvent* event);
    void leaveEvent(QEvent* event);

private:
    QPropertyAnimation* m_moveAnimation;
    QPoint m_currentOrigin;

private slots:
    void OnLoad();
    void UpdatePosition();
};

#endif // ANIMATEDBUTTON_H
