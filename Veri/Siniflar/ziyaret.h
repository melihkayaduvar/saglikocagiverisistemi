#pragma once

#include "idlisinif.h"

class BULGU;
class ISTENENTETKIK;
#include "doktor.h"
#include "hasta.h"
#include "recete.h"

class ZIYARET:public IdliSinif{
private:
    ZIYARET();
    ZIYARET(const ZIYARET& kaynak);
    template <class T> friend class TABLO;
public:

    QDate tarihsaat() const;
    void setTarihsaat(const QDate &newTarihsaat);

    QString sikayet() const;
    void setSikayet(const QString &newSikayet);

    QString tani() const;
    void setTani(const QString &newTani);

    QString tedavinotlari() const;
    void setTedavinotlari(const QString &newTedavinotlari);

    DOKTOR *doktorid() const;
    void setDoktorid(DOKTOR *newDoktorid);
    HASTA *hastaid() const;
    void setHastaid(HASTA *newHastaid);
    QList<BULGU *> bulgular() const;
    void setBulgular(const QList<BULGU *> &newBulgular);
    QList<ISTENENTETKIK *> istenentetkikler() const;
    void setIstenentetkikler(const QList<ISTENENTETKIK *> &newIstenentetkikler);
    RECETE *receteid() const;
    void setReceteid(RECETE *newReceteid);

private:
    QDate _tarihsaat;
    QString _sikayet;
    QString _tani;
    QString _tedavinotlari;

    DOKTOR* _doktorid;
    HASTA* _hastaid;
    QList<BULGU*> _bulgular;
    QList<ISTENENTETKIK*> _istenentetkikler;
    RECETE* _receteid;
};
