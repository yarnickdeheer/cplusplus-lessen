#include <string>
#include "Koffer.h"
#include "Sokken.h"
#include <iostream>



Koffer::Koffer(const Koffer& k) {
	if (this == &k) return;
	kleur = k.kleur;
	inhoud(new Sokken(*k.sokken));
	return;
}
Koffer& Koffer::operator=(const Koffer& k)
{
	if (this == &k) return *this;
	delete sokken;
	inhoud(new Sokken(*k.sokken));
	return *this;
}
void Koffer::inhoud(Sokken* _sokken) {
	sokken = _sokken;
}
Sokken* Koffer::getInhoud() {
	return sokken;
}

Koffer::~Koffer()
{
	delete sokken;
}
std::string Koffer::getKleur()
{
	return kleur;
}