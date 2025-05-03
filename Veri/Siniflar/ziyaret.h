#pragma once

#include "idlisinif.h"

class ZIYARET:public IdliSinif{
private:
    ZIYARET();
    ZIYARET(const ZIYARET& kaynak);
public:

    QDate tarihsaat() const;
    void setTarihsaat(const QDate &newTarihsaat);

    QString sikayet() const;
    void setSikayet(const QString &newSikayet);

    QString tani() const;
    void setTani(const QString &newTani);

    QString tedavinotlari() const;
    void setTedavinotlari(const QString &newTedavinotlari);

private:
    QDate _tarihsaat;
    QString _sikayet;
    QString _tani;
    QString _tedavinotlari;
};
