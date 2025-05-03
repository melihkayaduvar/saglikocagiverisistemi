#pragma once

#include "idlisinif.h"
#include "ilac.h"

class RECETEKALEMI:public IdliSinif
{
private:
    RECETEKALEMI();
    RECETEKALEMI(const RECETEKALEMI& kaynak);
    template <class T> friend class TABLO;
public:

    QString kullanimSekli() const;
    void setKullanimSekli(const QString &newKullanimSekli);
    QString doz() const;
    void setDoz(const QString &newDoz);
    QString periyot() const;
    void setPeriyot(const QString &newPeriyot);
    quint8 adet() const;
    void setAdet(quint8 newAdet);

    ILAC *ilac() const;
    void setIlac(ILAC *newIlac);

private:
    QString _kullanimSekli;
    QString _doz;
    QString _periyot;
    quint8 _adet;

    ILAC* _ilac;
};
