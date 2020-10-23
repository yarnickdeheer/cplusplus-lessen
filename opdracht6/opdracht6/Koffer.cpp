#include <string>
#include "Koffer.h"
#include "Sokken.h"
#include <iostream>
Koffer::Koffer() {
    this->kleur = "grijs";

    this->soort = "";
}

Koffer::Koffer(std::string soort) {
    this->soort = soort;
}



void Koffer::Showinhoud() {
    std::cout << " kleur van inhoud voor: " << sok.kleur << std::endl;
}
void Koffer::inhoud() {
    std::cout << "koffer inhoud: "  << sok.soort << std::endl;

}

std::string Koffer::color(std::string k) {
    this->kleur = k;
    return this->kleur;
}
std::string Koffer::Soort(std::string k) {
    this->soort = k;
    return k;
}


std::string Koffer::VulKoffer(std::string k) {
    sok = Sokken(k);
    return k;
}


