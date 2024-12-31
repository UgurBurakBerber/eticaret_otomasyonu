//
// Created by Uğur Burak Berber on 31.12.2023.
//
#pragma once

#include "../ortak.h"

class ortak_veri_sinifi
{
protected:
    Tamsayi _tanimlayici;

public:
    [[nodiscard]] Tamsayi get_tanimlayici() const;
    void set_tanimlayici(const Tamsayi& tanimlayici);

    ortak_veri_sinifi();

    Tamsayi getTanimlayici() const;

    void setTanimlayici(Tamsayi tanimlayici);
};

Tamsayi ortak_veri_sinifi::getTanimlayici() const {
    return _tanimlayici;
}

void ortak_veri_sinifi::setTanimlayici(Tamsayi tanimlayici) {
    _tanimlayici = tanimlayici;
}

ortak_veri_sinifi::ortak_veri_sinifi(): _tanimlayici{Gecersiz}{
}

