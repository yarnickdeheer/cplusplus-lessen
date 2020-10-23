

#include <iostream>
#include "Koffer.h"
#include "Sokken.h"
#include "Caravan.h"


int main()
{
    Caravan* caravan = new Caravan;
    Koffer* koffer = new Koffer;
    Sokken* sokken = new Sokken;

    sokken->color("groen");
    koffer->color("rood");
    caravan->color("blauw");

    caravan->VulCaravan("koffer");
    
    caravan->kof.inhoud();
    caravan->inhoud(); 

    Caravan* gestolencaravan = new Caravan(*caravan);
    delete caravan;
    std::cout << "-----------gestolen-----------" << std::endl;
    gestolencaravan->kof.inhoud();
    gestolencaravan->inhoud();
    return 0;
  
}
