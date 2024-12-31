//
// Created by Uğur Burak Berber on 1.01.2024.
//

#include "kusuratliSayi.h"
#include "iostream"

kusuratliSayi::kusuratliSayi():
            _sayi{0},
            _isaret{false},
            _kusurat_sayisi{2} {

}

kusuratliSayi::kusuratliSayi(const kusuratliSayi &diger):
            _sayi{diger._sayi},
            _isaret{diger._isaret},
            _kusurat_sayisi {diger._kusurat_sayisi}{

   // _sayi = diger._sayi; böyle de yazılabilir..

}

kusuratliSayi::kusuratliSayi(int diger, kusuratliSayi::Kusurat _kusurat_sayisi):
            _sayi{(diger < 0 ? - diger : diger)},
            _isaret{diger < 0},
            _kusurat_sayisi{_kusurat_sayisi} {

    /*if (diger < 0) {
        _sayi = -diger;
    } else {
        _sayi = diger;
    }*/
    _sayi *= kusuratAyiraci();


}

kusuratliSayi::kusuratliSayi(double diger, kusuratliSayi::Kusurat _kusurat_sayisi) {
    _isaret = false;
    if(diger < 0) {
        _isaret = true;
        diger = -diger;

    }
    _kusurat_sayisi = _kusurat_sayisi;

    diger *= kusuratAyiraci();
    _sayi = (Sayi)diger;

}

bool kusuratliSayi::operator==(const kusuratliSayi &b) const {
    if (b._kusurat_sayisi == b._kusurat_sayisi) {
        if(_sayi == b._sayi && _isaret == b._isaret)
            return true;
        else
            return false;
    }
    if (_isaret != b._isaret) {
        return false;
    }

    auto A_tam =_sayi / kusuratAyiraci();
    auto B_tam = b._sayi / b.kusuratAyiraci();

    if (A_tam != B_tam) {
        return false;
    }

    auto A_kusurat = _sayi % kusuratAyiraci();
    auto B_kusurat = b._sayi % b.kusuratAyiraci();

    auto fark = std::max(kusuratAyiraci(), b.kusuratAyiraci()) /
                std::min(kusuratAyiraci(), b.kusuratAyiraci());

    if (A_kusurat < B_kusurat) {
        A_kusurat *= fark;
    } else {
        B_kusurat *= fark;
    }
    if(A_kusurat != B_kusurat){
        return false;
    }
    return true;
}

bool kusuratliSayi::operator<(const kusuratliSayi &b) const {
    if(_isaret && !b._isaret) { // ! tersine çevir demek..
        return true;
    }
    if (!_isaret && b._isaret) {
        return false;
    }

    auto a_tamKisim = _sayi / kusuratAyiraci();
    auto b_tamKisim = b._sayi / b.kusuratAyiraci();

    if(a_tamKisim != b_tamKisim){
        if (_isaret) {
            return a_tamKisim > b_tamKisim;
        } else {
            return a_tamKisim < b_tamKisim;
        }
    }
    auto a_kusurat = _sayi % kusuratAyiraci();
    auto b_kusurat = b._sayi % b.kusuratAyiraci();

    auto fark = std::max(kusuratAyiraci(), b.kusuratAyiraci()) /
                std::min(kusuratAyiraci(), b.kusuratAyiraci());

    if (a_kusurat < b_kusurat) {
        a_kusurat *= fark;
    } else {
        b_kusurat *= fark;
    }
    if (_isaret) {
        return a_kusurat > b_kusurat;
    } else {
        return a_kusurat < b_kusurat;
    }
}

bool kusuratliSayi::operator<=(const kusuratliSayi &b) const {
    return (*this <b) || (*this == b); // *this a'yı kullandığımızı işaret eder
}

bool kusuratliSayi::operator>(const kusuratliSayi &b) const {
    return !(*this <= b);
}

bool kusuratliSayi::operator>=(const kusuratliSayi &b) const {
    return !(*this < b);
}

bool kusuratliSayi::operator!=(const kusuratliSayi &b) const {
    return !(*this ==b);
}

std::ostream &operator<<(std::ostream &out, const kusuratliSayi &x) {
    if(x._isaret){ // friend yazıldıktan sonra kontrol bizdedir artık ekrana istediğimizi yazdırabiliriz..
        out << "-";
    }
    auto tamKisim = x._sayi / x.kusuratAyiraci();
    auto kusurat = x._sayi % x.kusuratAyiraci();
    out << tamKisim;
    out << "-";
    auto kusuratAyiraci = x.kusuratAyiraci()/10;
    while (kusuratAyiraci > 0){
        auto hane = kusurat / (kusuratAyiraci/10);
        out << hane;
        kusurat %= kusuratAyiraci;
        kusurat /= 10;

    }
    out << kusurat;
    return out; // ekrana gider
}

kusuratliSayi kusuratliSayi::operator+(const kusuratliSayi &b) const {
    if(_isaret ==b._isaret && _kusurat_sayisi == b._kusurat_sayisi) {
        kusuratliSayi sonuc;
        sonuc._sayi = _sayi + b._sayi;
        sonuc._isaret = _isaret;
        sonuc._kusurat_sayisi = _kusurat_sayisi;
        return sonuc;
    }

    if(_kusurat_sayisi !=b._kusurat_sayisi) {
        auto fark = std::max(kusuratAyiraci(), b.kusuratAyiraci()) /
                    std::min(kusuratAyiraci(), b.kusuratAyiraci());
        if(_kusurat_sayisi < b._kusurat_sayisi) {
            kusuratliSayi gecici(*this);
            gecici._sayi *= fark;
            gecici._kusurat_sayisi =b._kusurat_sayisi;
            return gecici + b;
        } else {
            kusuratliSayi gecici(b);
            gecici._sayi *= fark;
            gecici._kusurat_sayisi =_kusurat_sayisi;
            return *this + gecici;
         }
    }




}

