#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <qpainter.h>
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private:
    Ui::Form *ui;
private slots:
 void paintEvent(QPaintEvent *);
};

#endif // FORM_H
