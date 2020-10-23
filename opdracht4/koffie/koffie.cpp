// koffie.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vijftigcent.h"
#include "Eeneuro.h"
#include "koffieMunt.h"
#include "Munten.h"
#include <string>  



void setName(Munten& munten) {
	munten.Name();
}
float setValue(Munten& munten) {
	munten.Value();
	return munten.Value();
}
void setOptions(Munten& munten) {
	munten.Options();
}
void options(float in, bool km, Munten& munt) {
	
	if (setValue(munt) < 1) {
		setOptions(munt);

	
	}
	else if (setValue(munt) == 1) {
		setOptions(munt);
	}
	else if (munt.Koffiemunt() == true) {
		setOptions(munt);
	}
	else {
		return;
	}
}
void Inwerpen(Vijftigcent v, Eeneuro e, koffieMunt km) {
	int input;
	std::cin >> input;
	
	if (input == 1) {
		std::cout << "input: " + std::to_string(input) + " " + std::to_string(v.Value()) << "\n";
		
		options(v.Value(), v.Koffiemunt(),v);
	}
	else if (input == 2) {
		std::cout << "input: " + std::to_string(input) + " " + std::to_string(e.Value()) << "\n";
	
		options(e.Value(), e.Koffiemunt(),e);
	}
	else if (input == 3)
	{
		std::cout << "input: " + std::to_string(input) +" "+ std::to_string(km.Value()) << "\n";

		options(km.Value(), km.Koffiemunt(),km);
	}
	else {
		std::cout << "no valid option" << "\n";
		Inwerpen(v, e, km);
	}

}

int main()
{
	Vijftigcent vijftig = Vijftigcent(0.50f, "vijftigcent", false);
	Eeneuro euro = Eeneuro(1, "een euro", false);
	koffieMunt koffiem = koffieMunt(0, "koffie munt", true);

	 setName(vijftig);
	 setName(euro);
	 setName(koffiem);

	Inwerpen(vijftig, euro, koffiem);
}


