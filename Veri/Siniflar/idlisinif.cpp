#include "idlisinif.h"

IdliSınıf::IdliSınıf():_id{0}{}
IdliSınıf::IdliSınıf(const IdliSınıf& kaynak):_id{kaynak._id}{}

quint32 IdliSınıf::id() const{return _id;}

void IdliSınıf::setId(quint32 newid){_id=newid;}
