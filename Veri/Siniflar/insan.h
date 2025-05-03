#pragma once

#include "idlisinif.h"

class Insan:public IdliSinif{
public:
    Insan();
    Insan(const Insan& kaynak);
    QString adi() const;
    void setadi(const QString newadi);
    QString soyadi() const;
    void setsoyadi(const QString newsoyadi);
    QString telefon() const;
    void settelefon(const QString newtelefon);
private:
    QString _adi;
    QString _soyadi;
    QString _telefon;
};
