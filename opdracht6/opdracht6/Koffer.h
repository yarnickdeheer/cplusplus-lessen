#pragma once
#include <string>
#include "Sokken.h"
class Koffer {
public:
	Koffer();
	Koffer(std::string soort);
	Sokken sok;
	void inhoud();
	void Showinhoud();
	std::string color(std::string k);
	std::string kleur;

	std::string soort;
	std::string Soort(std::string k);

	std::string VulKoffer(std::string k);


};