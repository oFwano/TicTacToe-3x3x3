#include "howtoplay.h"
#include "ui_howtoplay.h"

howtoplay::howtoplay(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::howtoplay)
{
    ui->setupUi(this);
    setWindowTitle("How to Play");
}

howtoplay::~howtoplay()
{
    delete ui;
}
