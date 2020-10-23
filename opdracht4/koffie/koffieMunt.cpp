#include <iostream>
#include "koffieMunt.h"
#include <string>


koffieMunt::koffieMunt(float v, std::string n, bool k) {
	value = v;
	name = n;
	koffiemunt = k;
}
float koffieMunt::Value() {

	return value;
}
std::string koffieMunt::Name() {
	std::cout << "optie 3: " + name + "\n";
	return name;
}
bool koffieMunt::Koffiemunt() {
	return koffiemunt;

}
std::string koffieMunt::Options() {
	std::cout << "opties : koffie , esspresso , Caffelatte" << ".\n";
	return "";
}