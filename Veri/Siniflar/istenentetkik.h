#pragma once

#include "idlisinif.h"
#include "../Araclar/enums.h"

class ISTENENTETKIK:public IdliSinif
{
private:
    ISTENENTETKIK();
    ISTENENTETKIK(const ISTENENTETKIK& kaynak);
    template <class T> friend class TABLO;
public:

    QDate istekTarihi() const;
    void setIstekTarihi(const QDate &newIstekTarihi);

    QDate sonucTarihi() const;
    void setSonucTarihi(const QDate &newSonucTarihi);

    QString sonuc() const;
    void setSonuc(const QString &newSonuc);

    QString yorum() const;
    void setYorum(const QString &newYorum);

    TetkikDurumuEnum durum() const;
    void setDurum(TetkikDurumuEnum newDurum);

private:
    QDate _istekTarihi;
    QDate _sonucTarihi;
    QString _sonuc;
    QString _yorum;
    TetkikDurumuEnum _durum;
};
