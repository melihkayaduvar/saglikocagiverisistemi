#pragma once


#include <QString>
#include <QDateTime>

#include "../Araclar/TABLO.h"

class IdliSinif{
public:
    IdliSinif();
    IdliSinif(const IdliSinif& kaynak);
    quint32 id() const;
    void setId(quint32 newid);
private:
    quint32 _id;
};
