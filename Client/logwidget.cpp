#include "logwidget.h"
#include "ui_logwidget.h"
#include "QLabel"
#include "QMovie"


LogWidget::LogWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LogWidget)
{
    ui->setupUi(this);
    func_init();
   }

void LogWidget::func_init()
{
    // connect
    // 触发重置按钮的信号槽连接
    connect(ui->btn_clear,SIGNAL(clicked()),this,SLOT(btn_clear_clicked()));
    // 触发登录按钮的信号槽连接
    connect(ui->btn_log,SIGNAL(clicked()),this,SLOT(btn_log_clicked()));
    // 发出信号后关闭登录窗口的信号槽连接
    connect(this,SIGNAL(close_window()),this,SLOT(close()));


    ui->edit_pw->setEchoMode(QLineEdit::Password);//输入的时候就显示圆点


    m_username = "chengzi";
    m_password = "yuanshenqidong";


    read_json();
}
void LogWidget::btn_log_clicked()
{
    // 从输入框获取账号
    QString name = ui->edit_name->text();
    // 从输入框获取密码
    QString password = ui->edit_pw->text();

    //账号和密码匹配正确
    if (name == m_username && password == m_password)
    {
        emit(login());
        write_json();
        emit(close_window());
    }
    else // 账号或密码错误
       QMessageBox::information(this, "(⊙o⊙)…","原神，启动！。。诶？没有启动，不是吧，密码你都记不住！");
}


// 清理输入栏
void LogWidget::btn_clear_clicked()
{
    ui->edit_pw->clear();
    ui->edit_name->clear();
}

LogWidget::~LogWidget()
{
    delete ui;
}

//最好不要重写，重写后会使ui不变化！
void LogWidget::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void LogWidget::read_json()
{
    //打开文件
    QFile file(QApplication::applicationDirPath()+"/config.json");
    if(!file.open(QIODevice::ReadOnly)) {
        qDebug() << "File open failed!";
    } else {
        qDebug() <<"File open successfully!";
    }
    QJsonDocument jdc(QJsonDocument::fromJson(file.readAll()));
    QJsonObject obj = jdc.object();
    QString save_name_flag=obj.value("SAVE_NAME").toString();
    QString save_password_flag=obj.value("SAVE_PASSWORD").toString();
    message_init(save_name_flag,save_password_flag);
}

//根据json内容决定是否填充输入框
void LogWidget::message_init(QString flag1,QString flag2)
{
    //qDebug() << flag1 << "^^^" << flag2 ;
    if (flag1 == "1")
    {
        ui->edit_name->setText("chengzi");
        ui->check_name->setChecked(true);
    }
    if(flag2 == "1")
    {
        ui->edit_pw->setText("yuanshenqidong");
        ui->check_pw->setChecked(true);
    }
}

// 更新json文件
void LogWidget::write_json()
{
    QFile file(QApplication::applicationDirPath()+"/config.json");
       if(!file.open(QIODevice::WriteOnly)) {
           qDebug() << "File open failed!";
       } else {
           qDebug() <<"File open successfully!";
       }
       QJsonObject obj;
       bool flag = ui->check_name->isChecked();
       if(flag == true)
       {
           obj["SAVE_NAME"] = "1";
       }
       else
           obj["SAVE_NAME"] = "0";
       flag = ui->check_pw->isChecked();
       if(flag == true)
       {
           obj["SAVE_PASSWORD"] = "1";
       }
       else
           obj["SAVE_PASSWORD"] = "0";
       QJsonDocument jdoc(obj);
       file.write(jdoc.toJson());
       file.flush();
}
