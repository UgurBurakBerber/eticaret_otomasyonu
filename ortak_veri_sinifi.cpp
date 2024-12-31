//
// Created by Uğur Burak Berber on 31.12.2023.
//

#include "ortak_veri_sinifi.h"

Tamsayi ortak_veri_sinifi::get_tanimlayici() const
{
    return _tanimlayici;
}

void ortak_veri_sinifi::set_tanimlayici(const Tamsayi& tanimlayici)
{
    _tanimlayici = tanimlayici;
}

