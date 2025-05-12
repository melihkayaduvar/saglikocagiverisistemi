#include "anapencere.h"
#include "ui_anapencere.h"

anapencere::anapencere(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::anapencere)
{
    ui->setupUi(this);
}

anapencere::~anapencere()
{
    delete ui;
}
