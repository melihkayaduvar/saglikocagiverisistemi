#include "ilac.h"

ILAC::ILAC() {}
ILAC::ILAC(const ILAC& kaynak) {}

QString ILAC::barkod() const
{
    return _barkod;
}

void ILAC::setBarkod(const QString &newBarkod)
{
    _barkod = newBarkod;
}

QString ILAC::ad() const
{
    return _ad;
}

void ILAC::setAd(const QString &newAd)
{
    _ad = newAd;
}

QString ILAC::etkenMadde() const
{
    return _etkenMadde;
}

void ILAC::setEtkenMadde(const QString &newEtkenMadde)
{
    _etkenMadde = newEtkenMadde;
}

QString ILAC::form() const
{
    return _form;
}

void ILAC::setForm(const QString &newForm)
{
    _form = newForm;
}

QString ILAC::dozajBilgisi() const
{
    return _dozajBilgisi;
}

void ILAC::setDozajBilgisi(const QString &newDozajBilgisi)
{
    _dozajBilgisi = newDozajBilgisi;
}
