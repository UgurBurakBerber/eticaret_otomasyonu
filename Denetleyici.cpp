//
// Created by Uğur Burak Berber on 1.01.2024.
//

#include "Denetleyici.h"



alinanurunlerKonteynir &Denetleyici::getAlinanurunlerr()  {
    return _alinanurunlerr;
}

magazaKonteynir &Denetleyici::getMagazalar(){
    return _magazalar;
}

musteriKonteynir &Denetleyici::getMusteriler()  {
    return _musteriler;
}

siparisKonteynir &Denetleyici::getSiparisler()  {
    return _siparisler;
}

siparisUrunuKonteynir &Denetleyici::getSiparisUrunleri()  {
    return _siparisUrunleri;
}

urunKonteynir &Denetleyici::getUrunler()  {
    return _urunler;
}

 urunKategorisiKonteynir &Denetleyici::getKategoriler()  {
    return _kategoriler;
}

 urunOzellikKonteynir &Denetleyici::getOzellikler()  {
    return _ozellikler;
}

 urunYorumKonteynir &Denetleyici::getYorumlar()  {
    return _yorumlar;
}

Denetleyici::Denetleyici() {

}
Denetleyici &Denetleyici::d() {
    static Denetleyici nesne;
    nesne;

}
