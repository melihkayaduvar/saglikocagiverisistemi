#include "ziyaret.h"

ZIYARET::ZIYARET():IdliSinif{},_tarihsaat{},_sikayet{""},_tani{""},_tedavinotlari{""} {}
ZIYARET::ZIYARET(const ZIYARET& kaynak):IdliSinif{kaynak},_tarihsaat{kaynak._tarihsaat},_sikayet{kaynak._sikayet}
    ,_tani{kaynak._tani},_tedavinotlari{kaynak._tedavinotlari} {}

QDate ZIYARET::tarihsaat() const
{
    return _tarihsaat;
}

void ZIYARET::setTarihsaat(const QDate &newTarihsaat)
{
    _tarihsaat = newTarihsaat;
}

QString ZIYARET::sikayet() const
{
    return _sikayet;
}

void ZIYARET::setSikayet(const QString &newSikayet)
{
    _sikayet = newSikayet;
}

QString ZIYARET::tani() const
{
    return _tani;
}

void ZIYARET::setTani(const QString &newTani)
{
    _tani = newTani;
}

QString ZIYARET::tedavinotlari() const
{
    return _tedavinotlari;
}

void ZIYARET::setTedavinotlari(const QString &newTedavinotlari)
{
    _tedavinotlari = newTedavinotlari;
}

DOKTOR *ZIYARET::doktorid() const
{
    return _doktorid;
}

void ZIYARET::setDoktorid(DOKTOR *newDoktorid)
{
    _doktorid = newDoktorid;
}

HASTA *ZIYARET::hastaid() const
{
    return _hastaid;
}

void ZIYARET::setHastaid(HASTA *newHastaid)
{
    _hastaid = newHastaid;
}

QList<BULGU *> ZIYARET::bulgular() const
{
    return _bulgular;
}

void ZIYARET::setBulgular(const QList<BULGU *> &newBulgular)
{
    _bulgular = newBulgular;
}

QList<ISTENENTETKIK *> ZIYARET::istenentetkikler() const
{
    return _istenentetkikler;
}

void ZIYARET::setIstenentetkikler(const QList<ISTENENTETKIK *> &newIstenentetkikler)
{
    _istenentetkikler = newIstenentetkikler;
}

RECETE *ZIYARET::receteid() const
{
    return _receteid;
}

void ZIYARET::setReceteid(RECETE *newReceteid)
{
    _receteid = newReceteid;
}
