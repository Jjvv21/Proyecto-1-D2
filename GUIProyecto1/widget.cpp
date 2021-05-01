#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>
using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("C! - IDE");
    QStringList ColumnTittle;
    ui->tableWidget->setColumnCount(4);
    ColumnTittle <<"Direccion"<<"Valor"<<"Etiqueta"<<"Referencias";
    ui->tableWidget->setHorizontalHeaderLabels(ColumnTittle);
    QStringList VColumnNums;






}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_2_clicked()
{
    QString data = ui->textEdit->toPlainText();
    const QString &s = data;
     qDebug("%s", qPrintable(s));
}
