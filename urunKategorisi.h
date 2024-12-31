//
// Created by Uğur Burak Berber on 31.12.2023.
//
#pragma once
#include "ortak_veri_sinifi.h"

class urunKategorisi : public ortak_veri_sinifi {
private:

    Metin _urunKategorisi;
    Tamsayi _kategoriTanimlayici{};
public:
    const Metin &getUrunKategorisi() const;

    void setUrunKategorisi(const Metin &urunKategorisi);

    Tamsayi getKategoriTanimlayici() const;

    void setKategoriTanimlayici(Tamsayi kategoriTanimlayici);




    urunKategorisi();
};



