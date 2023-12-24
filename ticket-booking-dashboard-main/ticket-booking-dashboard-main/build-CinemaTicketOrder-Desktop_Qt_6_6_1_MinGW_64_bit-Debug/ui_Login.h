/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QPushButton *pushButton_register;
    QPushButton *pushButton_register_admin;
    QPushButton *pushButton_login;
    QLineEdit *lineEdit_username;
    QLabel *label_username;
    QLineEdit *lineEdit_password;
    QLabel *label_password;
    QLabel *label_picture;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(620, 390);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        groupBox->setFont(font);
        pushButton_register = new QPushButton(groupBox);
        pushButton_register->setObjectName("pushButton_register");
        pushButton_register->setGeometry(QRect(75, 210, 161, 24));
        pushButton_register_admin = new QPushButton(groupBox);
        pushButton_register_admin->setObjectName("pushButton_register_admin");
        pushButton_register_admin->setGeometry(QRect(80, 250, 151, 24));
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(120, 170, 75, 24));
        pushButton_login->setLayoutDirection(Qt::LeftToRight);
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(100, 100, 121, 22));
        label_username = new QLabel(groupBox);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(30, 100, 71, 16));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(100, 130, 121, 22));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label_password = new QLabel(groupBox);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(30, 130, 71, 16));

        horizontalLayout_4->addWidget(groupBox);

        label_picture = new QLabel(centralwidget);
        label_picture->setObjectName("label_picture");
        label_picture->setMinimumSize(QSize(301, 291));

        horizontalLayout_4->addWidget(label_picture);

        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 620, 22));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName("statusbar");
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        groupBox->setTitle(QString());
        pushButton_register->setText(QCoreApplication::translate("Login", "Create Customer Account", nullptr));
        pushButton_register_admin->setText(QCoreApplication::translate("Login", "Create Admin Account", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_username->setText(QCoreApplication::translate("Login", "Username:", nullptr));
        label_password->setText(QCoreApplication::translate("Login", " Password:", nullptr));
        label_picture->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
