#include <QCoreApplication>
#include <QMainWindow>
#include "Veri/ui_anapencere.h"
#include "Veri/veritabani.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);  // Qt uygulamasını başlat
    VERITABANI::vt().geriyukle();
    // UI'yi başlat
    QMainWindow anapencere;
    Ui::anapencere ui;  // UI sınıfını başlat
    ui.setupUi(&anapencere);  // Arayüzü QMainWindow'a yerleştir

    anapencere.show();  // Arayüzü ekranda göster
    auto sonuc= app.exec();  // Uygulama döngüsünü başlat
    VERITABANI::vt().kaydet();
    return sonuc;
    /*auto d1=VERITABANI::vt().doktorlar().olustur();
    d1->setadi("ahmet");
    d1->setsoyadi("cengiz");
    d1->settelefon("54845486169");
    d1->setuzmanlikAlani("Dr.");
    VERITABANI::vt().doktorlar().ekle(d1);
    auto d2=VERITABANI::vt().doktorlar().olustur();
    d2->setadi("Seyfi");
    d2->setsoyadi("Hür");
    d2->settelefon("54894554925");
    d2->setuzmanlikAlani("Prof.Dr.");
    VERITABANI::vt().doktorlar().ekle(d2);

    auto z1 = VERITABANI::vt().ziyaretler().olustur();
    QDate date(2020,2,5);
    QTime time(12,50);
    QDateTime datetime(date,time);
    z1->setTarihsaat(datetime);
    z1->setSikayet("Baş ağrısı");
    z1->setTani("Migren");
    z1->setTedavinotlari("İlaç verildi");
    VERITABANI::vt().ziyaretler().ekle(z1);

    auto z2 = VERITABANI::vt().ziyaretler().olustur();
    z2->setTarihsaat(datetime);
    z2->setSikayet("Mide bulantısı");
    z2->setTani("Gıda zehirlenmesi");
    z2->setTedavinotlari("Serum ve diyet önerildi");
    VERITABANI::vt().ziyaretler().ekle(z2);

    auto h1=VERITABANI::vt().hastalar().olustur();
    h1->setadi("Timuçin");
    h1->setsoyadi("Sert");
    h1->settelefon("5489465464");
    h1->setTckimlik("12345678912");
    h1->setAdres("ASD Mah. .....");
    h1->setCinsiyet(CinsiyetEnum::ERKEK);
    h1->setDogumTarihi(QDate(2000,1,1));
    h1->setKanGrubu("A+");
    h1->setAlerjiler(QStringList()<<"Polen"<<"Penisilin");
    h1->setKronikHastaliklar(QStringList()<<"Diyabet"<<"Astım");*/
    /*QVector<quint32> ziyaretIdListesi;
    ziyaretIdListesi.append(z1->id());
    ziyaretIdListesi.append(z2->id());
    c->setZiyaretIdleri(ziyaretIdListesi);*/
    /*VERITABANI::vt().hastalar().ekle(h1);


    VERITABANI::vt().kaydet();*/

    //return 0;
}
