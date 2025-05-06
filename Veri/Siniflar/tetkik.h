#pragma once

#include "idlisinif.h"

class TETKIK:public IdliSinif
{
private:
    TETKIK();
    TETKIK(const TETKIK& kaynak);
    template <class T> friend class TABLO;
public:
    QString &ad() ;
    void setAd(const QString &newAd);

    QString &aciklama() ;
    void setAciklama(const QString &newAciklama);

    QString &normalDegerler() ;
    void setNormalDegerler(const QString &newNormalDegerler);

private:
    QString _ad;
    QString _aciklama;
    QString _normalDegerler;
};
