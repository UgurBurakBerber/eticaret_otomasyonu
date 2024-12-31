//
// Created by Uğur Burak Berber on 31.12.2023.
//

#include "magaza.h"

const Metin &magaza::getUrunn() const {
    return _urunn;
}

void magaza::setUrunn(const Metin &urunn) {
    _urunn = urunn;
}

const Metin &magaza::getYetkiliAdi() const {
    return _yetkiliAdi;
}

void magaza::setYetkiliAdi(const Metin &yetkiliAdi) {
    _yetkiliAdi = yetkiliAdi;
}

const Metin &magaza::getYetkiliAdresi() const {
    return _yetkiliAdresi;
}

void magaza::setYetkiliAdresi(const Metin &yetkiliAdresi) {
    _yetkiliAdresi = yetkiliAdresi;
}

const Metin &magaza::getYetkiliTelefon() const {
    return _yetkiliTelefon;
}

void magaza::setYetkiliTelefon(const Metin &yetkiliTelefon) {
    _yetkiliTelefon = yetkiliTelefon;
}
magaza::magaza(): ortak_veri_sinifi{}, _yetkiliAdi{}, _yetkiliAdresi{}, _yetkiliTelefon{}{
}



