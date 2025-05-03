#pragma once

#include "idlisinif.h"

class RECETEKALEMI:public IdliSinif
{
private:
    RECETEKALEMI();
    RECETEKALEMI(const RECETEKALEMI &kaynak);
public:

    QString kullanimSekli() const;
    void setKullanimSekli(const QString &newKullanimSekli);
    QString doz() const;
    void setDoz(const QString &newDoz);
    QString periyot() const;
    void setPeriyot(const QString &newPeriyot);
    quint8 adet() const;
    void setAdet(quint8 newAdet);

private:
    QString _kullanimSekli;
    QString _doz;
    QString _periyot;
    quint8 _adet;
};
