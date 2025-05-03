#include "doktor.h"

DOKTOR::DOKTOR():Insan{},_uzmanlikAlani{""} {}
DOKTOR::DOKTOR(const DOKTOR &kaynak):Insan{kaynak},_uzmanlikAlani{""} {}

QString DOKTOR::uzmanlikAlani() const
{
    return _uzmanlikAlani;
}

void DOKTOR::setuzmanlikAlani(const QString newuzmanlikalani)
{
    _uzmanlikAlani=newuzmanlikalani;
}
