#ifndef FRUIT_SERVER_H
#define FRUIT_SERVER_H

#include <QMainWindow>
#include <logwidget.h>
#include <QTimer>          //定时器头文件
#include <QDateTime>       //获取系统给的时间
#include <form.h>
#include <QTcpSocket>  //通信套接字
#include <QTcpServer> //监听套接字
#include <QDebug>     //控制台打印信息

namespace Ui {
class Fruit_Server;
}

class Fruit_Server : public QMainWindow
{
    Q_OBJECT

public:
    explicit Fruit_Server(QWidget *parent = nullptr);
    ~Fruit_Server();

private slots:
    void timer_Update();
    void on_pushButton_quit_clicked();
    void on_pushButton_about_clicked();
    void on_pushButton_send_clicked();
    void connectSucceed();
    //void read_ClintDate();
    void client_disconnect();
    void readyRead();
private:
    Ui::Fruit_Server *ui;
    LogWidget * m_log;
    QTimer *timer_calendar;
    QTcpServer *tcpServer;   //监听套接字
    QTcpSocket *tcpSocket;   //通信套接字
};

#endif // FRUIT_SERVER_H
