#pragma once
#include <iostream>

#include "Persoon.h" 
class Student : public Persoon {
private:
	std::string name;
	int age;
	std::string klas;

public:
	Student(std::string n, int a, std::string k);
	int GetAge();
	std::string GetName();

	std::string GetKlas();
};
