#pragma once

#include "Araclar/TABLO_TANIMLARI.h"

//Tekil Tasarım şablonu uygulama
class VERITABANI
{
    //Adım 1. ilklendirici private
private:
    VERITABANI();
    //Adım 2. public static bir fonksiyon eklenir.
public:
    static VERITABANI& taKendisi();
    //Adım 3. Cpp de

    DoktorTablosu& doktorlar();
    HastaTablosu& hastalar();
    ZiyaretTablosu& ziyaretler();
    BulguTablosu& bulgular();
    IstenenTetkikTablosu& istenentetkikler();
    ReceteTablosu& receteler();
    TetkikTablosu& tetkikler();
    IlacTablosu& ilaclar();
    ReceteKalemiTablosu& recetekalemleri();

    void kaydet();
    void geriyukle();

private:
    DoktorTablosu tblDoktor;
    HastaTablosu tblHasta;
    ZiyaretTablosu tblZiyaret;
    BulguTablosu tblBulgu;
    IstenenTetkikTablosu tblIstenenTetkik;
    ReceteTablosu tblRecete;
    TetkikTablosu tblTetkik;
    IlacTablosu tblIlac;
    ReceteKalemiTablosu tblReceteKalemi;
};
