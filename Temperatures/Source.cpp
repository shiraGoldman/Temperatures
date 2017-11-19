#include <iostream>
#include "Celsius.h"
#include "Fahrenheit.h"
using namespace std;

int main()
{
	Celsius celsius;
	Fahrenheit fahrenheit, fahrenheitFromCelsius;
	
	cout << "Water Boiling Point: " << endl;
	celsius.setTemp(100);
	fahrenheitFromCelsius = celsius;
	cout << celsius;
	cout << fahrenheitFromCelsius;
	
	cout << endl << endl;
	
	cout << "Water Freezing Point: " << endl;
	celsius.setTemp(0);
	fahrenheitFromCelsius = celsius;
	cout << celsius;
	cout << fahrenheitFromCelsius;

	cout << endl << endl;

	cout << "Absolute Zero: " << endl;
	fahrenheit.setTemp(-459.67);
	Celsius celsiusFromFahrenheit(fahrenheit);
	cout << celsiusFromFahrenheit;
	cout << fahrenheit;

	return 0;
	
}