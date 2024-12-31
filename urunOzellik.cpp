//
// Created by Uğur Burak Berber on 31.12.2023.
//

#include "urunOzellik.h"

const Metin &urunOzellik::getUrunOzellikleri() const {
    return _urunOzellikleri;
}

void urunOzellik::setUrunOzellikleri(const Metin &urunOzellikleri) {
    _urunOzellikleri = urunOzellikleri;
}

Tamsayi urunOzellik::getOzellikTanimlayici() const {
    return _ozellikTanimlayici;
}

void urunOzellik::setOzellikTanimlayici(Tamsayi ozellikTanimlayici) {
    _ozellikTanimlayici = ozellikTanimlayici;
}
urunOzellik::urunOzellik(): ortak_veri_sinifi{}, _urunOzellikleri{}
{
}
