#include <string>
#include "Sokken.h"
#include <iostream>
Sokken::Sokken(const Sokken& c)
{
	if (this == &c) return;
	kleur = c.kleur;
	return;
}

Sokken& Sokken::operator=(const Sokken& s)
{
	if (this == &s) return *this;
	kleur = s.kleur;
	return *this;
}

std::string Sokken::getKleur()
{
	return kleur;
}