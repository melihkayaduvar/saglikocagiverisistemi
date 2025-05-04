#pragma once

#include <functional>
#include <QVector>
#include <memory.h>

template <class T>
class TABLO{
public:
    using VeriSinifi=T;
    using VeriPointer=std::shared_ptr<VeriSinifi>;
    using VeriDizisi=QVector<VeriPointer>;
    using SorguFonksiyonu=std::function<bool(VeriPointer)>;

    TABLO(){}
    VeriPointer olustur(){
        return VeriPointer(new VeriSinifi);
    }
    void ekle(VeriPointer yeni_nesne){
        yeni_nesne->setId(_sonid++);
        this->_elemanlar.append(yeni_nesne);
    }
    VeriPointer IdyeGoreAra(quint32 id){
        if(_elemanlar.size()<100){
            for(auto eleman:_elemanlar){
                if(id==eleman->id()){
                    return eleman;
                }
            }
        }else{
            quint32 baslangic=0;
            quint32 bitis=_elemanlar.size();
            quint32 orta;
            while (baslangic<bitis) {
                orta=(baslangic+bitis)/2;
                if(id==_elemanlar[orta]->id()){
                    return _elemanlar[orta];
                }
                if(id>_elemanlar[orta]->id()){
                    baslangic=orta;
                    continue;
                }
                if(id<_elemanlar[orta]->id()){
                    bitis=orta;
                    continue;
                }
            }
        }
        throw std::runtime_error("hata");
    }
    bool IdyeGoreSil(quint32 id){
        for (quint32 i=0;i<_elemanlar.size();i++) {
            if(_elemanlar[i]->id()==id){
                _elemanlar.removeAt(i);
                return true;
            }
        }
        return false;
    }
    VeriDizisi bul(SorguFonksiyonu sorgu){
        VeriDizisi aramaSonucu;
        for(auto &eleman:_elemanlar){
            if(sorgu(eleman)){
                aramaSonucu.append(eleman);
            }
        }
        return aramaSonucu;
    }
private:
    VeriDizisi _elemanlar;
    quint32 _sonid;

    friend class VERITABANI;
};
