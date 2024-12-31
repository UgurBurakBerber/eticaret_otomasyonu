//
// Created by Uğur Burak Berber on 31.12.2023.
//

#pragma once

#include <memory>
#include <vector>
#include <functional>
#include "stdexcept" // logic_error için..
#include "ortak.h"



/*
bool f(std::shared_ptr<magaza> & i) {
    return i.get == 5;
}
bool f1(std::shared_ptr<magaza> & i) {
    return i->getTanimlayici() >= 3 && i->getTanimlayici() <= 5;
}
bool f2(std::shared_ptr<magaza> & i) {
    return i->getYetkiliTelefon() == "5555555";
}*/

template<class T>
class Konteynir {
public:
    using Veri = T;
    using Ptr = std::shared_ptr<Veri>;
    using Vektor = std::vector<Ptr>;
    using Fonksiyon = std::function<bool(Ptr &i)>;


    // baska bir using başka bir using'in içindekine erişmek isterse typename kullanıoır
    using Iterator = typename Vektor::iterator;

    class ZatenVarHatasi: public std::logic_error {
    public:
        ZatenVarHatasi(): std::logic_error("Eklenecek kayıt zaten var."){}
    };
    class KayitBulunamadiHatasi: public std::logic_error {

    public:
        KayitBulunamadiHatasi(): std::logic_error("Kayıt bulunamadı ") {}
    };

    Konteynir(): _sayac{0}{}

    Vektor arama(Fonksiyon data) {
        Vektor sonuc;
        for (auto &i : _konteynir) {
            if(data(i)) {
                sonuc.push_back(i);
            }
        }
        return sonuc;
    }

    void silme(Tamsayi tanimlayici) {
        for (auto i = _konteynir.begin(); i != _konteynir.end(); i++) {
            auto &veri = *i;
            veri.get_tanimlayici() = tanimlayici;
            if(veri->get_tanimlayici() == tanimlayici) {
                silme(i);
            }
        }

        throw KayitBulunamadiHatasi();
    }

    //overloading override !!

    void silme(Iterator silinecekKonum){
        // bellekten de silinir sharepoint ile kullanılırsa
        _konteynir.erase(silinecekKonum);

    }

    void ekle(Ptr eklenecek){
        if (eklenecek->get_tanimlayici()== Gecersiz) {
            _konteynir.push_back(eklenecek);
            eklenecek->set_tanimlayici(_sayac++);
        } else {
            // aynı magazaya sahip başka bir magaza var mı?
            auto aramaSonucu = arama([eklenecek](Ptr &i){
                return i->get_tanimlayici() == eklenecek->get_tanimlayici();
            });
            // arama sonucunun 0 veya boş olamasını bekliyoruz
            if (aramaSonucu.empty()) {
                _konteynir.push_back(eklenecek);
                _sayac = std::max(_sayac, eklenecek->get_tanimlayici()) + 1;
            } else {
                throw ZatenVarHatasi();
            }
        }

    }

    Ptr yeni_yer_olustur() {
        return std::make_shared<T>(); // tekrar bakılacakkk !!!!!
    }

private:
    Vektor _konteynir;
    Tamsayi _sayac;

};