#include "WyrazenieZesp.hh"



/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
/*
* Realizuje wyswietlenie liczby zespolonej
* Argumenty:
* Lz - liczba zespolona ktora ma byc wyswietlona
* Zwraca:
* Wyswietlenie liczby zespolonej w terminalu
*/
void wyswietlanie(LZespolona Lz)
{
    std::cout << "(" << Lz.re << std::showpos << Lz.im << std::noshowpos << "i)";
}
/*
* Realizuje obliczenia dzialan arytmetycznych na liczbach zespolonych
* Argumenty:
* WyrZ - wyrazenie liczb zespolonych ktore ma byc obliczone
*Zwraca:
*   Wynik dzialan arytmetycznych na liczbach zespolonych
*/
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
/*
* Realizuje wyswietlenie wyrazenia liczb zespolonych
* Argumenty:
* WyrZ - wyrazenie liczb zespolonych ktore ma byc wyswietlone
* TabSymOp - tablica znakow operatorow arytmetycznych sluzaca do ich wyswietlania
* Zwraca:
*   Wyswietlone wyrazenie liczb zespolonych w terminalu
*/
void Wyswietl(WyrazenieZesp  WyrZ)
{
    const char TabSymOp[] ="+-*/";
    std::cout << "Podaj wynik operacji:\t";
    wyswietlanie(WyrZ.Arg1);
    std::cout << TabSymOp[WyrZ.Op];
    wyswietlanie(WyrZ.Arg2);
    std::cout << " = "; std::cout << std::endl;
}

/*
* Przeciazenie operatora <<
wyswietlenie liczby zespolonej
* Argumenty:
* Lz - liczba zespolona ktora ma byc wyswietlona
* Zwraca:
* Wyswietlenie liczby zespolonej w terminalu
*/
std::ostream& operator << (std::ostream &StrmWy, const LZespolona &Lz)
{
    return StrmWy << "(" << Lz.re << std::showpos << Lz.im << std::noshowpos << "i)";
}
/*
* Przeciazenie operatora <<
* Realizuje wyswietlenie wyrazenia liczb zespolonych
* Argumenty:
* WyrZ - wyrazenie liczb zespolonych ktore ma byc wyswietlone
* TabSymOp - tablica znakow operatorow arytmetycznych sluzaca do ich wyswietlania
* Zwraca:
*   Wyswietlone wyrazenie liczb zespolonych w terminalu
*/
std::ostream& operator << (std::ostream &StrmWy, const WyrazenieZesp &WyrZ)
{
    const char TabSymOp[] ="+-*/";
    return StrmWy << "Podaj wynik operacji:\t" << WyrZ.Arg1 << TabSymOp[WyrZ.Op] << WyrZ.Arg2 << "=" << std::endl;
}
/*
* Przeciazenie operatora >>
* Realizuje wczytanie liczby zespolonej
* Argumenty:
* Lz - zmienna do ktorej wczytywana jest liczba zespolona
* Zwraca:
*   Zmienna z wczytana liczba zespolona
*/
std::istream& operator >> (std::istream &StrmWe, LZespolona &Lz)
{
    char nawias, litera;

        StrmWe >> nawias;
        if(nawias == '(')
            {StrmWe.setstate(std::_S_failbit);return StrmWe;}
        StrmWe >> Lz.re;
        if(StrmWe.fail())
            {return StrmWe;}
        StrmWe >> Lz.im;
        if(StrmWe.fail())
            {return StrmWe;}
        StrmWe >> litera;
        if(litera != 'i')
            {StrmWe.setstate(std::_S_failbit);return StrmWe;}
        if(nawias != ')')
            {StrmWe.setstate(std::_S_failbit);return StrmWe;}
        
        return StrmWe;
        
}