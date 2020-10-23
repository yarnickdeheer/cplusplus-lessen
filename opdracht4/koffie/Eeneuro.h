#pragma once
#include <iostream>
#include "Munten.h"
#include <string>
class Eeneuro : public Munten {
private:
	float value;
	std::string name;
	bool koffiemunt;
public:
	Eeneuro(float v, std::string n, bool k);
	float Value();
	std::string Name();
	bool Koffiemunt();
	std::string Options();
};