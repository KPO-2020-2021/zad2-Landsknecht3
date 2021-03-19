#include "Statystyki.hh"
#include <iostream>
#include <cmath>


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
void statystyka(BazaTestu BT, LZespolona odp, LZespolona wynik)
{
    int p, n;
    if(odp==wynik)
        {p++;}
    else
        {n++;}
    if(p+n==BT.IloscPytan)
    {
        std::cout << "Ilosc poprawnych odpowiedzi:" << p << std::endl;
        std::cout << "Ilosc niepoprawnych odpowiedzi" << n << std::endl;
        std::cout << "Wynik procentowych poprawnych odpowiedzi:" << 100*p/BT.IloscPytan << "%" << std::endl;
    }

}