#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();


private slots:
    void on_key_select_currentTextChanged(const QString &arg1);

    void on_key_Edit_or_show_editingFinished();

    void on_key_Edit_or_show_textEdited(const QString &arg1);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
