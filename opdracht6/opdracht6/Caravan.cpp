#include <string>
#include "Koffer.h"
#include "Sokken.h"
#include "Caravan.h"
#include <iostream>
Caravan::Caravan(const Caravan& c) {
	if (this == &c) return;
	kleur = c.kleur;
	inhoud(new Koffer(*c.koffer));
	return;
}
Caravan& Caravan::operator=(const Caravan& c)
{
	if (this == &c) return *this;
	delete koffer;
	inhoud(new Koffer(*c.koffer));
	return *this;
}
void Caravan::inhoud(Koffer* _koffer) {
    koffer = _koffer;
}
Koffer* Caravan::getInhoud() {
    return koffer;
}

Caravan::~Caravan()
{
	delete koffer;
}
std::string Caravan::getKleur()
{
	return kleur;
}