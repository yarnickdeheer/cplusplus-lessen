#pragma once
#include <iostream>
#include "Munten.h"
#include <string>

class Vijftigcent : public Munten {
private:
	float value;
	std::string name;
	bool koffiemunt;
public:
	Vijftigcent(float v, std::string n, bool k);
	float Value() ;
	std::string Name() ;
	bool Koffiemunt() ;
	std::string Options();
};