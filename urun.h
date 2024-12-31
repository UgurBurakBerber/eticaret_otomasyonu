//
// Created by Uğur Burak Berber on 31.12.2023.
//

#pragma once
#include "ortak_veri_sinifi.h"

class urun : public ortak_veri_sinifi {
private:
    Metin _urunAdi;
    Metin _urunKodu;
    kusuratliSayi _urunFiyati;
    Metin _urunAciklamasi;
    Tamsayi _urunTanimlayicisi;
public:
    const Metin &getUrunAdi() const;

    void setUrunAdi(const Metin &urunAdi);

    const Metin &getUrunKodu() const;

    void setUrunKodu(const Metin &urunKodu);

    [[nodiscard]] const kusuratliSayi & getUrunFiyati() const;

    void setUrunFiyati(const kusuratliSayi urunFiyati);

    const Metin &getUrunAciklamasi() const;

    void setUrunAciklamasi(const Metin &urunAciklamasi);

    Tamsayi getUrunTanimlayicisi() const;

    void setUrunTanimlayicisi(Tamsayi urunTanimlayicisi);


    urun();
};


