//
// Created by Uğur Burak Berber on 31.12.2023.
//

#pragma once
#include "ortak_veri_sinifi.h"
#include "../Konteynirlar.h"

class siparis : public ortak_veri_sinifi {

private:
    Tarih _tarih;
    Metin _firma;
    Metin _musteri;
    Tamsayi _siparisTanimlayici;
    Tamsayi _faturaNo;

public:

    [[nodiscard]] alinanurunlerVektor urunler() const;

    Tamsayi getFaturaNo() const;

    void setFaturaNo(Tamsayi faturaNo);

    const Tarih &getTarih() const;

    void setTarih(const Tarih &tarih);

    const Metin &getFirma() const;

    void setFirma(const Metin &firma);

    const Metin &getMusteri() const;

    void setMusteri(const Metin &musteri);

    Tamsayi getSiparisTanimlayici() const;

    void setSiparisTanimlayici(Tamsayi siparisTanimlayici);

    siparis();



};


