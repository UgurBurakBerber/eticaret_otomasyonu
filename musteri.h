//
// Created by Uğur Burak Berber on 31.12.2023.
//
#pragma once
#include "ortak_veri_sinifi.h"


class musteri : public ortak_veri_sinifi {
private:
    Metin _musteriAdi;
    Metin _musteriSoyadi;
    Metin _telefonNo;
    Metin _email;
    Tamsayi _musteriTanimlayici;



public:
    const Metin &getMusteriAdi() const;

    void setMusteriAdi(const Metin &musteriAdi);

    const Metin &getMusteriSoyadi() const;

    void setMusteriSoyadi(const Metin &musteriSoyadi);

    const Metin &getTelefonNo() const;

    void setTelefonNo(const Metin &telefonNo);

    const Metin &getEmail() const;

    void setEmail(const Metin &email);

    Tamsayi getMusteriTanimlayici() const;

    void setMusteriTanimlayici(Tamsayi musteriTanimlayici);

    musteri();
};

