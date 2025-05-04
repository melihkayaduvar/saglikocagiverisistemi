#pragma once

#include "idlisinif.h"

class RECETEKALEMI;

class RECETE:public IdliSinif
{
private:
    RECETE();
    RECETE(const RECETE& kaynak);
    template <class T> friend class TABLO;
public:

    QDate tarih() const;
    void setTarih(const QDate &newTarih);
    quint32 gecerlilikSuresi() const;
    void setGecerlilikSuresi(quint32 newGecerlilikSuresi);

    QList<RECETEKALEMI *> kalemler() const;
    void setKalemler(const QList<RECETEKALEMI *> &newKalemler);

private:
    QDate _tarih;
    quint32 _gecerlilikSuresi;

    QVector<RECETEKALEMI*> _kalemler;
};
