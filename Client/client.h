#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QTcpSocket> //通信套接字
#include <QTcpServer> //监听套接字
#include <QDebug> //控制台打印信息
#include <logwidget.h>
#include <QTimer>

namespace Ui {
class client;
}

class client : public QMainWindow
{
    Q_OBJECT

public:
    explicit client(QWidget *parent = nullptr);
    ~client();

private slots:
    void on_pushButton_connect_clicked();

    void connectSucceed();
    void Server_disconnect();
    void read_ServerDate();
    void on_pushButton_send_clicked();

   //void Server_connect();
    //void readyRead();
   // void irq_time_period();
private:
    Ui::client *ui;
    QTcpServer *tcpSrever;//监听套接字
    QTcpSocket *tcpSocket;//通信套接字
    LogWidget * m_log; // 登录界面类的对象作为指针
 //   QTimer     *timer_period;
};

#endif // CLIENT_H
