/********************************************************************************
** Form generated from reading UI file 'TicTacToe3x3x3.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICTACTOE3X3X3_H
#define UI_TICTACTOE3X3X3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicTacToe3x3x3
{
public:
    QWidget *centralWidget;
    QFrame *line;
    QFrame *line_3;
    QFrame *line_5;
    QFrame *line_2;
    QFrame *line_13;
    QFrame *line_14;
    QFrame *line_15;
    QFrame *line_16;
    QFrame *line_26;
    QFrame *line_27;
    QFrame *line_28;
    QFrame *line_32;
    QPushButton *newgame;
    QPushButton *htp;
    QGraphicsView *gamewindow;
    QLabel *label;
    QLabel *cur_xolabel;
    QFrame *line_4;
    QFrame *line_6;
    QLabel *xscore;
    QLabel *oscore;
    QLabel *xscore_label;
    QLabel *oscore_label;
    QPushButton *reset_btn;

    void setupUi(QMainWindow *TicTacToe3x3x3)
    {
        if (TicTacToe3x3x3->objectName().isEmpty())
            TicTacToe3x3x3->setObjectName(QString::fromUtf8("TicTacToe3x3x3"));
        TicTacToe3x3x3->resize(1080, 856);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TicTacToe3x3x3->sizePolicy().hasHeightForWidth());
        TicTacToe3x3x3->setSizePolicy(sizePolicy);
        TicTacToe3x3x3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(TicTacToe3x3x3);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(82, 25, 31, 225));
        line->setStyleSheet(QString::fromUtf8("color: rgb(255, 195, 92);\n"
"background-color: rgb(255,255,255,0);"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(5);
        line->setMidLineWidth(0);
        line->setFrameShape(QFrame::VLine);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(25, 90, 225, 16));
        line_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 195, 92);\n"
"background-color: rgb(255,255,255,0);"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(5);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::HLine);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(25, 170, 225, 16));
        line_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 195, 92);\n"
"background-color: rgb(255,255,255,0);"));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setLineWidth(5);
        line_5->setMidLineWidth(0);
        line_5->setFrameShape(QFrame::HLine);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(171, 25, 16, 225));
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 195, 92);\n"
"background-color: rgb(255,255,255,0);"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(5);
        line_2->setMidLineWidth(0);
        line_2->setFrameShape(QFrame::VLine);
        line_13 = new QFrame(centralWidget);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(82, 305, 31, 225));
        line_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 195, 92);\n"
"background-color: rgb(255,255,255,0);"));
        line_13->setFrameShadow(QFrame::Plain);
        line_13->setLineWidth(5);
        line_13->setMidLineWidth(0);
        line_13->setFrameShape(QFrame::VLine);
        line_14 = new QFrame(centralWidget);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(171, 305, 16, 225));
        line_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 195, 92);\n"
"background-color: rgb(255,255,255,0);"));
        line_14->setFrameShadow(QFrame::Plain);
        line_14->setLineWidth(5);
        line_14->setMidLineWidth(0);
        line_14->setFrameShape(QFrame::VLine);
        line_15 = new QFrame(centralWidget);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(25, 370, 225, 16));
        line_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 195, 92);\n"
"background-color: rgb(255,255,255,0);"));
        line_15->setFrameShadow(QFrame::Plain);
        line_15->setLineWidth(5);
        line_15->setMidLineWidth(0);
        line_15->setFrameShape(QFrame::HLine);
        line_16 = new QFrame(centralWidget);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(25, 450, 225, 16));
        line_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 195, 92);\n"
"background-color: rgb(255,255,255,0);"));
        line_16->setFrameShadow(QFrame::Plain);
        line_16->setLineWidth(5);
        line_16->setMidLineWidth(0);
        line_16->setFrameShape(QFrame::HLine);
        line_26 = new QFrame(centralWidget);
        line_26->setObjectName(QString::fromUtf8("line_26"));
        line_26->setGeometry(QRect(25, 660, 225, 16));
        line_26->setStyleSheet(QString::fromUtf8("color: rgb(255, 195, 92);\n"
"background-color: rgb(255,255,255,0);"));
        line_26->setFrameShadow(QFrame::Plain);
        line_26->setLineWidth(5);
        line_26->setMidLineWidth(0);
        line_26->setFrameShape(QFrame::HLine);
        line_27 = new QFrame(centralWidget);
        line_27->setObjectName(QString::fromUtf8("line_27"));
        line_27->setGeometry(QRect(82, 595, 31, 225));
        line_27->setStyleSheet(QString::fromUtf8("color: rgb(255, 195, 92);\n"
"background-color: rgb(255,255,255,0);"));
        line_27->setFrameShadow(QFrame::Plain);
        line_27->setLineWidth(5);
        line_27->setMidLineWidth(0);
        line_27->setFrameShape(QFrame::VLine);
        line_28 = new QFrame(centralWidget);
        line_28->setObjectName(QString::fromUtf8("line_28"));
        line_28->setGeometry(QRect(171, 595, 16, 225));
        line_28->setStyleSheet(QString::fromUtf8("color: rgb(255, 195, 92);\n"
"background-color: rgb(255,255,255,0);"));
        line_28->setFrameShadow(QFrame::Plain);
        line_28->setLineWidth(5);
        line_28->setMidLineWidth(0);
        line_28->setFrameShape(QFrame::VLine);
        line_32 = new QFrame(centralWidget);
        line_32->setObjectName(QString::fromUtf8("line_32"));
        line_32->setGeometry(QRect(25, 740, 225, 16));
        line_32->setStyleSheet(QString::fromUtf8("color: rgb(255, 195, 92);\n"
"background-color: rgb(255,255,255,0);"));
        line_32->setFrameShadow(QFrame::Plain);
        line_32->setLineWidth(5);
        line_32->setMidLineWidth(0);
        line_32->setFrameShape(QFrame::HLine);
        newgame = new QPushButton(centralWidget);
        newgame->setObjectName(QString::fromUtf8("newgame"));
        newgame->setGeometry(QRect(290, 750, 161, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Kristen ITC"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        newgame->setFont(font);
        newgame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 195, 92);\n"
"border-radius: 20px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #FFC35C\n"
"        );\n"
"    padding: 5px;"));
        htp = new QPushButton(centralWidget);
        htp->setObjectName(QString::fromUtf8("htp"));
        htp->setGeometry(QRect(460, 750, 151, 71));
        htp->setFont(font);
        htp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 195, 92);\n"
"border-radius: 20px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #FFC35C\n"
"        );\n"
"    padding: 5px;"));
        gamewindow = new QGraphicsView(centralWidget);
        gamewindow->setObjectName(QString::fromUtf8("gamewindow"));
        gamewindow->setGeometry(QRect(330, 140, 391, 610));
        gamewindow->setFrameShape(QFrame::NoFrame);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 30, 371, 81));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Kristen ITC"));
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font1);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        cur_xolabel = new QLabel(centralWidget);
        cur_xolabel->setObjectName(QString::fromUtf8("cur_xolabel"));
        cur_xolabel->setGeometry(QRect(650, 10, 101, 101));
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(800, 90, 231, 20));
        line_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 195, 92);\n"
"background-color: rgb(255,255,255,0);"));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(5);
        line_4->setMidLineWidth(0);
        line_4->setFrameShape(QFrame::HLine);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(910, 30, 16, 361));
        line_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 195, 92);\n"
"background-color: rgb(255,255,255,0);"));
        line_6->setFrameShadow(QFrame::Plain);
        line_6->setLineWidth(5);
        line_6->setMidLineWidth(0);
        line_6->setFrameShape(QFrame::VLine);
        xscore = new QLabel(centralWidget);
        xscore->setObjectName(QString::fromUtf8("xscore"));
        xscore->setGeometry(QRect(820, 10, 75, 75));
        oscore = new QLabel(centralWidget);
        oscore->setObjectName(QString::fromUtf8("oscore"));
        oscore->setGeometry(QRect(940, 10, 75, 75));
        xscore_label = new QLabel(centralWidget);
        xscore_label->setObjectName(QString::fromUtf8("xscore_label"));
        xscore_label->setGeometry(QRect(810, 120, 91, 81));
        sizePolicy1.setHeightForWidth(xscore_label->sizePolicy().hasHeightForWidth());
        xscore_label->setSizePolicy(sizePolicy1);
        xscore_label->setFont(font1);
        xscore_label->setAlignment(Qt::AlignCenter);
        oscore_label = new QLabel(centralWidget);
        oscore_label->setObjectName(QString::fromUtf8("oscore_label"));
        oscore_label->setGeometry(QRect(940, 120, 81, 81));
        sizePolicy1.setHeightForWidth(oscore_label->sizePolicy().hasHeightForWidth());
        oscore_label->setSizePolicy(sizePolicy1);
        oscore_label->setFont(font1);
        oscore_label->setAlignment(Qt::AlignCenter);
        reset_btn = new QPushButton(centralWidget);
        reset_btn->setObjectName(QString::fromUtf8("reset_btn"));
        reset_btn->setGeometry(QRect(620, 750, 161, 71));
        reset_btn->setFont(font);
        reset_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 195, 92);\n"
"border-radius: 20px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #FFC35C\n"
"        );\n"
"    padding: 5px;"));
        TicTacToe3x3x3->setCentralWidget(centralWidget);
        line_3->raise();
        line_5->raise();
        line_2->raise();
        line->raise();
        line_13->raise();
        line_14->raise();
        line_15->raise();
        line_16->raise();
        line_26->raise();
        line_27->raise();
        line_28->raise();
        line_32->raise();
        newgame->raise();
        htp->raise();
        gamewindow->raise();
        label->raise();
        cur_xolabel->raise();
        line_4->raise();
        line_6->raise();
        xscore->raise();
        oscore->raise();
        xscore_label->raise();
        oscore_label->raise();
        reset_btn->raise();

        retranslateUi(TicTacToe3x3x3);

        QMetaObject::connectSlotsByName(TicTacToe3x3x3);
    } // setupUi

    void retranslateUi(QMainWindow *TicTacToe3x3x3)
    {
        TicTacToe3x3x3->setWindowTitle(QApplication::translate("TicTacToe3x3x3", "ttt3D", nullptr));
        newgame->setText(QApplication::translate("TicTacToe3x3x3", "New Game", nullptr));
        htp->setText(QApplication::translate("TicTacToe3x3x3", "How to Play", nullptr));
        label->setText(QApplication::translate("TicTacToe3x3x3", "Tic Tac Toe", nullptr));
        cur_xolabel->setText(QString());
        xscore->setText(QString());
        oscore->setText(QString());
        xscore_label->setText(QApplication::translate("TicTacToe3x3x3", "0", nullptr));
        oscore_label->setText(QApplication::translate("TicTacToe3x3x3", "0", nullptr));
        reset_btn->setText(QApplication::translate("TicTacToe3x3x3", "Reset Score", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicTacToe3x3x3: public Ui_TicTacToe3x3x3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICTACTOE3X3X3_H
