/********************************************************************************
** Form generated from reading UI file 'howtoplay.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOWTOPLAY_H
#define UI_HOWTOPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_howtoplay
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;

    void setupUi(QMainWindow *howtoplay)
    {
        if (howtoplay->objectName().isEmpty())
            howtoplay->setObjectName(QString::fromUtf8("howtoplay"));
        howtoplay->resize(800, 600);
        howtoplay->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(howtoplay);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(230, 360, 531, 141));
        QFont font;
        font.setFamily(QString::fromUtf8("Kristen ITC"));
        font.setPointSize(15);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5->setWordWrap(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 140, 211, 121));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Kristen ITC"));
        font1.setPointSize(25);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 691, 121));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Kristen ITC"));
        font2.setPointSize(30);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 340, 211, 121));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 180, 531, 141));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setWordWrap(true);
        howtoplay->setCentralWidget(centralwidget);

        retranslateUi(howtoplay);

        QMetaObject::connectSlotsByName(howtoplay);
    } // setupUi

    void retranslateUi(QMainWindow *howtoplay)
    {
        howtoplay->setWindowTitle(QApplication::translate("howtoplay", "MainWindow", nullptr));
        label_5->setText(QApplication::translate("howtoplay", "Click on an empty tile on one of the three tic tac toe board shown on the very left in order to place your piece", nullptr));
        label_2->setText(QApplication::translate("howtoplay", "Objective:", nullptr));
        label->setText(QApplication::translate("howtoplay", "How to play", nullptr));
        label_4->setText(QApplication::translate("howtoplay", "Gameplay:", nullptr));
        label_3->setText(QApplication::translate("howtoplay", " To place four of your own pieces (o) or (x) in a row either verticaclly, horizontally, or diagonally across one board or three different boards to win", nullptr));
    } // retranslateUi

};

namespace Ui {
    class howtoplay: public Ui_howtoplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOWTOPLAY_H
