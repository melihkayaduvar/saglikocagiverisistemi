#pragma once

#include "idlisinif.h"

class BULGU;
class ISTENENTETKIK;
#include "doktor.h"
#include "hasta.h"
#include "recete.h"

class ZIYARET:public IdliSinif{
public:
    ZIYARET();
    ZIYARET(const ZIYARET& kaynak);
    template <class T> friend class TABLO;
    friend QDataStream &operator<<(QDataStream &, const ZIYARET &);
    friend QDataStream &operator>>(QDataStream &, ZIYARET &);
public:

    QDate tarihsaat() const;
    void setTarihsaat(const QDate &newTarihsaat);

    QString sikayet() const;
    void setSikayet(const QString &newSikayet);

    QString tani() const;
    void setTani(const QString &newTani);

    QString tedavinotlari() const;
    void setTedavinotlari(const QString &newTedavinotlari);

    quint32 doktorid() const;
    void setDoktorid(quint32 newDoktorid);
    quint32 hastaid() const;
    void setHastaid(quint32 newHastaid);
    QList<BULGU *> bulgular() const;
    void setBulgular(const QList<BULGU *> &newBulgular);
    QList<ISTENENTETKIK *> istenentetkikler() const;
    void setIstenentetkikler(const QList<ISTENENTETKIK *> &newIstenentetkikler);
    quint32 receteid() const;
    void setReceteid(quint32 newReceteid);

private:
    QDate _tarihsaat;
    QString _sikayet;
    QString _tani;
    QString _tedavinotlari;

    quint32 _doktorid;
    quint32 _hastaid;
    quint32 _receteid;
    QVector<BULGU*> _bulgular;
    QVector<ISTENENTETKIK*> _istenentetkikler;

};
