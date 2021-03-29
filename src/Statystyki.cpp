#include "Statystyki.hh"
#include "BazaTestu.hh"
#include <iostream>
#include <cmath>


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
/*
* Realizuje porownanie odpowiedzi uzytkownika z obliczonym wynikem przez funkcje Oblicz z pliku WyrazenieZesp.cpp 
* oraz prowadzi statystyke poprawnych odpowiedzi
* Argumenty:
* int p - liczba poprawnych odpowiedzi
* LZespolona odp - odpowiedz na wyrazenie zespolone podana przez uzytkownika
* LZespolona wynik - wynik wyrazenia zespolonego obliczonego przez funkcje oblicz z pliku WyrazenieZesp.cpp
* Zwraca:
* Wyswietla komunikat czy odpowiedz uzytkownika byla poprawna czy nie oraz zwraca wartosc zmiennej p zmieniona lub nie
* zaleznie od wyniku porownania zmiennych odp i wynik
*
*/
int porownanie(int p, LZespolona odp, LZespolona wynik)
{
    
    if(odp == wynik)
    {
      std::cout << "Poprawna odpowiedz" << std::endl;
      p++;
    }
    else
    {
      std::cout << "Niepoprawna odpowiedz. Poprawna to:" << wynik << std::endl;
    }
    return p;
}

/*
* Realizuje wyswietlenie statystyki odpowiedzi uzytkownika
* Argumenty:
* int p - liczba poprawnych odpowiedzi
* BT.IloscPytan - ilosc pytan w zestawie
* Zwraca:
* Wyswietla ilosc poprawnych i niepoprawnych odpowiedzi uzytkownika oraz procentowy wynik jego testu
*/
void statystyka(int p, BazaTestu BT)
{
    
    std::cout << "Ilosc poprawnych odpowiedzi:" << p << std::endl;
    std::cout << "Ilosc niepoprawnych odpowiedzi:" << BT.IloscPytan-p << std::endl;
    std::cout << "Wynik procentowy poprawnych odpowiedzi:" << 100*p/BT.IloscPytan << "%" << std::endl;
    std::cout << "Wynik procentowy niepoprawnych odpowiedzi:" << 100*(BT.IloscPytan-p)/BT.IloscPytan << "%" << std::endl;
    
}