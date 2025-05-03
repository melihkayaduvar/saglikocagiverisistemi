#include "recetekalemi.h"

RECETEKALEMI::RECETEKALEMI():IdliSinif{},_kullanimSekli{""},_doz{""},_periyot{""},_adet{0} {}
RECETEKALEMI::RECETEKALEMI(const RECETEKALEMI& kaynak):IdliSinif{kaynak},_kullanimSekli{kaynak._kullanimSekli}
    ,_doz{kaynak._doz},_periyot{kaynak._periyot},_adet{kaynak._adet} {}

QString RECETEKALEMI::kullanimSekli() const
{
    return _kullanimSekli;
}

void RECETEKALEMI::setKullanimSekli(const QString &newKullanimSekli)
{
    _kullanimSekli = newKullanimSekli;
}

QString RECETEKALEMI::doz() const
{
    return _doz;
}

void RECETEKALEMI::setDoz(const QString &newDoz)
{
    _doz = newDoz;
}

QString RECETEKALEMI::periyot() const
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

ILAC *RECETEKALEMI::ilac() const
{
    return _ilac;
}

void RECETEKALEMI::setIlac(ILAC *newIlac)
{
    _ilac = newIlac;
}
