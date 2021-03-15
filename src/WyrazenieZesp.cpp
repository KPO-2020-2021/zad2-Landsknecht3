#include "WyrazenieZesp.hh"
#include <iostream>
using namespace std;

/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

void wyswietlanie(LZespolona Skl)
{
    cout << "(" << Skl.re;
    if(Skl.im >= 0)
    {
        cout << "+" << Skl.im << "i)";
    }
    else
    {
        cout << Skl.im << "i)";
    }
}

LZespolona Oblicz(WyrazenieZesp WyrZ)
{
    LZespolona wynik;
    switch (WyrZ.Op)
    {
    case 0:
        wynik = WyrZ.Arg1+WyrZ.Arg2;
        return wynik;
        break;
    case 1:
        wynik = WyrZ.Arg1-WyrZ.Arg2;
        return wynik;
        break;
    case 2:
        wynik = WyrZ.Arg1*WyrZ.Arg2;
        return wynik;
        break;
    case 3:
        wynik = WyrZ.Arg1/WyrZ.Arg2;
        return wynik;
        break;
    default:
        break;
    }
}
void Wyswietl(WyrazenieZesp  WyrZ)
{
    cout << "Podaj wynik operacji:\t";
    wyswietlanie(WyrZ.Arg1);
    switch (WyrZ.Op)
    {
    case 0:
        cout << " + ";
        break;
    case 1:
        cout << " - ";
        break;
    case 2:
        cout << " * ";
        break;
    case 3:
        cout << " / ";
        break;
    default:
        break;
    }
    wyswietlanie(WyrZ.Arg2);
    cout << " = "; cout << endl;
}
bool wczytajiporownaj(LZespolona Wynik)
{
   istream& getline(istream& is, string& str, char delim);

   
}


    