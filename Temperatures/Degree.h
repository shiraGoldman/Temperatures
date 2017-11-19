#pragma once

using namespace std;
class Degree
{
public:
	Degree(); 
	
	Degree(double);
	
	void setTemp(double);

	double getTemp() const;

protected:
	double m_temp;
};
