#pragma once

#include <QString>
#include <QDateTime>

#include "idlisinif.h"

class Insan:public IdliSınıf{
private:
    Insan();
    Insan(const Insan& kaynak);
public:
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
