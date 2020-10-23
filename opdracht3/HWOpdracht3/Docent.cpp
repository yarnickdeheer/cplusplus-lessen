#include "Docent.h"
#include <string>

Docent::Docent(std::string n, int a) {
	name = n;
	age = a;
}
int Docent::GetAge() {

	std::cout << std::to_string(age) + "\n";
	return(age);
}
std::string Docent::GetName() {

	std::cout << name + "\n";
	return(name);
}