#include <iostream>
#include "Eeneuro.h"
#include <string>
Eeneuro::Eeneuro(float v, std::string n, bool k) {
	value = v;
	name = n;
	koffiemunt = k;
}
float Eeneuro::Value() {

	return value;
}
std::string Eeneuro::Name() {
	std::cout << "optie 2: " + name + "\n";
	return name;
}
bool Eeneuro::Koffiemunt() {
	return koffiemunt;
}
std::string Eeneuro::Options() {
	std::cout << "opties : koffie , esspresso" << ".\n";
	return "";
}