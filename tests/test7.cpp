#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"


TEST_CASE("Test LZespolona wyswietlanie 1") {
    LZespolona x;
    
    x.re = 5.36;
    x.im = 17.54;
    
    std::ostringstream out;
    
    out << x;
    std::cout << out.str() << std::endl;
    CHECK( "(5.36+17.54i)" == out.str() );
   
}
/*TEST_CASE("Test wyrazenie LZespolona wyswietlanie")
{
    WyrazenieZesp wyr;
    wyr.Arg1.re = 2; wyr.Arg1.im = -6;
    wyr.Arg2.re = 17; wyr.Arg2.im = 4;
    wyr.Op = Op_Dodaj;
    std::ostringstream out;
    out << wyr;
    std::cout << out.str();
    CHECK("(2-6i)+(17+4i)=" == out.str());
}*/
TEST_CASE("Test LZespolona wczytywanie 1") {
    LZespolona x,z;
    std::istringstream in("(24-16i)");
    in >> x;
    z.re = 24; z.im = -16;
   CHECK(x == z);
}

