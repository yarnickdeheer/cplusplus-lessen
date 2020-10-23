#pragma once
#include <iostream>
#include "Munten.h"
#include <string>

class koffieMunt : public Munten {
private:
	float value;
	std::string name;
	bool koffiemunt;

public:
	koffieMunt(float v, std::string n, bool k);
	float Value();
	std::string Name();
	bool Koffiemunt();
	std::string Options();
};