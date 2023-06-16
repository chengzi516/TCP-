/********************************************************************************
** Form generated from reading UI file 'logwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGWIDGET_H
#define UI_LOGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogWidget
{
public:
    QCheckBox *check_name;
    QCheckBox *check_pw;
    QPushButton *btn_log;
    QPushButton *btn_clear;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *edit_name;
    QLineEdit *edit_pw;

    void setupUi(QWidget *LogWidget)
    {
        if (LogWidget->objectName().isEmpty())
            LogWidget->setObjectName(QStringLiteral("LogWidget"));
        LogWidget->resize(500, 374);
        LogWidget->setMinimumSize(QSize(500, 374));
        LogWidget->setMaximumSize(QSize(500, 374));
        LogWidget->setStyleSheet(QLatin1String("QWidget#LogWidget{\n"
"background-image: url(:/photo/869925.png);}"));
        check_name = new QCheckBox(LogWidget);
        check_name->setObjectName(QStringLiteral("check_name"));
        check_name->setGeometry(QRect(10, 220, 87, 19));
        check_name->setStyleSheet(QStringLiteral("font: 9pt \"Sylfaen\";"));
        check_pw = new QCheckBox(LogWidget);
        check_pw->setObjectName(QStringLiteral("check_pw"));
        check_pw->setGeometry(QRect(110, 220, 87, 19));
        btn_log = new QPushButton(LogWidget);
        btn_log->setObjectName(QStringLiteral("btn_log"));
        btn_log->setGeometry(QRect(0, 250, 93, 28));
        btn_clear = new QPushButton(LogWidget);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        btn_clear->setGeometry(QRect(110, 250, 93, 28));
        label = new QLabel(LogWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 100, 30, 16));
        label_2 = new QLabel(LogWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 100, 30, 16));
        label_3 = new QLabel(LogWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(12, 12, 271, 16));
        label_3->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(LogWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(430, 10, 72, 15));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/photo/\347\231\273\345\275\225.svg);"));
        label_5 = new QLabel(LogWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 100, 31, 16));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/photo/\345\257\206\347\240\201\357\274\210\345\205\263\357\274\211.svg);"));
        label_6 = new QLabel(LogWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 100, 21, 16));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/photo/\350\264\246\346\210\267.svg);"));
        label_7 = new QLabel(LogWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 340, 341, 20));
        layoutWidget = new QWidget(LogWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 120, 351, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        edit_name = new QLineEdit(layoutWidget);
        edit_name->setObjectName(QStringLiteral("edit_name"));
        edit_name->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(edit_name);

        edit_pw = new QLineEdit(layoutWidget);
        edit_pw->setObjectName(QStringLiteral("edit_pw"));

        horizontalLayout->addWidget(edit_pw);


        retranslateUi(LogWidget);

        QMetaObject::connectSlotsByName(LogWidget);
    } // setupUi

    void retranslateUi(QWidget *LogWidget)
    {
        LogWidget->setWindowTitle(QApplication::translate("LogWidget", "Form", Q_NULLPTR));
        check_name->setText(QApplication::translate("LogWidget", "\350\256\260\344\275\217\350\264\246\345\217\267", Q_NULLPTR));
        check_pw->setText(QApplication::translate("LogWidget", "\350\256\260\344\275\217\345\257\206\347\240\201", Q_NULLPTR));
        btn_log->setText(QApplication::translate("LogWidget", "\347\231\273\345\275\225", Q_NULLPTR));
        btn_clear->setText(QApplication::translate("LogWidget", "\351\207\215\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("LogWidget", "\350\264\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("LogWidget", "\345\257\206\347\240\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("LogWidget", "\347\256\241\347\220\206\345\221\230\350\257\267\345\205\210\347\231\273\345\275\225\346\211\215\350\203\275\346\255\243\345\270\270\344\275\277\347\224\250\345\212\237\350\203\275\345\223\246\357\274\201", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QApplication::translate("LogWidget", "\344\273\243\347\240\201\345\267\262\345\274\200\346\272\220\350\207\263https://github.com/chengzi516", Q_NULLPTR));
        edit_name->setText(QString());
        edit_pw->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LogWidget: public Ui_LogWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGWIDGET_H
