#include "istenentetkik.h"

ISTENENTETKIK::ISTENENTETKIK():IdliSinif(),_istekTarihi{},_sonucTarihi{},_sonuc{""},_yorum{""},_durum{} {}
ISTENENTETKIK::ISTENENTETKIK(const ISTENENTETKIK& kaynak):IdliSinif(kaynak),_istekTarihi{kaynak._istekTarihi}
    ,_sonucTarihi{kaynak._sonucTarihi},_sonuc{kaynak._sonuc},_yorum{kaynak._yorum},_durum{kaynak._durum} {}

QDateTime &ISTENENTETKIK::istekTarihi()
{
    return _istekTarihi;
}

void ISTENENTETKIK::setIstekTarihi(const QDateTime &newIstekTarihi)
{
    _istekTarihi = newIstekTarihi;
}

QDateTime &ISTENENTETKIK::sonucTarihi()
{
    return _sonucTarihi;
}

void ISTENENTETKIK::setSonucTarihi(const QDateTime &newSonucTarihi)
{
    _sonucTarihi = newSonucTarihi;
}

QString &ISTENENTETKIK::sonuc()
{
    return _sonuc;
}

void ISTENENTETKIK::setSonuc(const QString &newSonuc)
{
    _sonuc = newSonuc;
}

QString &ISTENENTETKIK::yorum()
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

/*QDataStream &operator<<(QDataStream &out, const ISTENENTETKIK &z)
{
    out << z._istekTarihi
        << z._sonucTarihi
        << z._sonuc
        << z._yorum
        << z._durum;

    return out;
}

QDataStream &operator>>(QDataStream &in, ISTENENTETKIK &z)
{
    in >> z._istekTarihi
        >> z._sonucTarihi
        >> z._sonuc
        >> z._yorum
        >> z._durum;


    return in;
}*/

