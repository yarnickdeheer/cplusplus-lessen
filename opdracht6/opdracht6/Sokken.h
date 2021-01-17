#pragma once
#include<iostream>
#include <string>

class Sokken {
private: 

	std::string kleur;
public:
	Sokken() : kleur("grijs") {};
	Sokken(std::string Kleur) : kleur(Kleur) {};
	Sokken(const Sokken& c);
	Sokken& operator=(const Sokken& c);

	std::string getKleur();

};
