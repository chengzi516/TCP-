#include "fruit_server.h"
#include "ui_fruit_server.h"

Fruit_Server::Fruit_Server(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Fruit_Server)
{
    ui->setupUi(this);
    m_log = new LogWidget;
    m_log->show();
       // 注意，这个信号槽的作用就是激活主窗口的，我们已经让主窗口不可以自动打开，
       // 必须通过登录窗口中登录按钮发出的信号槽的信号才能打开
       connect(m_log,SIGNAL(login()),this,SLOT(show()));
       //计时器
       timer_calendar = new QTimer(this);
       connect(timer_calendar,SIGNAL(timeout()),this,SLOT(timer_Update()));
       timer_calendar->start(1000);

}

Fruit_Server::~Fruit_Server()
{
    delete ui;
}

void Fruit_Server::timer_Update()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str =time.toString("yyyy-mm-dd hh:mm:ss dddd");
    ui->textBrowser->setText(str);
}
void Fruit_Server::on_pushButton_quit_clicked()
{
    delete this;
    QApplication::quit();
}

void Fruit_Server::on_pushButton_about_clicked()
{
    Form *FM= new Form();
    FM->show();
}


//以下是接受区的需要函数
void Fruit_Server::on_pushButton_send_clicked()
{

    static bool isconnect = false;
    QString host_addr = ui->lineEdit_1->text(); //获取输入的远程主机地址
    quint16 host_port = ui->lineEdit_2->text().toUShort();
    if(ui->pushButton_send->text()=="确定"){
    if(isconnect==false){
    isconnect=true;

    tcpServer = new QTcpServer();
    bool state = tcpServer->listen(QHostAddress(host_addr),host_port);
    if(state){

         qDebug()<<"正在监听服务端";


             ui->lineEdit_1->setEnabled(false);
              ui->lineEdit_2->setEnabled(false);
                  ui->pushButton_send->setText("取消");
         connect(tcpServer,&QTcpServer::newConnection,this,&Fruit_Server::connectSucceed);
    }else{
        isconnect=false;

        ui->lineEdit_1->setEnabled(true);
        ui->lineEdit_2->setEnabled(true);
        ui->pushButton_send->setText("确定");
    }
    }else{
        qDebug()<<"服务器开启监失败";
        ui->lineEdit_1->setEnabled(true);
        ui->lineEdit_2->setEnabled(true);
        ui->pushButton_send->setText("确定");
      }
    }else{//断开
        isconnect=false;
        qDebug()<< "服务端手动关闭！";
        //tcpSocket->close();
        //tcpSocket = Q_NULLPTR;
        tcpServer->close();
        tcpServer = Q_NULLPTR;
        ui->lineEdit_1->setEnabled(true);
        ui->lineEdit_2->setEnabled(true);
        ui->pushButton_send->setText("确定");
    }

}
void Fruit_Server::connectSucceed(){
    if(tcpSocket != Q_NULLPTR){

        tcpSocket = tcpServer->nextPendingConnection();

   // connect(tcpSocket,&QTcpSocket::readyRead,this,&Fruit_Server::read_ClintDate);
    connect(tcpSocket,&QTcpSocket::disconnected,this,&Fruit_Server::client_disconnect);
    connect(tcpSocket, &QTcpSocket::readyRead, this, &Fruit_Server::readyRead);}else{
        return;
    }
}
/*
void Fruit_Server::readyRead()
{
    QTcpSocket *client = qobject_cast<QTcpSocket *>(sender()); // 获取触发信号的客户端连接
    if (!client) {
        qDebug() << "Invalid client socket";
        return;
    }
    QByteArray message = client->readAll(); // 读取接收到的数据
    QDataStream in(&message, QIODevice::ReadOnly);
    QString data, type;
    in >> data >> type; // 解析接收到的数据
    if (type == "apple") {
        ui->textBrowser_apple->append(data); // 在指定的 textBrowser 上显示数据
    } else if (type == "grape") {
        ui->textBrowser_grape->append(data);
    }else if (type == "banana") {
        ui->textBrowser_banana->append(data);
    }else if (type == "watermelon") {
        ui->textBrowser_watermelon->append(data);
    }else if (type == "cucumber") {
        ui->textBrowser_cucumber->append(data);
    }else if (type == "pear") {
        ui->textBrowser_pear->append(data);
    }
}
*/
void Fruit_Server::readyRead()
{
    QTcpSocket *client = qobject_cast<QTcpSocket *>(sender()); // 获取触发信号的客户端连接
    if (!client) {
        qDebug() << "Invalid client socket";
        return;
    }
    QByteArray message = client->readAll(); // 读取接收到的数据
    QStringList messageList = QString(message).split(":"); // 将数据和数据类型用冒号分隔
    if (messageList.size() != 2) { // 如果拆分后不是两个部分，说明数据格式不正确
        qDebug() << "Invalid message format";
        return;
    }
    QString type = messageList[0]; // 获取数据类型
    QString data = messageList[1]; // 获取数据
    QStringList dataList = data.split(","); // 将逗号分隔的字符串拆分成两个部分
    if (dataList.size() != 2) { // 如果拆分后不是两个部分，说明数据格式不正确
        qDebug() << "Invalid data format";
        return;
    }
    QString displayData = QString("价格是\"%1\"元，重量为\"%2\"克").arg(dataList[0]).arg(dataList[1]); // 构造显示的文本
    if (type == "apple") {
        ui->textBrowser_apple->append(displayData); // 在指定的 textBrowser 上显示数据
    } else if (type == "grape") {
        ui->textBrowser_grape->append(displayData);
    } else if (type == "banana") {
        ui->textBrowser_banana->append(displayData);
    } else if (type == "watermelon") {
        ui->textBrowser_watermelon->append(displayData);
    } else if (type == "cucumber") {
        ui->textBrowser_cucumber->append(displayData);
    } else if (type == "pear") {
        ui->textBrowser_pear->append(displayData);
    }
}
//void Fruit_Server::read_ClintDate(){

      //  ui->textBrowser_apple->insertPlainText(QString(tcpSocket->readAll()).toUtf8());
       /* QByteArray message = tcpServer->nextPendingConnection()->readAll();
        QDataStream in(&message, QIODevice::ReadOnly);
        QString data, type;
        in >> data >> type; // 接收数据和数据类型
        if (type == "apple") {
            ui->textBrowser_apple->append(data); // 将数据显示在对应的 textBrowser 上
        } else if (type == "grape") {
            ui->textBrowser_grape->append(data);
        } */
   // ui->textBrowser->moveCursor(QTextCursor::End);
//}

void Fruit_Server::client_disconnect(){
   QString str_disconnect="客户端主动断开连接";


}
