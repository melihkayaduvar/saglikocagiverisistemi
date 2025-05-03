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
