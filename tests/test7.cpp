#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"


TEST_CASE("Test LZespolona wyswietlanie 1") {
    LZespolona x;
    
    x.re = 5;
    x.im = 6;
    std::cout << "LZespolona:" << x << std::endl;
   
}
TEST_CASE("Test Wyrazenie LZespolona wyswietlanie 1") {
    WyrazenieZesp x;
    x.Arg1.re = 5; x.Arg1.im = 6;
    x.Arg2.re = 3; x.Arg2.im = -7;
    x.Op = Op_Dodaj;

    
    std::cout << "Wyrazenie LZespolona:\t" << x << std::endl;
   
}
TEST_CASE("Test LZespolona wczytywanie 1") {
    LZespolona x,z;
    std::istringstream in("(24-16i)");
    in >> x;
    z.re = 24; z.im = -16;
   CHECK(x == z);
}

