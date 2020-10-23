#pragma once
#include <string>
#include "Koffer.h"
class Caravan {
public:
	Caravan();
	Koffer kof;
	void inhoud();
	std::string color(std::string k);
	std::string kleur;

	std::string soort;
	std::string VulCaravan(std::string k);



};