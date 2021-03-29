#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"
#include "Statystyki.hh"
#include "BazaTestu.hh"


TEST_CASE("Test LZespolona statystyka 1") {
  BazaTestu BazaT;
  int p=0;
  BazaT.IloscPytan = 4;
  WyrazenieZesp x;
  LZespolona y, z;

    /* Tu jest poprawna odpowiedz*/
    x.Arg1.re = 5; x.Arg1.im = 6;
    x.Arg2.re = 3; x.Arg2.im = -7;
    x.Op = Op_Dodaj;
    y = Oblicz(x);
    z.re = 8; z.im = -1;
    p = porownanie(p, z, y);

    /* Tu jest poprawna odpowiedz*/
    x.Arg1.re = (2.0/5.0); x.Arg1.im = (-3.0/2.0);
    x.Arg2.re = (4.0/7.0); x.Arg2.im = (9.0/11.0);
    x.Op = Op_Mnoz;
    y = Oblicz(x);
    z.re = 1.4558; z.im = -0.5298;
    p = porownanie(p, z, y);

    /* Tu jest poprawna odpowiedz*/
    x.Arg1.re = 5.1289; x.Arg1.im = 6.6547;
    x.Arg2.re = 3.1234; x.Arg2.im = -7.6347;
    x.Op = Op_Odejmij;
    y = Oblicz(x);
    z.re = 2.0055; z.im = 14.2894;
    p = porownanie(p, z, y);

    /* Tu jest niepoprawna odpowiedz*/
    x.Arg1.re = 1.2; x.Arg1.im = 11.0/3.0;
    x.Arg2.re = 4.25; x.Arg2.im = 7.125;
    x.Op = Op_Dziel;
    y = Oblicz(x);
    z.re = 23; z.im = 0.0949;
    p = porownanie(p, z, y);
/* Maja byc 3 dobre odpowiedzi jedna zla*/
statystyka(p, BazaT);
}

