#ifndef FOOTER_H
#define FOOTER_H

#include <QWidget>

namespace Ui {
class Footer;
}

class Footer : public QWidget
{
    Q_OBJECT

public:
    explicit Footer(QWidget *parent = nullptr);
    ~Footer();

private:
    Ui::Footer *ui;
};

#endif // FOOTER_H
