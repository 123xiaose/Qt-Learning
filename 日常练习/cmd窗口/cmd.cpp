//#pragma execution_character_set("utf-8")   //��ʾ����
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QCheckBox>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QComboBox>
//#include <QListView>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //��һ�д���˵��
    QLabel *useIntroduction = new QLabel;
    useIntroduction->setText("Please enter the program name");
    //��һ�в���
    QHBoxLayout *useLayout = new QHBoxLayout;  
    useLayout->addWidget(useIntroduction); 

    //�ڶ���
    QLabel *keyWord = new QLabel;
    keyWord->setText("Open");
    QLineEdit *blank = new QLineEdit;
    QComboBox *option = new QComboBox();
    //option->setStyleSheet("QComboBox{border:1px solid gray;}"
    //"QComboBox QAbstractItemView::item{height:20px;}"//�����߶�
    //"QComboBox::down-arrow{image:url(:/icon/arrowdown);}"//������ͷ
    //"QComboBox::drop-down{border:0px;}"); ������ť
    option->addItem(QWidget::tr(" "));
    option->addItem(QWidget::tr(" "));
    option->addItem(QWidget::tr(" "));

    //�ڶ��в���
    QHBoxLayout *cmdLayout = new QHBoxLayout;
    cmdLayout->addWidget(keyWord);
    cmdLayout->addWidget(blank);
    cmdLayout->addWidget(option);

    //���һ��������ť
    QPushButton *submitButton = new QPushButton;
    QPushButton *cancelButton = new QPushButton;
    QPushButton *browserButton = new QPushButton;
    submitButton->setText("Submit");
    cancelButton->setText("Cancel");
    browserButton->setText("Brower"); 
    //�հױ�ǩ
    QLabel *blanks = new QLabel;
    //��ťˮƽ����
    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(blanks); 
    buttonLayout->addWidget(blanks);
    buttonLayout->addWidget(blanks);
    buttonLayout->addWidget(blanks);
    buttonLayout->addWidget(blanks);       
    buttonLayout->addWidget(submitButton);
    buttonLayout->addWidget(cancelButton);
    buttonLayout->addWidget(browserButton);

    //������洹ֱ���� 
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(useLayout);
    mainLayout->addLayout(cmdLayout);
    mainLayout->addLayout(buttonLayout);

    //���ϽǱ���
    QWidget *widgetName = new QWidget;
    widgetName->setWindowTitle("Running");
    widgetName->setLayout(mainLayout);

    widgetName->show();
 

    return app.exec();
}