#pragma once

#include <qtypes.h>

class IdliSınıf{
public:
    IdliSınıf();
    IdliSınıf(const IdliSınıf& kaynak);
    quint32 id() const;
    void setId(quint32 newid);
private:
    quint32 _id;
};
