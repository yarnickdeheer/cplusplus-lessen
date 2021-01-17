#pragma once
#include <string>
#include "Koffer.h"
#include<iostream>
#include <vector>
class Caravan {
private:
	Koffer* koffer;	
	std::string kleur;
public:
	Caravan() : kleur("grijs") {};
	Caravan(std::string Kleur) : kleur(Kleur) {};
	Caravan(const Caravan& c);
	Caravan& operator=(const Caravan& c);

	void inhoud(Koffer* koffer);
	
	Koffer* getInhoud();
	~Caravan();
	std::string getKleur();
};