#pragma once
#include <ostream>

using namespace std;

class Fahrenheit
{
private:
	double m_temp;

public:
	Fahrenheit();

	Fahrenheit(double);

	void setTemp(double value);

	double getTemp() const;

	friend ostream& operator<<(ostream&, const Fahrenheit&);
};

