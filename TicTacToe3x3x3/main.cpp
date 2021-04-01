#include "TicTacToe3x3x3.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TicTacToe3x3x3 w;
    w.show();

    return a.exec();
}
