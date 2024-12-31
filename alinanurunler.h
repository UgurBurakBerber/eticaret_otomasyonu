//
// Created by Uğur Burak Berber on 31.12.2023.
//

#pragma once
#include "ortak_veri_sinifi.h"
#include "../Konteynirlar.h"

class alinanurunler : public ortak_veri_sinifi {
private:
    kusuratliSayi _alisFiyati;
    Stok _adet;
    Tamsayi _urunTanimlayici;
    Tamsayi _alisTanimlayici;

public:

    [[nodiscard]] urunPtr geturun() const;
    [[nodiscard]] siparisPtr getsiparis() const;


    kusuratliSayi getAlisFiyati() const;

    void setAlisFiyati(kusuratliSayi alisFiyati);

    Stok getAdet() const;

    void setAdet(Stok adet);

    Tamsayi getUrunTanimlayici() const;

    void setUrunTanimlayici(Tamsayi urunTanimlayici);

    Tamsayi getAlisTanimlayici() const;

    void setAlisTanimlayici(Tamsayi alisTanimlayici);

    alinanurunler();

};


