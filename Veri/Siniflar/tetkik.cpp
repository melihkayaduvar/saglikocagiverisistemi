#include "tetkik.h"

TETKIK::TETKIK():IdliSinif{},_ad{""},_aciklama{""},_normalDegerler{""} {}
TETKIK::TETKIK(const TETKIK &kaynak):IdliSinif{kaynak},_ad{kaynak._ad},_aciklama{kaynak._aciklama},_normalDegerler{kaynak._aciklama} {}

QString TETKIK::ad() const
{
    return _ad;
}

void TETKIK::setAd(const QString &newAd)
{
    _ad = newAd;
}

QString TETKIK::aciklama() const
{
    return _aciklama;
}

void TETKIK::setAciklama(const QString &newAciklama)
{
    _aciklama = newAciklama;
}

QString TETKIK::normalDegerler() const
{
    return _normalDegerler;
}

void TETKIK::setNormalDegerler(const QString &newNormalDegerler)
{
    _normalDegerler = newNormalDegerler;
}
