#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"


TEST_CASE("Test LZespolona odejmowanie liczb zespolonych 1") {
    LZespolona x, y, z;
    
    x.re = 2;
    x.im = -3;

    y.re = 4;
    y.im = 7;

    z.re = -2;
    z.im = -10;
   
    CHECK(x-y == z);
}

TEST_CASE("Test LZespolona odejmowanie liczb zespolonych 1") {
    LZespolona x, y, z;
    
    x.re = 1.2;
    x.im = 3.66;

    y.re = 4.25;
    y.im = 7.125;

    z.re = -3.05;
    z.im = -3.465;
   
    CHECK(x-y == z);
}

TEST_CASE("Test LZespolona odejmowanie liczb zespolonych 1") {
    LZespolona x, y, z;
    
    x.re = 5;
    x.im = 11;

    y.re = 4;
    y.im = -8;

    z.re = 1;
    z.im = 19;
   
    CHECK(x-y == z);
}

