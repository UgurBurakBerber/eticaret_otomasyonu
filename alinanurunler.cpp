//
// Created by Uğur Burak Berber on 31.12.2023.
//

#include "alinanurunler.h"
#include "../Denetleyici.h" // '..' bir üst klasör demek


kusuratliSayi alinanurunler::getAlisFiyati() const {
    return _alisFiyati;
}

void alinanurunler::setAlisFiyati(kusuratliSayi alisFiyati) {
    _alisFiyati = alisFiyati;
}

Stok alinanurunler::getAdet() const {
    return _adet;
}

void alinanurunler::setAdet(Stok adet) {
    _adet = adet;
}

Tamsayi alinanurunler::getUrunTanimlayici() const {
    return _urunTanimlayici;
}

void alinanurunler::setUrunTanimlayici(Tamsayi urunTanimlayici) {
    _urunTanimlayici = urunTanimlayici;
}

Tamsayi alinanurunler::getAlisTanimlayici() const {
    return _alisTanimlayici;
}

void alinanurunler::setAlisTanimlayici(Tamsayi alisTanimlayici) {
    _alisTanimlayici = alisTanimlayici;
}

alinanurunler::alinanurunler(): ortak_veri_sinifi{}, _alisFiyati{}, _adet{}, _urunTanimlayici{Gecersiz}, _alisTanimlayici{Gecersiz} {
}

urunPtr alinanurunler::geturun() const {
    auto urun = Denetleyici::d().getUrunler().arama([this](urunPtr &u){
        return u->get_tanimlayici() == _tanimlayici;
    });
    if (urun.empty()) {
        throw urunBulunamadi();
    }
    if(urun.size()>1){
        throw urunZatenVar();
    }
    return urun[0];

}

siparisPtr alinanurunler::getsiparis() const {
    auto siparis = Denetleyici::d().getSiparisler().arama(
            [this](siparisPtr &u){
                return u->get_tanimlayici() == _tanimlayici;
    });
    if (siparis.empty()) {
        throw siparisBulunamadi();
    }
    if(siparis.size()>1){
        throw siparisZatenVar();
    }
    return siparis[0];
}

