#include "doktor.h"

DOKTOR::DOKTOR():IdliSınıf{},_uzmanlikAlani{""} {}
DOKTOR::DOKTOR(const DOKTOR &kaynak):IdliSinif{kaynak},_uzmanlikAlani{""} {}

QString DOKTOR::uzmanlikAlani() const
{
    return _uzmanlikAlani;
}

void DOKTOR::setuzmanlikAlani(const QString newuzmanlikalani)
{
    _uzmanlikAlani=newuzmanlikalani;
}
