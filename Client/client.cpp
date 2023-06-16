#include "client.h"
#include "ui_client.h"

client::client(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::client)
{
    ui->setupUi(this);
    // 通过指针创建登录界面类的对象
     m_log = new LogWidget;
    // 调用登录窗口的show()函数显示登录界面
     m_log->show();
    // 建立信号槽，到接收到登录界面发来的login()信号后，调用主窗口的show()函数。
     connect(m_log,SIGNAL(login()),this,SLOT(show()));
   //  timer_period = new QTimer();
    //connect(timer_period,&QTimer::timeout,this,&client::irq_time_period);

}

client::~client()
{
    delete ui;
}
//连接按钮的点击函数
void client::on_pushButton_connect_clicked()
{
    //设定一个bool值变量isconnect来判断此时的应用状态
    static bool isconnect =false;
    //先获取端口号和地址
    QString host_addr = ui->lineEdit_addr->text();
    quint16 host_port = ui->lineEdit_port ->text().toUShort(); //使用toushort进行类型转换


        if(isconnect==false){
        isconnect=true;

             qDebug()<<"已成功开启！";
             tcpSocket = new QTcpSocket();
             tcpSocket->connectToHost(host_addr,host_port);
             bool state =tcpSocket->waitForConnected(3000);
             if(state){
                 qDebug()<<"客户端连接成功";
                 ui->textBrowser->append("连接成功啦！开始发送数据吧(*╹▽╹*)"); // 在 textBrowser 中显示连接成功
                 ui->lineEdit_addr->setEnabled(false);
                 ui->lineEdit_port->setEnabled(false);
                 ui->pushButton_connect->setText("关闭");
                // connect(tcpSocket,&QTcpSocket::readyRead,this,&client::Server_connect); 本行逻辑已在41行实现
                 connect(tcpSocket,&QTcpSocket::disconnected,this,&client::Server_disconnect);
                 connect(tcpSocket,&QTcpSocket::readyRead,this,&client::read_ServerDate);
             }else{
                 qDebug()<<"客户端连接失败";
                 isconnect = false;
                 ui->lineEdit_addr->setEnabled(true);
                 ui->lineEdit_port->setEnabled(true);
                 ui->pushButton_connect->setText("连接");
             }

        }else{
            isconnect=false;
            qDebug()<< "成功手动关闭！";
            tcpSocket->close(); //服务器关闭
            tcpSocket = Q_NULLPTR; //且设为空
            ui->lineEdit_addr->setEnabled(true);
            ui->lineEdit_port->setEnabled(true);
            ui->pushButton_connect->setText("连接");
        }
}
//存放槽函数！
void client::connectSucceed(){
    tcpSocket = tcpSrever->nextPendingConnection();

}

void client::Server_disconnect(){
     tcpSocket->disconnectFromHost();
     tcpSocket = Q_NULLPTR;
     ui->textBrowser->append("服务器已主动断开连接！！");
     ui->lineEdit_addr->setEnabled(true);
     ui->lineEdit_port->setEnabled(true);
     ui->pushButton_connect->setText("连接");


}

void client::read_ServerDate(){
    if(ui->checkBox_autowrap->isChecked()){
        ui->textBrowser->append(QString(tcpSocket->readAll()).toUtf8());
    }else{
        ui->textBrowser->insertPlainText(QString(tcpSocket->readAll()).toUtf8());
    }
    ui->textBrowser->moveCursor(QTextCursor::End); //设置自动移动到底部
}

/*
void client::sendData(QString data, QString type)
{
    QByteArray message;
    QDataStream out(&message, QIODevice::WriteOnly);
    out << data << type; // 将要发送的数据和数据类型一起打包发送
    // out << QList<double>() << data << type; // 在数据和数据类型前添加一个空的 QList<double>，占位用
    tcpSocket->write(message);
}
*/
void client::sendData(QString data, QString type)
{
    QStringList dataList = data.split(","); // 将逗号分隔的字符串拆分成两个部分
    if (dataList.size() != 2) { // 如果拆分后不是两个部分，说明数据格式不正确
        qDebug() << "Invalid data format";
        return;
    }
    QString message = QString("%1,%2").arg(dataList[0]).arg(dataList[1]); // 构造发送的数据字符串，用逗号分隔价格和重量
    tcpSocket->write(QString("%1:%2").arg(type).arg(message).toUtf8()); // 发送数据和数据类型，用冒号分隔
}

void client::on_pushButton_send_clicked()
{

    QString data = ui->lineEdit->text();
    QString type = ui->comboBox->currentText(); // 获取数据类型
    sendData(data, type); // 发送数据和数据类型
}
/*
void client::on_pushButton_send_clicked()
{
   //QString data = ui->textEdit->toPlainText();
  // tcpSocket->write(data.toUtf8(),str);
    QString data = ui->lineEdit->text();
    QString type = ui->comboBox->currentText(); // 获取数据类型
    sendData(data, type); // 发送数据和数据类型
   //以下是自动发送的代码，有停止发送后仍然继续的bug
  /*  if(ui->checkBox_period->isChecked()){
        int time = ui->lineEdit_timeset->text().toInt();
        if(time <10){
            qDebug()<<"输入时间错误！";
            return;
        }
        if(ui->pushButton_send->text() == "发送"){
            ui->pushButton_send->setText("停止发送");
        }else{
            ui->pushButton_send->setText("发送");
        }
        timer_period->start(time);
        QString data = ui->textEdit->toPlainText();
        tcpSocket->write(data.toUtf8());
       }else{
        QString data = ui->textEdit->toPlainText();
        tcpSocket->write(data.toUtf8());
    }*/
//}

/*void client::irq_time_period(){
    QString data = ui->textEdit->toPlainText();
    tcpSocket->write(data.toUtf8());
}*/
