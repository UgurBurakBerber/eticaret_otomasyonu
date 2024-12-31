//
// Created by Uğur Burak Berber on 31.12.2023.
//

#include "siparisUrunu.h"

const Metin &siparisUrunu::getSiparis() const {
    return _siparis;
}

void siparisUrunu::setSiparis(const Metin &siparis) {
    _siparis = siparis;
}

const Metin &siparisUrunu::getUrun() const {
    return _urun;
}

void siparisUrunu::setUrun(const Metin &urun) {
    _urun = urun;
}


kusuratliSayi siparisUrunu::getBirimFiyat() const {
    return _birimFiyat;
}

void siparisUrunu::setBirimFiyat(kusuratliSayi birimFiyat) {
    _birimFiyat = birimFiyat;
}

Tamsayi siparisUrunu::getSiparisUrunTanimlayici() const {
    return _siparisUrunTanimlayici;
}

void siparisUrunu::setSiparisUrunTanimlayici(Tamsayi siparisUrunTanimlayici) {
    _siparisUrunTanimlayici = siparisUrunTanimlayici;
}

siparisUrunu::siparisUrunu(): ortak_veri_sinifi{}, _siparis{} ,_urun{}, _birimFiyat{}{
}