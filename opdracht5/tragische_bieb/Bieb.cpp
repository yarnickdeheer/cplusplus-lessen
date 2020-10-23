#include <string>
#include "Bieb.h"
#include "Boek.h"
Bieb::Bieb(Boek& boek) {
    this->beschikbaar= boek.beschikbaar;
}

std::string Bieb::inhoud(Boek& boek) {
    this->beschikbaar = boek.beschikbaar;
    if (beschikbaar) {
        return "het boek is beschikbaar";
    }
    else {
        return "het boek is niet meer beschikbaar";
    }
}

void Bieb::Uitleen(Boek& boek) {
    boek.beschikbaar = false;
}
void Bieb::Retour(Boek& boek) {
    boek.beschikbaar = true;
}