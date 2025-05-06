#pragma once

#include "idlisinif.h"

/*class BULGU;
class ISTENENTETKIK;*/

class ZIYARET:public IdliSinif{
public:
    ZIYARET();
    ZIYARET(const ZIYARET& kaynak);
    template <class T> friend class TABLO;
    /*friend QDataStream &operator<<(QDataStream &, const ZIYARET &);
    friend QDataStream &operator>>(QDataStream &, ZIYARET &);*/
public:

    QDateTime &tarihsaat() ;
    void setTarihsaat(const QDateTime &newTarihsaat);

    QString &sikayet() ;
    void setSikayet(const QString &newSikayet);

    QString &tani();
    void setTani(const QString &newTani);

    QString &tedavinotlari() ;
    void setTedavinotlari(const QString &newTedavinotlari);

    /*quint32 doktorid() const;
    void setDoktorid(quint32 newDoktorid);
    quint32 hastaid() const;
    void setHastaid(quint32 newHastaid);
    quint32 receteid() const;
    void setReceteid(quint32 newReceteid);*/


    /*QList<BULGU *> bulgular() const;
    void setBulgular(const QList<BULGU *> &newBulgular);
    QList<ISTENENTETKIK *> istenentetkikler() const;
    void setIstenentetkikler(const QList<ISTENENTETKIK *> &newIstenentetkikler);*/


private:
    QDateTime _tarihsaat;
    QString _sikayet;
    QString _tani;
    QString _tedavinotlari;

    /*quint32 _doktorid;
    quint32 _hastaid;
    quint32 _receteid;*/


    /*QVector<BULGU*> _bulgular;
    QVector<ISTENENTETKIK*> _istenentetkikler;*/

};
