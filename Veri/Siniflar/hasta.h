#pragma once

#include "insan.h"
#include "../Araclar/enums.h"

class ZIYARET;

class HASTA:public Insan{
private:
    HASTA();
    HASTA(const HASTA& kaynak);
    template <class T> friend class TABLO;
public:
    QString tckimlik() const;
    void setTckimlik(const QString &newTckimlik);

    QDate dogumTarihi() const;
    void setDogumTarihi(const QDate &newDogumTarihi);

    QString adres() const;
    void setAdres(const QString &newAdres);

    QString kanGrubu() const;
    void setKanGrubu(const QString &newKanGrubu);

    QStringList alerjiler() const;
    void setAlerjiler(const QStringList &newAlerjiler);

    QStringList kronikHastaliklar() const;
    void setKronikHastaliklar(const QStringList &newKronikHastaliklar);

    CinsiyetEnum cinsiyet() const;
    void setCinsiyet(CinsiyetEnum newCinsiyet);

    QList<ZIYARET *> ziyaretler() const;
    void setZiyaretler(const QList<ZIYARET *> &newZiyaretler);

private:
    QString _tckimlik;
    QDate _dogumTarihi;
    CinsiyetEnum _cinsiyet;
    QString _adres;
    QString _kanGrubu;
    QStringList _alerjiler;
    QStringList _kronikHastaliklar;

    QList<ZIYARET*> _ziyaretler;
};
