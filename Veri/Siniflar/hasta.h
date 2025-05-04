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

    QVector<quint32> ziyaretIdleri() const;
    void setZiyaretIdleri(const QVector<quint32>& yeniListe);

private:
    QString _tckimlik;
    QDate _dogumTarihi;
    CinsiyetEnum _cinsiyet;
    QString _adres;
    QString _kanGrubu;
    QStringList _alerjiler;
    QStringList _kronikHastaliklar;

    QVector<quint32> _ziyaretIdleri;
};
