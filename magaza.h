//
// Created by Uğur Burak Berber on 31.12.2023.
//
#pragma once
#include "ortak_veri_sinifi.h"

class magaza : public ortak_veri_sinifi {
private:
    Metin _urunn;
public:
    const Metin &getUrunn() const;

    void setUrunn(const Metin &urunn);

private:
    Metin _yetkiliAdi;
    Metin _yetkiliAdresi;
    Metin _yetkiliTelefon;
public:
    const Metin &getYetkiliAdi() const;

    void setYetkiliAdi(const Metin &yetkiliAdi);

    const Metin &getYetkiliAdresi() const;

    void setYetkiliAdresi(const Metin &yetkiliAdresi);

    const Metin &getYetkiliTelefon() const;

    void setYetkiliTelefon(const Metin &yetkiliTelefon);

    magaza();
};

