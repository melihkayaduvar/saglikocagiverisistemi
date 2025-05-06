#pragma once

#include "idlisinif.h"
#include "../Araclar/enums.h"

class BULGU:public IdliSinif
{
private:
    BULGU();
    BULGU(const BULGU& kaynak);
    template <class T> friend class TABLO;
    /*friend QDataStream &operator<<(QDataStream &, const BULGU &);
    friend QDataStream &operator>>(QDataStream &, BULGU &);*/
public:
    QString &aciklama();
    void setAciklama(const QString &newAciklama);

    BulguTipiEnum tip() const;
    void setTip(BulguTipiEnum newTip);

    QDateTime &kaydedilmeZamani();
    void setKaydedilmeZamani(const QDateTime &newKaydedilmeZamani);

private:
    QString _aciklama;
    BulguTipiEnum _tip;
    QDateTime _kaydedilmeZamani;
};
