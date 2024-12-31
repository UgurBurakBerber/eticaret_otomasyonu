//
// Created by Uğur Burak Berber on 31.12.2023.
//
#pragma once
#include "ortak_veri_sinifi.h"

class siparisUrunu : public ortak_veri_sinifi {
private:
    Metin _siparis;
    Metin _urun;
    kusuratliSayi _birimFiyat;
    Tamsayi _siparisUrunTanimlayici;
public:
    const Metin &getSiparis() const;

    void setSiparis(const Metin &siparis);

    const Metin &getUrun() const;

    void setUrun(const Metin &urun);


    kusuratliSayi getBirimFiyat() const;

    void setBirimFiyat(kusuratliSayi birimFiyat);

    Tamsayi getSiparisUrunTanimlayici() const;

    void setSiparisUrunTanimlayici(Tamsayi siparisUrunTanimlayici);

    siparisUrunu();

};
