//
// Created by Uğur Burak Berber on 31.12.2023.
//

#include "urunYorum.h"

const Metin &urunYorum::getUrunYorumu() const {
    return _urunYorumu;
}

void urunYorum::setUrunYorumu(const Metin &urunYorumu) {
    _urunYorumu = urunYorumu;
}

Tamsayi urunYorum::getYorumTanimlayici() const {
    return _yorumTanimlayici;
}

void urunYorum::setYorumTanimlayici(Tamsayi yorumTanimlayici) {
    _yorumTanimlayici = yorumTanimlayici;
}
urunYorum::urunYorum(): ortak_veri_sinifi{}, _urunYorumu{}
{
}