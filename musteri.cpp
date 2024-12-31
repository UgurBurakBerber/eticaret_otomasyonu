//
// Created by Uğur Burak Berber on 31.12.2023.
//

#include "musteri.h"

const Metin &musteri::getMusteriAdi() const {
    return _musteriAdi;
}

void musteri::setMusteriAdi(const Metin &musteriAdi) {
    _musteriAdi = musteriAdi;
}

const Metin &musteri::getMusteriSoyadi() const {
    return _musteriSoyadi;
}

void musteri::setMusteriSoyadi(const Metin &musteriSoyadi) {
    _musteriSoyadi = musteriSoyadi;
}

const Metin &musteri::getTelefonNo() const {
    return _telefonNo;
}

void musteri::setTelefonNo(const Metin &telefonNo) {
    _telefonNo = telefonNo;
}

const Metin &musteri::getEmail() const {
    return _email;
}

void musteri::setEmail(const Metin &email) {
    _email = email;
}

Tamsayi musteri::getMusteriTanimlayici() const {
    return _musteriTanimlayici;
}

void musteri::setMusteriTanimlayici(Tamsayi musteriTanimlayici) {
    _musteriTanimlayici = musteriTanimlayici;
}
musteri::musteri(): ortak_veri_sinifi{}, _musteriAdi{}, _musteriSoyadi{}, _email{}, _telefonNo{}
{
}
