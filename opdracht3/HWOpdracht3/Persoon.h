#pragma once

#include <iostream>
class Persoon {

public:
	Persoon();
	virtual int GetAge();
	virtual std::string GetName();
};