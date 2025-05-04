#pragma once

#include "idlisinif.h"

class ILAC:public IdliSinif
{
private:
    ILAC();
    ILAC(const ILAC& kaynak);
    template <class T> friend class TABLO;
public:

    QString barkod() const;
    void setBarkod(const QString &newBarkod);
    QString ad() const;
    void setAd(const QString &newAd);
    QString etkenMadde() const;
    void setEtkenMadde(const QString &newEtkenMadde);
    QString form() const;
    void setForm(const QString &newForm);
    QString dozajBilgisi() const;
    void setDozajBilgisi(const QString &newDozajBilgisi);

private:
    QString _barkod;
    QString _ad;
    QString _etkenMadde;
    QString _form;
    QString _dozajBilgisi;
};
