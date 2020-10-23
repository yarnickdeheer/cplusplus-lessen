#include <iostream>
#include "Student.h"
#include "Docent.h"



int main()
{
	Student s = Student("jan", 8, "a");
	Docent d = Docent("pieter", 40);

	studenten();
	docenten();
	s.GetAge();
	s.GetName();
	s.GetKlas();
	d.GetAge();
	d.GetName();
}
