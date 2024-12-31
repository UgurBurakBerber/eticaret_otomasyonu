//
// Created by Uğur Burak Berber on 31.12.2023.
//
#pragma once

#include "Konteynir.h"

#include "ortak.h"

#define VERI(V) \
using V ## Konteynir = Konteynir<V>; \
using V ## Ptr = V ## Konteynir::Ptr; \
using V ## Vektor = V ## Konteynir::Vektor; \
using V ## Fonksiyon = V ## Konteynir::Fonksiyon; \
using V ## ZatenVar = V ## Konteynir::ZatenVarHatasi; \
using V ## Bulunamadi =  V ## Konteynir::KayitBulunamadiHatasi; \


VERI(siparis)
VERI(urun)
VERI(magaza)
VERI(alinanurunler)
VERI(musteri)
VERI(urunOzellik)
VERI(urunYorum)
VERI(urunKategorisi)
VERI(siparisUrunu)