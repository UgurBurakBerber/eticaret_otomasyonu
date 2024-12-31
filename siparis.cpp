//
// Created by Uğur Burak Berber on 31.12.2023.
//

#include "siparis.h"
#include "../Denetleyici.h"

const Tarih &siparis::getTarih() const {
    return _tarih;
}

void siparis::setTarih(const Tarih &tarih) {
    _tarih = tarih;
}

const Metin &siparis::getFirma() const {
    return _firma;
}

void siparis::setFirma(const Metin &firma) {
    _firma = firma;
}

const Metin &siparis::getMusteri() const {
    return _musteri;
}

void siparis::setMusteri(const Metin &musteri) {
    _musteri = musteri;
}


Tamsayi siparis::getSiparisTanimlayici() const {
    return _siparisTanimlayici;
}

Tamsayi siparis::getFaturaNo() const {
    return _faturaNo;
}

void siparis::setFaturaNo(Tamsayi faturaNo) {
    _faturaNo = faturaNo;
}

void siparis::setSiparisTanimlayici(Tamsayi siparisTanimlayici) {
    _siparisTanimlayici = siparisTanimlayici;
}
siparis::siparis(): ortak_veri_sinifi{}, _tarih{}, _firma{}, _musteri{}, _faturaNo{}
{
}

alinanurunlerVektor siparis::urunler() const {
    auto alinanUrunler = Denetleyici::d().getAlinanurunlerr().arama(
            [this](const alinanurunlerPtr &au){
                return au->getAlisTanimlayici() == _tanimlayici;
            });
    return alinanUrunler;
}



