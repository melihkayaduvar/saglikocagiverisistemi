#include "istenentetkik.h"

ISTENENTETKIK::ISTENENTETKIK():IdliSinif(),_istekTarihi{},_sonucTarihi{},_sonuc{""},_yorum{""},_durum{} {}
ISTENENTETKIK::ISTENENTETKIK(const ISTENENTETKIK& kaynak):IdliSinif(kaynak),_istekTarihi{kaynak._istekTarihi}
    ,_sonucTarihi{kaynak._sonucTarihi},_sonuc{kaynak._sonuc},_yorum{kaynak._yorum},_durum{kaynak._durum} {}

QDate ISTENENTETKIK::istekTarihi() const
{
    return _istekTarihi;
}

void ISTENENTETKIK::setIstekTarihi(const QDate &newIstekTarihi)
{
    _istekTarihi = newIstekTarihi;
}

QDate ISTENENTETKIK::sonucTarihi() const
{
    return _sonucTarihi;
}

void ISTENENTETKIK::setSonucTarihi(const QDate &newSonucTarihi)
{
    _sonucTarihi = newSonucTarihi;
}

QString ISTENENTETKIK::sonuc() const
{
    return _sonuc;
}

void ISTENENTETKIK::setSonuc(const QString &newSonuc)
{
    _sonuc = newSonuc;
}

QString ISTENENTETKIK::yorum() const
{
    return _yorum;
}

void ISTENENTETKIK::setYorum(const QString &newYorum)
{
    _yorum = newYorum;
}

TetkikDurumuEnum ISTENENTETKIK::durum() const
{
    return _durum;
}

void ISTENENTETKIK::setDurum(TetkikDurumuEnum newDurum)
{
    _durum = newDurum;
}
