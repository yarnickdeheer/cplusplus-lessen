

#include <iostream>
#include "Koffer.h"
#include "Sokken.h"
#include "Caravan.h"
#include <string>

int main()
{
    Caravan* caravan = new Caravan("blauw");
    Koffer* koffer = new Koffer("rood");
    Sokken* sokken = new Sokken("groen");


    koffer->inhoud(sokken);
    caravan->inhoud(koffer);

    std::cout << "koffer kleur: " << caravan->getInhoud()->getKleur() << "\n" << 
    "in de koffer zitten sokken met de kleur: " << caravan->getInhoud()->getInhoud()->getKleur() << std::endl;

    Caravan* gestolencaravan = new Caravan(*caravan);
    delete caravan;
    std::cout << "-----------gestolen-----------" << std::endl;

    std::cout << "Kleur van de koffer: " << gestolencaravan->getInhoud()->getKleur() << std::endl;
    std::cout << "In de koffer zitten sokken met de kleur: " << gestolencaravan->getInhoud()->getInhoud()->getKleur();

    return 0;
  
}
