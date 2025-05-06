#pragma once

#include "idlisinif.h"

class RECETEKALEMI:public IdliSinif
{
private:
    RECETEKALEMI();
    RECETEKALEMI(const RECETEKALEMI& kaynak);
    template <class T> friend class TABLO;
    /*friend QDataStream &operator<<(QDataStream &, const RECETEKALEMI &);
    friend QDataStream &operator>>(QDataStream &, RECETEKALEMI &);*/
public:

    QString &kullanimSekli() ;
    void setKullanimSekli(const QString &newKullanimSekli);

    QString &doz() ;
    void setDoz(const QString &newDoz);

    QString &periyot() ;
    void setPeriyot(const QString &newPeriyot);

    quint8 adet() const;
    void setAdet(quint8 newAdet);

    /*quint32 ilacid() const;
    void setIlacID(quint32 newIlacID);*/

private:
    QString _kullanimSekli;
    QString _doz;
    QString _periyot;
    quint8 _adet;

    /*quint32 _ilacid;*/
};
