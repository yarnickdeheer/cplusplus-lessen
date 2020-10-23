#include "Student.h"
#include <iostream>
#include <string>

Student::Student(std::string n, int a, std::string k) {
	name = n;
	age = a;
	klas = k;
}
int Student::GetAge() {


	std::cout << std::to_string(age)+"\n";
	return age;

}
std::string Student::GetName() {

	std::cout << name + "\n";
	return name;
}
std::string Student::GetKlas() {
	std::cout << klas + "\n";
		return klas;
}