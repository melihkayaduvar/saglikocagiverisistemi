#pragma once

#include "idlisinif.h"

class ILAC:public IdliSinif
{
private:
    ILAC();
    ILAC(const ILAC& kaynak);
    template <class T> friend class TABLO;
public:

private:
    QString _barkod;
    QString _ad;
    QString _etkenMadde;
    QString _form;
    QString _dozajBilgisi;
};
