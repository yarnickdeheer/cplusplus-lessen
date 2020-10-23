#include <string>
#include "Koffer.h"
#include "Sokken.h"
#include "Caravan.h"
#include <iostream>
Caravan::Caravan() {
    this->kleur = "grijs";
 
    this->soort = "caravan";
}

void Caravan::inhoud() {
    std::cout << "caravan inhoud: " << kof.soort << " en daarin zit: " << kof.sok.soort << std::endl;
}

std::string Caravan::VulCaravan(std::string k) {
    kof = Koffer(k);
    kof.VulKoffer("sokken");
    return k;
}
std::string Caravan::color(std::string k) {
    this->kleur = k;
    
    return this->kleur;
}
