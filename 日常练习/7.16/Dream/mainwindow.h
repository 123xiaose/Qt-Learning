#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextCodec>
#include <registerform.h>


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //ģ��һ���������ģ��
    void on_registerExitButton_clicked();   //�û���¼���˳�

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
