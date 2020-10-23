#pragma once
#include <iostream>
#include "Persoon.h" 
class Docent : public Persoon {
private:
	std::string name;
	int age;

public:
	Docent(std::string n, int a);
	int GetAge();
	std::string GetName();
};