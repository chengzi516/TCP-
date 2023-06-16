/********************************************************************************
** Form generated from reading UI file 'fruit_server.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRUIT_SERVER_H
#define UI_FRUIT_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fruit_Server
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QTextBrowser *textBrowser_banana;
    QTextBrowser *textBrowser_grape;
    QTextBrowser *textBrowser_watermelon;
    QTextBrowser *textBrowser_cucumber;
    QTextBrowser *textBrowser_pear;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QTextBrowser *textBrowser_apple;
    QToolButton *toolButton_5;
    QPushButton *pushButton_about;
    QPushButton *pushButton_quit;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_send;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_1;
    QLabel *label_3;
    QToolButton *toolButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Fruit_Server)
    {
        if (Fruit_Server->objectName().isEmpty())
            Fruit_Server->setObjectName(QStringLiteral("Fruit_Server"));
        Fruit_Server->resize(1500, 750);
        Fruit_Server->setMinimumSize(QSize(1500, 750));
        Fruit_Server->setMaximumSize(QSize(1500, 750));
        centralWidget = new QWidget(Fruit_Server);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("QWidget#centralWidget{\n"
"background-image: url(:/photo/833691.jpg);\n"
"}"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 110, 1511, 502));
        textBrowser_banana = new QTextBrowser(groupBox);
        textBrowser_banana->setObjectName(QStringLiteral("textBrowser_banana"));
        textBrowser_banana->setGeometry(QRect(226, 184, 518, 149));
        textBrowser_banana->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255,100);"));
        textBrowser_grape = new QTextBrowser(groupBox);
        textBrowser_grape->setObjectName(QStringLiteral("textBrowser_grape"));
        textBrowser_grape->setGeometry(QRect(226, 340, 518, 150));
        textBrowser_grape->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255,100);"));
        textBrowser_watermelon = new QTextBrowser(groupBox);
        textBrowser_watermelon->setObjectName(QStringLiteral("textBrowser_watermelon"));
        textBrowser_watermelon->setGeometry(QRect(961, 184, 531, 149));
        textBrowser_watermelon->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255,100);"));
        textBrowser_cucumber = new QTextBrowser(groupBox);
        textBrowser_cucumber->setObjectName(QStringLiteral("textBrowser_cucumber"));
        textBrowser_cucumber->setGeometry(QRect(961, 340, 531, 150));
        textBrowser_cucumber->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255,100);"));
        textBrowser_pear = new QTextBrowser(groupBox);
        textBrowser_pear->setObjectName(QStringLiteral("textBrowser_pear"));
        textBrowser_pear->setGeometry(QRect(962, 27, 531, 150));
        textBrowser_pear->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255,100);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(12, 27, 207, 150));
        label_4->setStyleSheet(QStringLiteral("image: url(:/photo/apple.svg);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(12, 184, 207, 149));
        label_5->setStyleSheet(QStringLiteral("image: url(:/photo/banana.svg);"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(760, 50, 201, 121));
        label_6->setStyleSheet(QStringLiteral("image: url(:/photo/pear.svg);"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(751, 184, 207, 149));
        label_7->setStyleSheet(QStringLiteral("image: url(:/photo/watermelon.svg);"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 350, 211, 131));
        label_8->setStyleSheet(QStringLiteral("image: url(:/photo/grape.svg);"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(760, 350, 191, 141));
        label_9->setStyleSheet(QStringLiteral("image: url(:/photo/cucumber.svg);"));
        textBrowser_apple = new QTextBrowser(groupBox);
        textBrowser_apple->setObjectName(QStringLiteral("textBrowser_apple"));
        textBrowser_apple->setGeometry(QRect(226, 27, 518, 150));
        textBrowser_apple->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255,100);"));
        toolButton_5 = new QToolButton(centralWidget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setEnabled(true);
        toolButton_5->setGeometry(QRect(1041, 34, 425, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_5->sizePolicy().hasHeightForWidth());
        toolButton_5->setSizePolicy(sizePolicy);
        toolButton_5->setMinimumSize(QSize(0, 0));
        toolButton_5->setMaximumSize(QSize(600, 16777215));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        toolButton_5->setFont(font);
        toolButton_5->setStyleSheet(QStringLiteral(""));
        pushButton_about = new QPushButton(centralWidget);
        pushButton_about->setObjectName(QStringLiteral("pushButton_about"));
        pushButton_about->setGeometry(QRect(526, 12, 250, 75));
        pushButton_about->setMinimumSize(QSize(250, 75));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_about->setFont(font1);
        pushButton_quit = new QPushButton(centralWidget);
        pushButton_quit->setObjectName(QStringLiteral("pushButton_quit"));
        pushButton_quit->setGeometry(QRect(783, 12, 250, 75));
        pushButton_quit->setMinimumSize(QSize(250, 75));
        pushButton_quit->setFont(font1);
        pushButton_quit->setStyleSheet(QStringLiteral(""));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(830, 620, 250, 50));
        textBrowser->setMaximumSize(QSize(250, 50));
        pushButton_send = new QPushButton(centralWidget);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));
        pushButton_send->setGeometry(QRect(500, 620, 131, 28));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 621, 258, 74));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(200, 0));
        lineEdit_2->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(lineEdit_2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(280, 620, 202, 71));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_1 = new QLineEdit(layoutWidget1);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setMinimumSize(QSize(200, 0));
        lineEdit_1->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(lineEdit_1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(50, 30, 441, 41));
        Fruit_Server->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Fruit_Server);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1500, 26));
        Fruit_Server->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Fruit_Server);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Fruit_Server->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Fruit_Server);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Fruit_Server->setStatusBar(statusBar);

        retranslateUi(Fruit_Server);

        QMetaObject::connectSlotsByName(Fruit_Server);
    } // setupUi

    void retranslateUi(QMainWindow *Fruit_Server)
    {
        Fruit_Server->setWindowTitle(QApplication::translate("Fruit_Server", "Fruit_Server", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Fruit_Server", "\346\260\264\346\236\234\347\212\266\346\200\201\346\240\217", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        toolButton_5->setText(QApplication::translate("Fruit_Server", "\346\227\240\344\272\272\350\266\205\345\270\202\346\260\264\346\236\234\351\207\207\351\233\206\347\263\273\347\273\237\357\274\210\345\256\242\346\210\267\347\253\257\357\274\211", Q_NULLPTR));
        pushButton_about->setText(QApplication::translate("Fruit_Server", "\345\205\263\344\272\216", Q_NULLPTR));
        pushButton_quit->setText(QApplication::translate("Fruit_Server", "\351\200\200\345\207\272", Q_NULLPTR));
        pushButton_send->setText(QApplication::translate("Fruit_Server", "\347\241\256\345\256\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("Fruit_Server", "\344\270\273\346\234\272\347\253\257\345\217\243", Q_NULLPTR));
        label_3->setText(QApplication::translate("Fruit_Server", "\344\270\273\346\234\272\345\234\260\345\235\200", Q_NULLPTR));
        toolButton->setText(QApplication::translate("Fruit_Server", "TCP\351\200\232\350\256\257\345\256\236\350\256\255\351\241\271\347\233\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Fruit_Server: public Ui_Fruit_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRUIT_SERVER_H
