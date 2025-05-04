#include "veritabani.h"

#include <QStandardPaths>
#include <QDir>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QDataStream>

VERITABANI::VERITABANI() {}

VERITABANI &VERITABANI::taKendisi()
{
    static VERITABANI nesne; //Adım 3 statik bir nesne olusturulur
    return nesne;           //            ve döndürülür
}

DoktorTablosu &VERITABANI::doktorlar()
{
    return tblDoktor;
}

HastaTablosu &VERITABANI::hastalar()
{
    return tblHasta;
}

ZiyaretTablosu &VERITABANI::ziyaretler()
{
    return tblZiyaret;
}

BulguTablosu &VERITABANI::bulgular()
{
    return tblBulgu;
}

IstenenTetkikTablosu &VERITABANI::istenentetkikler()
{
    return tblIstenenTetkik;
}

ReceteTablosu &VERITABANI::receteler()
{
    return tblRecete;
}

TetkikTablosu &VERITABANI::tetkikler()
{
    return tblTetkik;
}

IlacTablosu &VERITABANI::ilaclar()
{
    return tblIlac;
}

ReceteKalemiTablosu &VERITABANI::recetekalemleri()
{
    return tblReceteKalemi;
}

void VERITABANI::kaydet()
{
    //Kaydetme için dosya yolu seçimi
    //1. Yol:Sabit Dosya yolu
    //      +kodlaması kolay
    //      -Bilgisayardan bağımsız olmalı

    //2. Yol:Kullanıcıya sormak
    //      +Bilgisayar bağımsızlığı
    //      -Kullanıcıya Güven!!

    //2. Yol
    //QString dosyaYolu2=QFileDialog::getSaveFileName();
    //QFile veritabaniDosyasi2(dosyaYolu2);

    //1. Yol
    QString dosyaYolu=QStandardPaths::writableLocation(
        QStandardPaths::AppDataLocation);
    qDebug() << dosyaYolu;
    QDir appDataDir(dosyaYolu);
    if(!appDataDir.exists("AileSaglikOcagi")){
        appDataDir.mkdir("AileSaglikOcagi");
    }
    QDir veriKlasoru(dosyaYolu+"/AileSaglikOcagi");
    QFile veritabaniDosyasi(veriKlasoru.filePath("database.aso"));

    if(veritabaniDosyasi.open(QIODevice::WriteOnly)){
        QDataStream ts(&veritabaniDosyasi);
        // doktorlar
        ts<< tblDoktor._sonid;
        ts << tblDoktor._elemanlar.size();
        for (auto i = 0; i < tblDoktor._elemanlar.size(); i++) {
            ts <<tblDoktor._elemanlar[i]->id();
            ts <<tblDoktor._elemanlar[i]->adi();
            ts <<tblDoktor._elemanlar[i]->soyadi();
            ts <<tblDoktor._elemanlar[i]->telefon();
            ts <<tblDoktor._elemanlar[i]->uzmanlikAlani();
        };
        // Hastalar
        ts<< tblHasta._sonid;
        ts << tblHasta._elemanlar.size();
        for (auto i = 0; i < tblHasta._elemanlar.size(); i++) {
            ts <<tblHasta._elemanlar[i]->id();
            ts <<tblHasta._elemanlar[i]->adi();
            ts <<tblHasta._elemanlar[i]->soyadi();
            ts <<tblHasta._elemanlar[i]->telefon();
            ts <<tblHasta._elemanlar[i]->dogumTarihi();
            ts <<tblHasta._elemanlar[i]->cinsiyet();
            ts <<tblHasta._elemanlar[i]->adres();
            ts <<tblHasta._elemanlar[i]->kanGrubu();
            ts <<tblHasta._elemanlar[i]->alerjiler();
            ts <<tblHasta._elemanlar[i]->kronikHastaliklar();
            QVector<quint32> ziyaretListesi = tblHasta._elemanlar[i]->ziyaretIdleri();
            ts << ziyaretListesi.size();
            for (quint32 z : std::as_const(ziyaretListesi)) {
                if (z)
                    ts << z;
            }
        };
        // Bulgular
        ts<<tblBulgu._sonid;
        ts<<tblBulgu._elemanlar.size();
        for(auto i =0;i<tblBulgu._elemanlar.size();i++){
            ts<<tblBulgu._elemanlar[i]->id();
            ts<<tblBulgu._elemanlar[i]->aciklama();
            ts<<tblBulgu._elemanlar[i]->tip();
            ts<<tblBulgu._elemanlar[i]->kaydedilmeZamani();
        }
        // Istenen Tetkik
        ts<<tblIstenenTetkik._sonid;
        ts<<tblIstenenTetkik._elemanlar.size();
        for(auto i =0;i<tblIstenenTetkik._elemanlar.size();i++){
            ts<<tblIstenenTetkik._elemanlar[i]->id();
            ts<<tblIstenenTetkik._elemanlar[i]->istekTarihi();
            ts<<tblIstenenTetkik._elemanlar[i]->sonucTarihi();
            ts<<tblIstenenTetkik._elemanlar[i]->sonuc();
            ts<<tblIstenenTetkik._elemanlar[i]->yorum();
            ts<<tblIstenenTetkik._elemanlar[i]->durum();
        }
        // Zıyaret
        ts<<tblZiyaret._sonid;
        ts<<tblZiyaret._elemanlar.size();
        for(auto i =0;i<tblZiyaret._elemanlar.size();i++){
            ts<<tblZiyaret._elemanlar[i]->id();
            ts<<tblZiyaret._elemanlar[i]->tarihsaat();
            ts<<tblZiyaret._elemanlar[i]->sikayet();
            ts<<tblZiyaret._elemanlar[i]->tani();
            ts<<tblZiyaret._elemanlar[i]->tedavinotlari();
            ts<<tblZiyaret._elemanlar[i]->doktorid();
            ts<<tblZiyaret._elemanlar[i]->hastaid();
            ts<<tblZiyaret._elemanlar[i]->receteid();
            QVector<BULGU*> bulguListesi = tblZiyaret._elemanlar[i]->bulgular();
            ts << bulguListesi.size();
            for (BULGU* z : std::as_const(bulguListesi)) {
                if (z)
                    ts << *z;
            }
            QVector<ISTENENTETKIK*> istenentetkikListesi = tblZiyaret._elemanlar[i]->istenentetkikler();
            ts << istenentetkikListesi.size();
            for (ISTENENTETKIK* z : std::as_const(istenentetkikListesi)) {
                if (z)
                    ts << *z;
            }

        }
        // Receteler
        ts<<tblRecete._sonid;
        ts<<tblRecete._elemanlar.size();
        for(auto i =0;i<tblRecete._elemanlar.size();i++){
            ts<<tblRecete._elemanlar[i]->id();
            ts<<tblRecete._elemanlar[i]->tarih();
            ts<<tblRecete._elemanlar[i]->gecerlilikSuresi();
            QVector<RECETEKALEMI*> recetekalemiListesi = tblRecete._elemanlar[i]->kalemler();
            ts << recetekalemiListesi.size();
            for (RECETEKALEMI* z : std::as_const(recetekalemiListesi)) {
                if (z)
                    ts << *z;
            }
        }
        // Tetkik
        ts<<tblTetkik._sonid;
        ts<<tblTetkik._elemanlar.size();
        for(auto i =0;i<tblTetkik._elemanlar.size();i++){
            ts<<tblTetkik._elemanlar[i]->id();
            ts<<tblTetkik._elemanlar[i]->ad();
            ts<<tblTetkik._elemanlar[i]->aciklama();
            ts<<tblTetkik._elemanlar[i]->normalDegerler();
        }
        // Ilac
        ts<<tblIlac._sonid;
        ts<<tblIlac._elemanlar.size();
        for(auto i =0;i<tblIlac._elemanlar.size();i++){
            ts<<tblIlac._elemanlar[i]->id();
            ts<<tblIlac._elemanlar[i]->barkod();
            ts<<tblIlac._elemanlar[i]->ad();
            ts<<tblIlac._elemanlar[i]->etkenMadde();
            ts<<tblIlac._elemanlar[i]->form();
            ts<<tblIlac._elemanlar[i]->dozajBilgisi();
        }
        // ReceteKalemi
        ts<<tblReceteKalemi._sonid;
        ts<<tblReceteKalemi._elemanlar.size();
        for(auto i =0;i<tblReceteKalemi._elemanlar.size();i++){
            ts<<tblReceteKalemi._elemanlar[i]->id();
            ts<<tblReceteKalemi._elemanlar[i]->kullanimSekli();
            ts<<tblReceteKalemi._elemanlar[i]->doz();
            ts<<tblReceteKalemi._elemanlar[i]->periyot();
            ts<<tblReceteKalemi._elemanlar[i]->adet();
            ts<<tblReceteKalemi._elemanlar[i]->ilacid();
        }
    }

}

void VERITABANI::geriyukle()
{

}


