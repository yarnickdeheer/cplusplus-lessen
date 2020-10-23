#pragma once
#include "Boek.h"
#include <string>

class Bieb {
public:
    Bieb(Boek& boek);

    void Uitleen(Boek& boek);
    void Retour(Boek& boek);
    std::string inhoud(Boek& boek);
    bool beschikbaar;


    
};