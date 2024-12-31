#include <iostream>
#include "veri/Denetleyici.h"
#include "veri/kusuratliSayi.h"
#include "veri/Konteynir.h"


void deneme(){

    auto urun = Denetleyici::d().getUrunler().yeni_yer_olustur();

    urun->setUrunAdi("Bilgisayar");
    urun->setUrunFiyati(20000);

    Denetleyici::d().getUrunler().ekle(urun);

    auto alisFaturasi = Denetleyici::d().getSiparisler().yeni_yer_olustur();

    alisFaturasi->setFaturaNo(12345);
    alisFaturasi->setTarih("2024-01-02");

    Denetleyici::d().getSiparisler().ekle(alisFaturasi);

    Konteynir::Ptr alinanBilgisayar;
    alinanBilgisayar = Denetleyici::d().getAlinanurunlerr().yeni_yer_olustur();
    alinanBilgisayar->setAlisFiyati(30000);
    alinanBilgisayar->setAdet(100);
    alinanBilgisayar->setUrunTanimlayici(urun->get_tanimlayici());
    alinanBilgisayar->setAlisTanimlayici(alisFaturasi->get_tanimlayici());


    Denetleyici::d().getAlinanurunlerr().ekle(alinanBilgisayar);

    alinanBilgisayar = Denetleyici::d().getAlinanurunlerr().yeni_yer_olustur();

    alinanBilgisayar->setAlisFiyati(80000);
    alinanBilgisayar->setAdet(45);
    alinanBilgisayar->setUrunTanimlayici(siparis().get_tanimlayici());
    alinanBilgisayar->setAlisTanimlayici(alisFaturasi->get_tanimlayici());


    Denetleyici::d().getAlinanurunlerr().ekle(alinanBilgisayar);

}
void deneme();

void deneme1();

void deneme2();

int main() {

    kusuratliSayi a = 5;
    kusuratliSayi b = 7.54;
    kusuratliSayi c = a;
    kusuratliSayi d = -5;
    kusuratliSayi f = -7.54;
    kusuratliSayi g = d;
    kusuratliSayi s{7.5400, 4};

    std::cout << "A=" << a << "B=" << b << "C=" << c << std::endl;
    std::cout << "A+B" << a+b << " " << a << " " << b << std::endl;
    std::cout << "S+B" << d+s << " " << a << " " << b << std::endl;
    std::cout << "B+2.10" << b + 2.10 <<std::endl;


    deneme();
    deneme1();
    deneme2();


    /*auto b = Denetleyici::d().getMagazalar().yeni_yer_olustur();
    auto c = Denetleyici::d().getUrunler().yeni_yer_olustur();*/

}

void deneme2() {
    auto faturalar = Denetleyici::d().getSiparisler().arama(
            [](const siparisPtr &p){
               return true;
            });
    auto fatura = faturalar[0];

    auto fatura_toplami = 0.0f;

    for (const auto &urun: fatura->urunler()) {

        fatura_toplami += urun->getAdet() *urun->getAlisFiyati();
    }

    std::cout << "Fatura Toplami: " << fatura_toplami << std::endl;
}

void deneme1() {
    auto alinanUrunler = Denetleyici::d().getAlinanurunlerr().arama(
            [](alinanurunlerPtr &p){
       return true;
    });

    auto alinanUrun = alinanUrunler[0];
    std::cout <<"Ürun Adi: " << alinanUrun->geturun()->getUrunAdi() << std::endl;
    std::cout <<"Urun alis tarihi: " << alinanUrun->getsiparis()->getTarih() << std::endl;



}



/*
Konteynir<magaza> h;

auto yeni = h.yeni_yer_olustur();
h.ekle(yeni);

Konteynir<urun> h1;
auto yeni1 = h1.yeni_yer_olustur();
h1.ekle(yeni1);

Konteynir<siparisUrunu> h2;
auto yeni2 = h2.yeni_yer_olustur();
h2.ekle(yeni2);

//
auto yeni = h.yeni_yer_olustur();
try {
h.ekle(yeni);
} catch (Konteynir::ZatenVarHatasi &hatasi) {
    std::cerr << hatasi.what() << std::endl;
} catch (std::exception &e) {
    std::cerr <<< e.what() << std::endl;
}

Tamsayi tanimlayici;
std::cin>> tanimlayici;

Metin telefon;
std::cin >> telefon;


// Lambda Fonksiyon
auto f5 = [tanimlayici](){
    std::cout << tanimlayici;
    return 1;
}; //

Tamsayi tanimlayici;
std::cin>> tanimlayici;

Metin telefon;
std::cin >> telefon;

h.arama([tanimlayici, telefon](std::shared_ptr<magaza> &i){
    if (i->get_tanimlayici() == tanimlayici)
        return true;
    if(i->get_telefon() == telefon) {
        return true;
    }
    return false;
});
}*/