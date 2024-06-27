#ifndef XO_WINDOW_H
#define XO_WINDOW_H

#include <QDialog>

namespace Ui {
class XO_Window;
}

class XO_Window : public QDialog
{
    Q_OBJECT

public:
    explicit XO_Window(QWidget *parent = nullptr);
    ~XO_Window();

private:
    Ui::XO_Window *ui;
};

#endif // XO_WINDOW_H
