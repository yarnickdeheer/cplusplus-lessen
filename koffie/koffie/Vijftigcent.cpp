#include <iostream>
#include "Vijftigcent.h"
#include <string>

Vijftigcent::Vijftigcent(float v, std::string n, bool k) {
	value = v;
	name = n;
	koffiemunt = k;
}
float Vijftigcent::Value() {

	return value;
}
std::string Vijftigcent::Name() {
	std::cout << "optie 1: " + name + "\n";
	return name;
}
bool Vijftigcent::Koffiemunt() {
	return koffiemunt;
}
std::string Vijftigcent::Options() {
	std::cout << "opties : koffie" << ".\n";
	return "";
}