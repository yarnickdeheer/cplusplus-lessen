#include <string>
#include "Sokken.h"
#include <iostream>
Sokken::Sokken() {
    this->kleur = "grijs";

    this->soort = "";
}
Sokken::Sokken(std::string soort) {
    this->soort = soort;
}

std::string Sokken::color(std::string k) {
    this->kleur = k;
    return this->kleur;
}

std::string Sokken::Soort(std::string k) {
    this->soort = k;
    return k;
}

