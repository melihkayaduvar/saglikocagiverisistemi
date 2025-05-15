#include "anapencere.h"
#include "ui_anapencere.h"
#include "veri-giris/doktorekle.h"

#include "../Veri/veritabani.h"

#include <QMessageBox>
#include <QCloseEvent>

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

void anapencere::on_action_k_triggered()
{
    close();
}

void anapencere::closeEvent(QCloseEvent *event)
{
    auto cevap = QMessageBox::question(this,
                                       tr("Çıkış Onayı"),
                                       tr("Çıkış Yapmak İstediğinize Eminmisiniz?"));
    if(cevap == QMessageBox::No){
        event->ignore();
    }
}

void anapencere::on_actiondoktorekle_triggered()
{
    doktorekle doktorekleform;
    auto doktor = VERITABANI::vt().doktorlar().olustur();
    doktorekleform.setVeri(doktor);

    auto cevap = doktorekleform.exec();
    if(cevap==QDialog::Accepted){
        doktor = doktorekleform.getVeri();
        VERITABANI::vt().doktorlar().ekle(doktor);
        QMessageBox::information(this,
                                 tr("Bilgilendirme"),
                                 tr("%1 %2 adlı doktor eklendi.").arg(doktor->adi(), doktor->soyadi()));
    }
}

