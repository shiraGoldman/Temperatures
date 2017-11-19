#pragma once
#include "Fahrenheit.h"
#include <ostream>

using namespace std;
class Celsius
{
private:
	double m_temp;

public:
	Celsius();

	Celsius(double);

	Celsius(Fahrenheit fahrenheit);
	
	void setTemp(double value);
	
	double getTemp() const;

	operator Fahrenheit();

	friend ostream& operator<<(ostream&, const Celsius&);
};
