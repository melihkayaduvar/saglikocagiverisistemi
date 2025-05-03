#pragma once

#include "idlisinif.h"
#include "../Araclar/enums.h"

class BULGU:public IdliSinif
{
private:
    BULGU();
    BULGU(const BULGU& kaynak);
    template <class T> friend class TABLO;
public:
    QString aciklama() const;
    void setAciklama(const QString &newAciklama);

    BulguTipiEnum tip() const;
    void setTip(BulguTipiEnum newTip);

    QDate kaydedilmeZamani() const;
    void setKaydedilmeZamani(const QDate &newKaydedilmeZamani);

private:
    QString _aciklama;
    BulguTipiEnum _tip;
    QDate _kaydedilmeZamani;
};
