#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"


TEST_CASE("Test LZespolona mnozenie liczb zespolonych 1") {
    LZespolona x, y, z;
    
    x.re = 2;
    x.im = -1;

    y.re = 2;
    y.im = -1;

    z.re = 3;
    z.im = -4;
   
    CHECK(x*y == z);
}

TEST_CASE("Test LZespolona mnozenie liczb zespolonych 2") {
    LZespolona x, y, z;
    
    x.re = 5;
    x.im = 2;

    y.re = 3;
    y.im = -7;

    z.re = 29;
    z.im = -29;
   
    CHECK(x*y == z);
}

TEST_CASE("Test LZespolona mnozenie liczb zespolonych 3") {
    LZespolona x, y, z;
    
    x.re = 4;
    x.im = -7;

    y.re = 5;
    y.im = 3;

    z.re = 41;
    z.im = -23;
   
    CHECK(x*y == z);
}
TEST_CASE("Test LZespolona mnozenie liczb zespolonych 4") {
    LZespolona x, y, z;
    
    x.re = (2.0/5.0);
    x.im = (-3.0/2.0);

    y.re = (4.0/7.0);
    y.im = (9.0/11.0);

    z.re = 1.4558;
    z.im = -0.5298;
   
    CHECK(x*y == z);
}
TEST_CASE("Test LZespolona mnozenie liczb zespolonych 5") {
    LZespolona x, y, z;
    
    x.re = 1.8;
    x.im = -3.4;

    y.re = 4.6;
    y.im = 7.66;

    z.re = 34.324;
    z.im = -1.852;
   
    CHECK(x*y == z);
}
