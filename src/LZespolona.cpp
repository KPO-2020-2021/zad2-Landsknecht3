#include "LZespolona.hh"
#include <cmath>
#include <iostream>
#include <iomanip>

#define MIN_DIFF 0.0001
#define PI 3.14

/*!
 * Realizuje porównanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwsza porównywana liczba zespolona,
 *    Skl2 - druga porównywana liczba zespolona.
 * Zwraca:
 *    True dla równych liczb zespolonych.
 */

bool  operator == (LZespolona  Skl1,  LZespolona  Skl2){
  /*if ((Skl1.re == Skl2.re) && (Skl1.im == Skl2.im))
    return true;
  else
    return false;*/
  //alternatywnie, dla MIN_DIFF i wyników od użytkownika
  
  if (abs(Skl1.re - Skl2.re) <= MIN_DIFF && abs(Skl1.im - Skl2.im) <= MIN_DIFF)
    {return true;}
  else
    {return false;}
  
}

/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2){
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}


/*!
 * Realizuje dzielenie liczby zespolonej przez skakar.
 * Argumenty:
 *    Skl1 - dzielona liczba zespolona,
 *    Skl2 - skalar-dzielnik.
 * Zwraca:
 *    Wynik dzielenia dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator / (LZespolona  Skl1,  double  Skl2){
  LZespolona  Wynik;
  if(Skl2==0)
  {
    throw std::runtime_error("Blad matematyczny: Nie mozna dzielic przez zero");
  }
  Wynik.re = Skl1.re / Skl2;
  Wynik.im = Skl1.im / Skl2;
  return Wynik;
}
/*!
 * Realizuje odejmowanie liczby zespolonej od liczby zespolonej.
 * Argumenty:
 *    Skl1 - liczba zespolona od ktorej dokonywane jest odejmowanie,
 *    Skl2 - liczba zespolona odejmowana.
 * Zwraca:
 *    Wynik odejmowania dwoch skladnikow przekazanych jako parametry
 */
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}
/*!
 * Realizuje mnozenie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - liczba zespolona,
 *    Skl2 - liczba zespolona przez ktora mnozymy.
 * Zwraca:
 *    Wynik iloczynu dwoch skladnikow przekazanych jako parametry
 */
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re * Skl2.re - Skl1.im * Skl2.im;
  Wynik.im = Skl1.re * Skl2.im + Skl2.re * Skl1.im;
  return Wynik;
}
/*!
 * Realizuje sprzezenie liczby zespolonej.
 * Argumenty:
 *    Skl2 - liczba zespolona na ktorej jest dokonywane sprzezenie.
 * Zwraca:
 *    Sprzezona liczbe zespolona.
 */
LZespolona Sprzezenie (LZespolona Skl2)
{ 
  if(Skl2.im == 0.0)
  {return Skl2;}
  Skl2.im = -Skl2.im;
  return Skl2;
}
/*!
 * Realizuje podniesienie do kwadratu modulu liczby zespolonej.
 * Argumenty:
 *    Skl2 - liczba zespolona ktorej kwadrat modulu jest obliczany.
 * Zwraca:
 *    Kwadrat modulu liczby zespolonej jako double
 */
double Modul2 (LZespolona Skl2)
{
  double m;
  m = Skl2.re * Skl2.re + Skl2.im * Skl2.im;
  return m;
}
/*!
 * Realizuje dzielenie liczby zespolonej przez liczbe zespolona.
 * Argumenty:
 *    Skl1 - dzielona liczba zespolona,
 *    Skl2 - skalar-dzielnik.
 * Zwraca:
 *    Wynik dzielenia dwoch skladnikow przekazanych jako parametry
 */
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;
  if(Skl2.re==0 && Skl2.im==0)
  {
    throw std::runtime_error("Blad matematyczny: Nie mozna dzielic przez zero");
  }
  Skl2 = Sprzezenie (Skl2);
  Wynik.re = (Skl1.re * Skl2.re - Skl1.im * Skl2.im) / Modul2(Skl2) ;
  Wynik.im = (Skl1.re * Skl2.im + Skl2.re * Skl1.im) / Modul2(Skl2) ;
  return Wynik;
}
LZespolona operator += (LZespolona &Skl1, LZespolona &Skl2)
{
  LZespolona wynik;
  wynik = Skl1 + Skl2;
  return wynik;
}
LZespolona operator /= (LZespolona &Skl1, LZespolona &Skl2)
{
  LZespolona wynik;
  wynik = Skl1 / Skl2;
  return wynik;
}
double arg(LZespolona z)
{
  double alfa;
  if(z.re == 0)
  {
    if(z.im > 0)
    {alfa = PI/2;}
    if(z.im < 0)
    {alfa = -PI/2;}
    if(z.im == 0)
    {throw std::runtime_error("Argument jest nieokreslony");}
  }
  if(z.re > 0)
  {alfa = atan2(z.im, z.re);}
  if(z.re < 0)
  {alfa = atan2(z.im, z.re)+ PI;}
  
  return alfa;
}