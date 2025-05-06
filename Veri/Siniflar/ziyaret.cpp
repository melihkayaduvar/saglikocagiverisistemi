#include "ziyaret.h"
/*#include "bulgu.h"
#include "istenentetkik.h"*/

ZIYARET::ZIYARET():IdliSinif{},_tarihsaat{},_sikayet{""},_tani{""},_tedavinotlari{""} {}
ZIYARET::ZIYARET(const ZIYARET& kaynak):IdliSinif{kaynak},_tarihsaat{kaynak._tarihsaat},_sikayet{kaynak._sikayet}
    ,_tani{kaynak._tani},_tedavinotlari{kaynak._tedavinotlari} {}

QDateTime &ZIYARET::tarihsaat()
{
    return _tarihsaat;
}

void ZIYARET::setTarihsaat(const QDateTime &newTarihsaat)
{
    _tarihsaat = newTarihsaat;
}

QString &ZIYARET::sikayet()
{
    return _sikayet;
}

void ZIYARET::setSikayet(const QString &newSikayet)
{
    _sikayet = newSikayet;
}

QString &ZIYARET::tani()
{
    return _tani;
}

void ZIYARET::setTani(const QString &newTani)
{
    _tani = newTani;
}

QString &ZIYARET::tedavinotlari()
{
    return _tedavinotlari;
}

void ZIYARET::setTedavinotlari(const QString &newTedavinotlari)
{
    _tedavinotlari = newTedavinotlari;
}

/*quint32 ZIYARET::doktorid() const
{
    return _doktorid;
}

void ZIYARET::setDoktorid(quint32 newDoktorid)
{
    _doktorid = newDoktorid;
}

quint32 ZIYARET::hastaid() const
{
    return _hastaid;
}

void ZIYARET::setHastaid(quint32 newHastaid)
{
    _hastaid = newHastaid;
}

quint32 ZIYARET::receteid() const
{
    return _receteid;
}

void ZIYARET::setReceteid(quint32 newReceteid)
{
    _receteid = newReceteid;
}*/

/*QList<BULGU *> ZIYARET::bulgular() const
{
    return _bulgular;
}

void ZIYARET::setBulgular(const QList<BULGU *> &newBulgular)
{
    _bulgular = newBulgular;
}

QList<ISTENENTETKIK *> ZIYARET::istenentetkikler() const
{
    return _istenentetkikler;
}

void ZIYARET::setIstenentetkikler(const QList<ISTENENTETKIK *> &newIstenentetkikler)
{
    _istenentetkikler = newIstenentetkikler;
}



QDataStream &operator<<(QDataStream &out, const ZIYARET &z)
{
    out << z._tarihsaat
        << z._sikayet
        << z._tani
        << z._tedavinotlari;

    // ID’leri doğrudan yaz
    out << z._doktorid
        << z._hastaid
        << z._receteid;

    // Bulgu ID listesi
    out << quint32(z._bulgular.size());
    for (auto *b : z._bulgular)
        out << (b ? b->id() : 0); // 0 geçersiz ID sayılır

    // Tetkik ID listesi
    out << quint32(z._istenentetkikler.size());
    for (auto *t : z._istenentetkikler)
        out << (t ? t->id() : 0);

    return out;
}

QDataStream &operator>>(QDataStream &in, ZIYARET &z)
{
    in >> z._tarihsaat
        >> z._sikayet
        >> z._tani
        >> z._tedavinotlari;

    in >> z._doktorid
        >> z._hastaid
        >> z._receteid;

    // Bulgu ID listesi alınır ama nesneler veritabanı dışından eşleştirilecek
    quint32 bulguCount;
    in >> bulguCount;
    z._bulgular.clear();
    for (quint32 i = 0; i < bulguCount; ++i) {
        quint32 bulguId;
        in >> bulguId;
        z._bulgular.append(nullptr); // eşleştirme geri yüklemede yapılacak
    }

    // Tetkik ID listesi alınır
    quint32 tetkikCount;
    in >> tetkikCount;
    z._istenentetkikler.clear();
    for (quint32 i = 0; i < tetkikCount; ++i) {
        quint32 tetkikId;
        in >> tetkikId;
        z._istenentetkikler.append(nullptr); // eşleştirme sonra
    }

    return in;
}*/

