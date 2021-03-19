#include <iostream>
#include "LZespolona.hh"
#include "BazaTestu.hh"

#include "Statystyki.hh"





int main(int argc, char **argv)
{

  if (argc < 2) {
    std::cout << std::endl;
    std::cout << " Brak opcji okreslajacej rodzaj testu." << std::endl;
    std::cout << " Dopuszczalne nazwy to:  latwy, trudny." << std::endl;
    std::cout << std::endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    std::cerr << " Inicjalizacja testu nie powiodla sie." << std::endl;
    return 1;
  }


  
  std::cout << std::endl;
  std::cout << " Start testu arytmetyki zespolonej: " << argv[1] << std::endl;
  std::cout << std::endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) 
  {
    LZespolona odp;
    std::cout << WyrZ_PytanieTestowe;
    std::cin >> odp;
    for(int i=0; i<2 || std::cin.good(); i++ )
    {
      if(std::cin.fail())
      {
        std::cerr << "Blad w zapisie. Podaj swoja odpowiedz jeszcze raz:";
        std::cin.clear();
        std::cin.ignore( 100 , '\n');
        std::cin >> odp;
        std::cout << std::endl;
      }
      else
      {
        break;
      }
    }
    LZespolona wynik = Oblicz(WyrZ_PytanieTestowe);
    if(odp == wynik)
    {
      std::cout << "Poprawna odpowiedz" << std::endl;
    }
    else
    {
      std::cout << "Niepoprawna odpowiedz. Poprawna to:" << wynik << std::endl;
    }
    statystyka(BazaT, odp, wynik);
  }

  
  std::cout << std::endl;
  std::cout << " Koniec testu" << std::endl;
  std::cout << std::endl;

}
/*LZespolona odp;
    std::cout << "Twoja odpowiedz:";
    std::cin >> odp;
    std::cout << std::endl;
    std::cout << odp;
    std::cout << std::endl;*/