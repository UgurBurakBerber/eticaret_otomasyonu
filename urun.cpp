//
// Created by Uğur Burak Berber on 31.12.2023.
//

#include "urun.h"

const Metin &urun::getUrunAdi() const {
    return _urunAdi;
}

void urun::setUrunAdi(const Metin &urunAdi) {
    _urunAdi = urunAdi;
}

const Metin &urun::getUrunKodu() const {
    return _urunKodu;
}

void urun::setUrunKodu(const Metin &urunKodu) {
    _urunKodu = urunKodu;
}

const kusuratliSayi & urun::getUrunFiyati() const {
    return _urunFiyati;
}

void urun::setUrunFiyati(const kusuratliSayi urunFiyati) {
    _urunFiyati = urunFiyati;
}

const Metin &urun::getUrunAciklamasi() const {
    return _urunAciklamasi;
}

void urun::setUrunAciklamasi(const Metin &urunAciklamasi) {
    _urunAciklamasi = urunAciklamasi;
}

Tamsayi urun::getUrunTanimlayicisi() const {
    return _urunTanimlayicisi;
}

void urun::setUrunTanimlayicisi(Tamsayi urunTanimlayicisi) {
    _urunTanimlayicisi = urunTanimlayicisi;
}
urun::urun(): ortak_veri_sinifi{}, _urunAdi{}, _urunKodu{}, _urunAciklamasi{}, _urunFiyati{}
{
}


