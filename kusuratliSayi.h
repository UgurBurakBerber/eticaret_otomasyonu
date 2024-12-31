//
// Created by Uğur Burak Berber on 1.01.2024.
//
#pragma once

#include <memory>
#include <algorithm>

class kusuratliSayi {
public:
    using Sayi = int64_t;
    using Isaret = bool;
    using Kusurat = unsigned char;


        /* 1- İlklendirme */
    kusuratliSayi(); // ilklendirici
    kusuratliSayi(const kusuratliSayi &diger);
    kusuratliSayi(int diger, Kusurat _kusurat_sayisi = 2);
    kusuratliSayi(double diger, Kusurat _kusurat_sayisi = 2);


    /* 2- Aritmetik işlemler*/
    kusuratliSayi operator+(const kusuratliSayi &b) const;
    // const denir çünkü ne a değişir ne b değişir değişmeyeceği için const denir


    /* 3- Karşılaştırma  */

    /* */
    bool operator == (const kusuratliSayi &b) const;
    bool operator != (const kusuratliSayi &b) const;
    bool operator <(const kusuratliSayi &b) const;
    bool operator <=(const kusuratliSayi &b) const;
    bool operator > (const kusuratliSayi &b) const;
    bool operator >= (const kusuratliSayi &b) const;


private:

    inline Sayi kusuratAyiraci() const {
        Sayi sonuc = 1;
        for(auto i=0; i< _kusurat_sayisi; i++) // for'un sonuna " ; " konulmaz
            sonuc *= 10;
        return sonuc;
    }

    Sayi _sayi;
    Isaret _isaret;
    Kusurat _kusurat_sayisi;

    // Genel Kalıp
    friend std::ostream &operator << (std::ostream &out, const kusuratliSayi &x); // ostreamdir
};



