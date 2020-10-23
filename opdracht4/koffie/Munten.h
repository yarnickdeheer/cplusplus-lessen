#pragma once
#include <iostream>
#include <string>
class Munten {

public:
	Munten();
	virtual float Value();
	virtual std::string Name();
	virtual bool Koffiemunt();
	virtual std::string Options();
};