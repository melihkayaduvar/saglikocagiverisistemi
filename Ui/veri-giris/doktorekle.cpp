#include "doktorekle.h"
#include "ui/veri-giris/ui_doktorekle.h"

doktorekle::doktorekle(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::doktorekle)
{
    ui->setupUi(this);
}

doktorekle::~doktorekle()
{
    delete ui;
}

std::shared_ptr<DOKTOR> doktorekle::getVeri() const
{
    veri->setadi(ui->leAdi->text());
    veri->setsoyadi(ui->leSoyadi->text());
    veri->settelefon(ui->leTel->text());
    veri->setdiplomano(ui->leDipno->text());
    veri->setuzmanlikAlani(ui->leUzmalani->text());

    return veri;
}

void doktorekle::setVeri(const std::shared_ptr<DOKTOR> &newVeri)
{
    veri = newVeri;

    ui->leAdi->setText(veri->adi());
    ui->leSoyadi->setText(veri->soyadi());
    ui->leTel->setText(veri->telefon());
    ui->leDipno->setText(veri->diplomaNo());
    ui->leUzmalani->setText(veri->uzmanlikAlani());
}
