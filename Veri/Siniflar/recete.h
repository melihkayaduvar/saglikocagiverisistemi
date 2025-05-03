#pragma once

#include "idlisinif.h"

class RECETE:public IdliSinif
{
private:
    RECETE();
    RECETE(const RECETE& kaynak);
public:

    QDate tarih() const;
    void setTarih(const QDate &newTarih);
    quint32 gecerlilikSuresi() const;
    void setGecerlilikSuresi(quint32 newGecerlilikSuresi);

private:
    QDate _tarih;
    quint32 _gecerlilikSuresi;
};
