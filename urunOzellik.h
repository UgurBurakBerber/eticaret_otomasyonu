//
// Created by Uğur Burak Berber on 31.12.2023.
//

#pragma once
#include "ortak_veri_sinifi.h"
class urunOzellik : public ortak_veri_sinifi {
private:
    Metin _urunOzellikleri;
    Tamsayi _ozellikTanimlayici;
public:
    const Metin &getUrunOzellikleri() const;

    void setUrunOzellikleri(const Metin &urunOzellikleri);

    Tamsayi getOzellikTanimlayici() const;

    void setOzellikTanimlayici(Tamsayi ozellikTanimlayici);

    urunOzellik();

};



