#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("��������");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//ģ��һ���������ģ��
//�û���¼���˳�
void MainWindow::on_registerExitButton_clicked()
{
    registerForm *rg = new registerForm;
    rg->setWindowTitle("�û���¼/�˳�");
    rg->show();
}
