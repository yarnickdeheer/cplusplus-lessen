// simon says.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <chrono>
#include <thread>
 
std::string Charstring;

int main()
{
	srand(time(NULL));
	int newNumber = rand() % 10;
	Charstring = Charstring + std::to_string(newNumber);
	std::string awnser;
	std::cout << "welcome to simon says!\n";
	std::cout << Charstring << "\n";
	std::chrono::seconds dura(1);
	std::this_thread::sleep_for(dura);
	system("cls");
	std::cin >> awnser;
	if (awnser == Charstring) {
		std::cout << "correct\n";
		main();
	}
	else std::cout << "false\n";
}
