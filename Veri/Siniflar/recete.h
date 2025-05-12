#pragma once

#include "idlisinif.h"

/*class RECETEKALEMI;*/

class RECETE:public IdliSinif
{
private:
    RECETE();
    RECETE(const RECETE& kaynak);
    template <class T> friend class TABLO;
public:

    QDate &tarih() ;
    void setTarih(const QDate &newTarih);

    quint32 gecerlilikSuresi() const;
    void setGecerlilikSuresi(quint32 newGecerlilikSuresi);

    quint32 ziyaretid() const;
    void setZiyaretId(const quint32 &newziyaretid);


private:
    QDate _tarih;
    quint32 _gecerlilikSuresi;

    //İlişkiler
    quint32 _ziyaretid;

};
