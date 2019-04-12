#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //this->setMaximumSize(412,102);
    //this->setMinimumSize(412,102);
    //�۵Ľ���,�س������µ��ź���ԭ���ġ�ȷ������ť�ź�����
    QObject::connect(ui->cmdLineEdit,SIGNAL(returnPressed()),this,SLOT(on_submitButton_clicked()));
    //connect()
    this->setFixedSize(423,162);
    this->setWindowTitle("running");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_submitButton_clicked()
{
    QProcess *process = new QProcess;
    QString startProgram = ui->cmdLineEdit->text();
    process->start(startProgram.trimmed());
    ui->cmdLineEdit->clear();
    this->close();
}
