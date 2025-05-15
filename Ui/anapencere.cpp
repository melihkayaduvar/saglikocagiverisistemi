#include "anapencere.h"
#include "ui_anapencere.h"
#include "veri-giris/doktorekle.h"

#include "../Veri/veritabani.h"
#include "veri-giris/hastaekle.h"
#include "veri-liste/doktorliste.h"
#include "veri-liste/hastaliste.h"

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


void anapencere::on_actiondoktorlist_triggered()
{
    DoktorListe doktorlistefrm;
    doktorlistefrm.exec();
}


void anapencere::on_actionhastaekle_triggered()
{
    HastaEkle hastaekleform;
    auto hasta = VERITABANI::vt().hastalar().olustur();
    hastaekleform.setVeri(hasta);

    auto cevap = hastaekleform.exec();
    if(cevap==QDialog::Accepted){
        hasta=hastaekleform.getVeri();
        VERITABANI::vt().hastalar().ekle(hasta);
        QMessageBox::information(this,
                                 tr("Bilgilendirme"),
                                 tr("%1 %2 adlı hasta eklendi.").arg(hasta->adi(), hasta->soyadi()));
    }
}


void anapencere::on_actionhastalist_triggered()
{
    HastaListe hastalistefrm;
    hastalistefrm.exec();
}


void anapencere::on_actionziyaretekle_triggered()
{

}


void anapencere::on_actionziyaretlist_triggered()
{

}

