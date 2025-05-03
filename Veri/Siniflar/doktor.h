#pragma once

#include "insan.h"

class DOKTOR:public Insan{
private:
    DOKTOR();
    DOKTOR(const DOKTOR& kaynak);
public:
    QString uzmanlikAlani()const;
    void setuzmanlikAlani(const QString newuzmanlikalani);
private:
    QString _uzmanlikAlani;
};
