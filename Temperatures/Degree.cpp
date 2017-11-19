#include "Degree.h"

using namespace std;

Degree::Degree() {}

Degree::Degree(double temp)
{
	m_temp = temp;
}

void Degree::setTemp(double value)
{
	m_temp = value;
}

double Degree::getTemp() const
{
	return m_temp;
}