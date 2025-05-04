#include <QCoreApplication>
#include "Veri/veritabani.h"
int main(int argc, char *argv[])
{
    auto a=VERITABANI::taKendisi().doktorlar().olustur();
    a->setadi("ahmet");
    a->setsoyadi("cengiz");
    a->settelefon("54845486169");
    a->setuzmanlikAlani("Dr.");
    VERITABANI::taKendisi().doktorlar().ekle(a);
    auto b=VERITABANI::taKendisi().doktorlar().olustur();
    b->setadi("Seyfi");
    b->setsoyadi("Hür");
    b->settelefon("54894554925");
    b->setuzmanlikAlani("Prof.Dr.");
    VERITABANI::taKendisi().doktorlar().ekle(b);

    auto z1 = VERITABANI::taKendisi().ziyaretler().olustur();
    z1->setTarihsaat(QDate(2025, 2, 5));
    z1->setSikayet("Baş ağrısı");
    z1->setTani("Migren");
    z1->setTedavinotlari("İlaç verildi");
    VERITABANI::taKendisi().ziyaretler().ekle(z1);

    auto z2 = VERITABANI::taKendisi().ziyaretler().olustur();
    z2->setTarihsaat(QDate(2025, 4, 15));
    z2->setSikayet("Mide bulantısı");
    z2->setTani("Gıda zehirlenmesi");
    z2->setTedavinotlari("Serum ve diyet önerildi");
    VERITABANI::taKendisi().ziyaretler().ekle(z2);

    auto c=VERITABANI::taKendisi().hastalar().olustur();
    c->setadi("Timuçin");
    c->setsoyadi("Sert");
    c->settelefon("5489465464");
    c->setTckimlik("12345678912");
    c->setAdres("ASD Mah. .....");
    c->setCinsiyet(CinsiyetEnum::Erkek);
    c->setDogumTarihi(QDate(2000,1,1));
    c->setKanGrubu("A+");
    c->setAlerjiler(QStringList()<<"Polen"<<"Penisilin");
    c->setKronikHastaliklar(QStringList()<<"Diyabet"<<"Astım");

    QVector<quint32> ziyaretIdListesi;
    ziyaretIdListesi.append(z1->id());
    ziyaretIdListesi.append(z2->id());
    c->setZiyaretIdleri(ziyaretIdListesi);
    VERITABANI::taKendisi().hastalar().ekle(c);



    VERITABANI::taKendisi().kaydet();

    return 0;
}
