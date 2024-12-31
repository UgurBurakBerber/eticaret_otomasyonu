//
// Created by Uğur Burak Berber on 1.01.2024.
//

#pragma once

#include "Konteynirlar.h"

#include "veriler/alinanurunler.h"
#include "veriler/magaza.h"
#include "veriler/musteri.h"
#include "veriler/siparis.h"
#include "veriler/urun.h"
#include "veriler/siparisUrunu.h"
#include "veriler/urunKategorisi.h"
#include "veriler/urunOzellik.h"
#include "veriler/urunYorum.h"

class Denetleyici {
public:

    static Denetleyici &d();

     alinanurunlerKonteynir &getAlinanurunlerr() ;

     magazaKonteynir &getMagazalar() ;

     musteriKonteynir &getMusteriler() ;

     siparisKonteynir &getSiparisler() ;

     siparisUrunuKonteynir &getSiparisUrunleri() ;

     urunKonteynir &getUrunler() ;

     urunKategorisiKonteynir &getKategoriler() ;

     urunOzellikKonteynir &getOzellikler() ;

     urunYorumKonteynir &getYorumlar() ;

private:
    alinanurunlerKonteynir _alinanurunlerr;
    magazaKonteynir _magazalar;
    musteriKonteynir _musteriler;
    siparisKonteynir _siparisler;
    siparisUrunuKonteynir _siparisUrunleri;
    urunKonteynir _urunler;
    urunKategorisiKonteynir _kategoriler;
    urunOzellikKonteynir _ozellikler;
    urunYorumKonteynir _yorumlar;

    Denetleyici();

};



