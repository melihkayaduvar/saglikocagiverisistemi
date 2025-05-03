#include "recete.h"

RECETE::RECETE():IdliSinif{},_tarih{},_gecerlilikSuresi{0} {}
RECETE::RECETE(const RECETE& kaynak):IdliSinif{kaynak},_tarih{kaynak._tarih},_gecerlilikSuresi{kaynak._gecerlilikSuresi} {}

QDate RECETE::tarih() const
{
    return _tarih;
}

void RECETE::setTarih(const QDate &newTarih)
{
    _tarih = newTarih;
}

quint32 RECETE::gecerlilikSuresi() const
{
    return _gecerlilikSuresi;
}

void RECETE::setGecerlilikSuresi(quint32 newGecerlilikSuresi)
{
    _gecerlilikSuresi = newGecerlilikSuresi;
}

QList<RECETEKALEMI *> RECETE::kalemler() const
{
    return _kalemler;
}

void RECETE::setKalemler(const QList<RECETEKALEMI *> &newKalemler)
{
    _kalemler = newKalemler;
}
