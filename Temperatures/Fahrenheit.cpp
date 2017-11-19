#include "Fahrenheit.h"
#include "Celsius.h"

using namespace std;

// constructors

Fahrenheit::Fahrenheit() {}

Fahrenheit::Fahrenheit(double temp)
{
	m_temp = temp;
}

// setter

void Fahrenheit::setTemp(double value)
{
	m_temp = value;
}

// getter

double Fahrenheit::getTemp() const
{
	return m_temp;
}

/*
print fahrenheit
@param os - ostream to concat to
@param fahrenheit - instance of fahrenheit to print
@return ostream
*/
ostream& operator<<(ostream& os, const Fahrenheit& fahrenheit)
{
	os << "Temperature in Fahrenheit is: " << fahrenheit.m_temp << endl;
	return os;
}