#include "bulgu.h"

BULGU::BULGU():IdliSinif{},_aciklama{""},_tip{},_kaydedilmeZamani{} {}
BULGU::BULGU(const BULGU& kaynak):IdliSinif{kaynak},_aciklama{kaynak._aciklama},_tip{kaynak._tip},_kaydedilmeZamani{kaynak._kaydedilmeZamani} {}

QString &BULGU::aciklama()
{
    return _aciklama;
}

void BULGU::setAciklama(const QString &newAciklama)
{
    _aciklama = newAciklama;
}

BulguTipiEnum BULGU::tip() const
{
    return _tip;
}

void BULGU::setTip(BulguTipiEnum newTip)
{
    _tip = newTip;
}

QDateTime &BULGU::kaydedilmeZamani()
{
    return _kaydedilmeZamani;
}

void BULGU::setKaydedilmeZamani(const QDateTime &newKaydedilmeZamani)
{
    _kaydedilmeZamani = newKaydedilmeZamani;
}


/*QDataStream &operator<<(QDataStream &out, const BULGU &z)
{
    out << z._aciklama
        << z._tip
        << z._kaydedilmeZamani;

    return out;
}

QDataStream &operator>>(QDataStream &in, BULGU &z)
{
    in >> z._aciklama
        >> z._tip
        >> z._kaydedilmeZamani;


    return in;
}*/
