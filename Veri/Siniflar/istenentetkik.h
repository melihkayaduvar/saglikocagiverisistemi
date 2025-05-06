#pragma once

#include "idlisinif.h"
#include "../Araclar/enums.h"

class ISTENENTETKIK:public IdliSinif
{
private:
    ISTENENTETKIK();
    ISTENENTETKIK(const ISTENENTETKIK& kaynak);
    template <class T> friend class TABLO;
    /*friend QDataStream &operator<<(QDataStream &, const ISTENENTETKIK &);
    friend QDataStream &operator>>(QDataStream &, ISTENENTETKIK &);*/
public:

    QDateTime &istekTarihi();
    void setIstekTarihi(const QDateTime &newIstekTarihi);

    QDateTime &sonucTarihi();
    void setSonucTarihi(const QDateTime &newSonucTarihi);

    QString &sonuc();
    void setSonuc(const QString &newSonuc);

    QString &yorum();
    void setYorum(const QString &newYorum);

    TetkikDurumuEnum durum()const;
    void setDurum(TetkikDurumuEnum newDurum);

private:
    QDateTime _istekTarihi;
    QDateTime _sonucTarihi;
    QString _sonuc;
    QString _yorum;
    TetkikDurumuEnum _durum;
};
