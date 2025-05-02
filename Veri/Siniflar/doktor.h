#pragma once

#include "idlisinif.h"
#include "insan.h"

class DOKTOR:public Idlisinif,public Insan{
private:
    DOKTOR();
    DOKTOR(const DOKTOR& kaynak);
public:
    QString uzmanlikAlani()const;
    void setuzmanlikAlani(const QString newuzmanlikalani);
private:
    QString _uzmanlikAlani;
};
