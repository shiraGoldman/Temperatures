#include "Celsius.h"

using namespace std;

// constructors

Celsius::Celsius() {}

Celsius::Celsius(double temp)
{
	m_temp = temp;
}

Celsius::Celsius(Fahrenheit fahrenheit)
{
	m_temp = (fahrenheit.getTemp() - 32) / 1.8;
}

// setter

void Celsius::setTemp(double value)
{
	m_temp = value;
}

// getter

double Celsius::getTemp() const
{
	return m_temp;
}

/*
convert celcius to fahrenheit
@return converted fahrenheit
*/
Celsius::operator Fahrenheit()
{
	return Fahrenheit(m_temp * 1.8 + 32);
}

/*
print celsius
@param os - ostream to concat to
@param celcius - instance of celicus to print
@return ostream 
*/
ostream& operator<<(ostream& os, const Celsius& celsius)
{
	os << "Temperature in Celcius is: " << celsius.m_temp << endl;
	return os;
}
