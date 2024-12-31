//
// Created by Uğur Burak Berber on 31.12.2023.
//

#include "urunKategorisi.h"

const Metin &urunKategorisi::getUrunKategorisi() const {
    return _urunKategorisi;
}

void urunKategorisi::setUrunKategorisi(const Metin &urunKategorisi) {
    _urunKategorisi = urunKategorisi;
}

Tamsayi urunKategorisi::getKategoriTanimlayici() const {
    return _kategoriTanimlayici;
}

void urunKategorisi::setKategoriTanimlayici(Tamsayi kategoriTanimlayici) {
    _kategoriTanimlayici = kategoriTanimlayici;
}
urunKategorisi::urunKategorisi(): ortak_veri_sinifi{}, _urunKategorisi{}
{
}
