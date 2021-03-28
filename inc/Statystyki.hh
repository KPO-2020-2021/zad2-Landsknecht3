#ifndef STATYSTYKI_HH
#define STATYSTYKI_HH



#include "LZespolona.hh"
#include "WyrazenieZesp.hh"
#include "BazaTestu.hh"

/*
 * Tu nalezy zdefiniowac funkcje, ktore definiuja model statystyki 
 */
int porownanie(int p, LZespolona odp, LZespolona wynik);
void statystyka(int p, BazaTestu BT);

#endif
