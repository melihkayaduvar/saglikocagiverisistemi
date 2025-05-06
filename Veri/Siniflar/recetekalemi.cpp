#include "recetekalemi.h"

RECETEKALEMI::RECETEKALEMI():IdliSinif{},_kullanimSekli{""},_doz{""},_periyot{""},_adet{0} {}
RECETEKALEMI::RECETEKALEMI(const RECETEKALEMI& kaynak):IdliSinif{kaynak},_kullanimSekli{kaynak._kullanimSekli}
    ,_doz{kaynak._doz},_periyot{kaynak._periyot},_adet{kaynak._adet} {}

QString &RECETEKALEMI::kullanimSekli()
{
    return _kullanimSekli;
}

void RECETEKALEMI::setKullanimSekli(const QString &newKullanimSekli)
{
    _kullanimSekli = newKullanimSekli;
}

QString &RECETEKALEMI::doz()
{
    return _doz;
}

void RECETEKALEMI::setDoz(const QString &newDoz)
{
    _doz = newDoz;
}

QString &RECETEKALEMI::periyot()
{
    return _periyot;
}

void RECETEKALEMI::setPeriyot(const QString &newPeriyot)
{
    _periyot = newPeriyot;
}

quint8 RECETEKALEMI::adet() const
{
    return _adet;
}

void RECETEKALEMI::setAdet(quint8 newAdet)
{
    _adet = newAdet;
}

/*quint32 RECETEKALEMI::ilacid() const
{
    return _ilacid;
}

void RECETEKALEMI::setIlacID(quint32 newIlacID)
{
    _ilacid = newIlacID;
}*/

/*QDataStream &operator<<(QDataStream &out, const RECETEKALEMI &z)
{
    out << z._kullanimSekli
        << z._doz
        << z._periyot
        << z._adet
        << z._ilacid;

    return out;
}

QDataStream &operator>>(QDataStream &in, RECETEKALEMI &z)
{
    in >> z._kullanimSekli
        >> z._doz
        >> z._periyot
        >> z._adet
        >> z._ilacid;


    return in;
}*/
