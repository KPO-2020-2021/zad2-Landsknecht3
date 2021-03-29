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

TEST_CASE("Test LZespolona odejmowanie liczb zespolonych 2") {
    LZespolona x, y, z;
    
    x.re = 1.2;
    x.im = 3.66;

    y.re = 4.25;
    y.im = 7.125;

    z.re = -3.05;
    z.im = -3.465;
   
    CHECK(x-y == z);
}

TEST_CASE("Test LZespolona odejmowanie liczb zespolonych 3") {
    LZespolona x, y, z;
    
    x.re = 5;
    x.im = 11;

    y.re = 4;
    y.im = -8;

    z.re = 1;
    z.im = 19;
   
    CHECK(x-y == z);
}
TEST_CASE("test LZespolona odejmowanie liczb zespolonych 4"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 0;

    z.re = 1;
    z.im = 1;
    
    CHECK(x-y == z);
}
TEST_CASE("test LZespolona odejmowanie liczb zespolonych 5"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.0;
    y.im = 0.0;

    z.re = 1;
    z.im = 1;
    
    CHECK(x-y == z);
}
TEST_CASE("test LZespolona odejmowanie liczb zespolonych 6"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.00001;
    y.im = 0.00001;

    z.re = 0.99999;
    z.im = 0.99999;
    
    CHECK(x-y == z);
}
TEST_CASE("test LZespolona odejmowanie liczb zespolonych"){
    LZespolona x, y, z;

    x.re = 0.00009;
    x.im = 0.00009;

    y.re = 0.00001;
    y.im = 0.00001;

    z.re = 0.00008;
    z.im = 0.00008;
    
    CHECK(x-y == z);
}
