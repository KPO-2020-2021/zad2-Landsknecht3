#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"


TEST_CASE("Test LZespolona dzielenie liczby zespolonej przez liczbe zespolona 1") {
    LZespolona x, y, z;
    
    x.re = 2;
    x.im = -3;

    y.re = 4;
    y.im = 7;

    z.re = -0.2;
    z.im = -0.4;
   
    CHECK(x/y == z);
}

TEST_CASE("Test LZespolona dzielenie liczby zespolonej przez liczbe zespolona 2") {
    LZespolona x, y, z;
    
    x.re = 1.2;
    x.im = 11.0/3.0;

    y.re = 4.25;
    y.im = 7.125;

    z.re = 0.4391;
    z.im = 0.0949;
   
    CHECK(x/y == z);
}

TEST_CASE("Test LZespolona dzielenie liczby zespolonej przez liczbe zespolona 3") {
    LZespolona x, y, z;
    
    x.re = 5;
    x.im = 11;

    y.re = 4;
    y.im = 8;

    z.re = 1.35;
    z.im = 0.05;
   
    CHECK(x/y == z);
}
TEST_CASE("Test LZespolona dzielenie liczby zespolonej przez liczbe zespolona 4") {
    LZespolona x, y;
    
    x.re = 1.8;
    x.im = -3.4;

    y.re = 0;
    y.im = 0;
   
    WARN_THROWS(x/y);
}
TEST_CASE("Test LZespolona operator /= 1") {
    LZespolona x, y, z;
    
    x.re = 2;
    x.im = -3;

    y.re = 4;
    y.im = 7;

    z.re = -0.2;
    z.im = -0.4;
   
    CHECK((x/=y) == z);
}

TEST_CASE("Test LZespolona operator /= 2") {
    LZespolona x, y, z;
    
    x.re = 1.2;
    x.im = 11.0/3.0;

    y.re = 4.25;
    y.im = 7.125;

    z.re = 0.4391;
    z.im = 0.0949;
   
    CHECK((x/=y) == z);
}

TEST_CASE("Test LZespolona operator /= 3") {
    LZespolona x, y, z;
    
    x.re = 5;
    x.im = 11;

    y.re = 4;
    y.im = 8;

    z.re = 1.35;
    z.im = 0.05;
   
    CHECK((x/=y) == z);
}
TEST_CASE("Test LZespolona operator /= 4") {
    LZespolona x, y;
    
    x.re = 1.8;
    x.im = -3.4;

    y.re = 0;
    y.im = 0;
   
    WARN_THROWS(x/=y);
}