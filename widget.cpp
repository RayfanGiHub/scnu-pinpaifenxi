#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_key_select_currentTextChanged(const QString &arg1)
{
    QString key_select_text = arg1;
    QString addmore = "添加更多";

    if(key_select_text == addmore){
        //QString add_key_text = ui->key_Edit_or_show->text();
        //ui->key_select->addItem(add_key_text);
    }
    //else
       // ui->key_Edit_or_show->setText(key_select_text);


}

void Widget::on_key_Edit_or_show_editingFinished()
{
    //QString add_key_text = ui->key_Edit_or_show->text();
    //ui->key_select->addItem(add_key_text);
}

void Widget::on_key_Edit_or_show_textEdited(const QString &arg1)
{
    QString add_key_text = arg1;
    //ui->key_select->addItem(add_key_text);
}
