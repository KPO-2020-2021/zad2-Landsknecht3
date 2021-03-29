#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"


TEST_CASE("Test LZespolona sprzezenie 1") {
    LZespolona x;
    
    x.re = 1;
    x.im = 1;

    std::cout << x << std::endl;
    x = Sprzezenie(x);
    std::cout << "Sprzezenie:" << x << std::endl;
   
}
TEST_CASE("Test LZespolona sprzezenie 2") {
    LZespolona x;
    
    x.re = 1;
    x.im = 0;

    std::cout << x << std::endl;
    x = Sprzezenie(x);
    std::cout << "Sprzezenie:" << x << std::endl;
   
}
TEST_CASE("Test LZespolona modul kwadrat 1") {
    LZespolona x;
    double y, z;
    x.re = 2;
    x.im = 3;
    z = 13;
    y = Modul2(x);
    CHECK(y == z);
   
}
TEST_CASE("Test Wyrazenie LZespolona obliczanie 1") {
    WyrazenieZesp x;
    LZespolona y, z;
    x.Arg1.re = 5; x.Arg1.im = 6;
    x.Arg2.re = 3; x.Arg2.im = -7;
    x.Op = Op_Dodaj;
    y = Oblicz(x);
    z.re = 8; z.im = -1;
   CHECK(y == z);
}
TEST_CASE("Test Wyrazenie LZespolona obliczanie 2") {
    WyrazenieZesp x;
    LZespolona y, z;
    x.Arg1.re = (2.0/5.0); x.Arg1.im = (-3.0/2.0);
    x.Arg2.re = (4.0/7.0); x.Arg2.im = (9.0/11.0);
    x.Op = Op_Mnoz;
    y = Oblicz(x);
    z.re = 1.4558; z.im = -0.5298;
   CHECK(y == z);
}
TEST_CASE("Test Wyrazenie LZespolona obliczanie 3") {
    WyrazenieZesp x;
    LZespolona y, z;
    x.Arg1.re = 5.1289; x.Arg1.im = 6.6547;
    x.Arg2.re = 3.1234; x.Arg2.im = -7.6347;
    x.Op = Op_Odejmij;
    y = Oblicz(x);
    z.re = 2.0055; z.im = 14.2894;
   CHECK(y == z);
}
TEST_CASE("Test Wyrazenie LZespolona obliczanie 4") {
    WyrazenieZesp x;
    LZespolona y, z;
    x.Arg1.re = 1.2; x.Arg1.im = 11.0/3.0;
    x.Arg2.re = 4.25; x.Arg2.im = 7.125;
    x.Op = Op_Dziel;
    y = Oblicz(x);
    z.re = 0.4391; z.im = 0.0949;
   CHECK(y == z);
}