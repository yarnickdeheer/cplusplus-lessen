#pragma once
#include <string>
#include "Sokken.h"
#include<iostream>
#include <vector>
class Koffer {

private:
	Sokken* sokken;
	std::string kleur;
public:

	Koffer() : kleur("grijs") {};
	Koffer(std::string Kleur) : kleur(Kleur) {};
	Koffer(const Koffer& k);
	Koffer& operator=(const Koffer& k);

	void inhoud(Sokken* koffer);
	
	Sokken* getInhoud();
	~Koffer();
	std::string getKleur();
};