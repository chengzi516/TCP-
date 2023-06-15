/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_client
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit_addr;
    QLabel *label_3;
    QPushButton *pushButton_connect;
    QLineEdit *lineEdit_port;
    QCheckBox *checkBox_autowrap;
    QLabel *label_5;
    QTextEdit *textEdit;
    QPushButton *pushButton_send;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *client)
    {
        if (client->objectName().isEmpty())
            client->setObjectName(QStringLiteral("client"));
        client->resize(700, 500);
        client->setMinimumSize(QSize(700, 500));
        client->setMaximumSize(QSize(700, 500));
        client->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(client);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("QWidget#centralWidget{\n"
"background-image: url(:/photo/907879.png);\n"
"}"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(11, 11, 375, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 80, 90, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(11, 101, 60, 16));
        label_2->setMaximumSize(QSize(16777215, 20));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(310, 100, 381, 111));
        textBrowser->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255,100);"));
        lineEdit_addr = new QLineEdit(centralWidget);
        lineEdit_addr->setObjectName(QStringLiteral("lineEdit_addr"));
        lineEdit_addr->setGeometry(QRect(11, 123, 171, 21));
        lineEdit_addr->setMaximumSize(QSize(300, 16777215));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(11, 151, 60, 16));
        pushButton_connect = new QPushButton(centralWidget);
        pushButton_connect->setObjectName(QStringLiteral("pushButton_connect"));
        pushButton_connect->setGeometry(QRect(200, 150, 93, 28));
        lineEdit_port = new QLineEdit(centralWidget);
        lineEdit_port->setObjectName(QStringLiteral("lineEdit_port"));
        lineEdit_port->setGeometry(QRect(11, 173, 171, 21));
        lineEdit_port->setMaximumSize(QSize(300, 16777215));
        checkBox_autowrap = new QCheckBox(centralWidget);
        checkBox_autowrap->setObjectName(QStringLiteral("checkBox_autowrap"));
        checkBox_autowrap->setGeometry(QRect(418, 214, 117, 19));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(11, 240, 75, 16));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 260, 281, 101));
        textEdit->setMaximumSize(QSize(400, 170));
        textEdit->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255,100);"));
        pushButton_send = new QPushButton(centralWidget);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));
        pushButton_send->setGeometry(QRect(310, 330, 93, 28));
        pushButton_send->setMaximumSize(QSize(100, 16777215));
        pushButton_send->setBaseSize(QSize(0, 0));
        client->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(client);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 700, 26));
        client->setMenuBar(menuBar);
        mainToolBar = new QToolBar(client);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        client->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(client);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        client->setStatusBar(statusBar);

        retranslateUi(client);

        QMetaObject::connectSlotsByName(client);
    } // setupUi

    void retranslateUi(QMainWindow *client)
    {
        client->setWindowTitle(QApplication::translate("client", "client", Q_NULLPTR));
        label->setText(QApplication::translate("client", "\345\260\212\346\225\254\347\232\204\347\256\241\347\220\206\345\221\230\357\274\214\345\234\250\344\275\277\347\224\250\345\211\215\350\257\267\345\205\210\350\277\236\346\216\245\344\270\273\346\234\272\347\232\204\345\234\260\345\235\200\344\270\216\347\253\257\345\217\243\345\223\246\357\274\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("client", "\346\234\215\345\212\241\345\231\250\347\212\266\346\200\201\346\240\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("client", "\344\270\273\346\234\272\345\234\260\345\235\200", Q_NULLPTR));
        label_3->setText(QApplication::translate("client", "\344\270\273\346\234\272\347\253\257\345\217\243", Q_NULLPTR));
        pushButton_connect->setText(QApplication::translate("client", "\350\277\236\346\216\245", Q_NULLPTR));
        checkBox_autowrap->setText(QApplication::translate("client", "\346\216\245\345\217\227\350\207\252\345\212\250\346\215\242\350\241\214", Q_NULLPTR));
        label_5->setText(QApplication::translate("client", "\346\225\260\346\215\256\345\217\221\351\200\201\345\217\243", Q_NULLPTR));
        pushButton_send->setText(QApplication::translate("client", "\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class client: public Ui_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
