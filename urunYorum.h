//
// Created by Uğur Burak Berber on 31.12.2023.
//

#pragma once
#include "ortak_veri_sinifi.h"

class urunYorum : public ortak_veri_sinifi {
private:
    Metin _urunYorumu;
    Tamsayi _yorumTanimlayici;
public:
    const Metin &getUrunYorumu() const;

    void setUrunYorumu(const Metin &urunYorumu);

    Tamsayi getYorumTanimlayici() const;

    void setYorumTanimlayici(Tamsayi yorumTanimlayici);

    urunYorum();

};



