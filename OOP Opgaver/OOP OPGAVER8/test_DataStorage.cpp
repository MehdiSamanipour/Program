#include <iostream>
#include "DataStorage.h"
#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>



using namespace std;


int main()
{
	DataStorage testObject(5, 0);

	cout << "Elements: ";
	testObject.print();
	cout << "\nNumber of elements: " << testObject.numberOfElements() << endl;
	cout << "Mean value: " << testObject.meanValue() << endl << endl;

	cout << "Elements after further insertion (newest first): ";
	testObject.insert(7.6).insert(6.7).insert(15.3).insert(2.44).insert(10.2).insert(11.3).print();
	cout << "\nNumber of elements after cascaded insert (expected 11): " << testObject.numberOfElements() << endl;
	cout << "Mean value (expects ~4.87): " << testObject.meanValue() << endl << endl;

	cout << "Number of elements between 0 og 12 inclusive (expects 10): " << testObject.numberOfElementsBetween(0, 12) << endl << endl;

	int slettet = testObject.eraseElementsBetween(0, 12);

	cout << "Elements after erase: ";
	testObject.print();
	cout << "\nNumber of erased elements (expects 10): " << slettet << endl;
	cout << "Number of elements after erase (expects 1): " << testObject.numberOfElements() << endl;
	cout << "Mean value (expects 15.3): " << testObject.meanValue() << endl << endl;
	printf("Connected to Raspberry Pi\n");

	DataStorage tempData;

	for (int i = 0; i < 12; i++)
	{
		/*double tData = getTemperature();*/
	/*	tempData.insert(tData);

		Wait(10000);*/
	}

	cout << "Temperature data: ";
	tempData.print();
	cout << "\nTemperature mean value: " << tempData.meanValue() << endl << endl;

	cout << "Number of temperature data points [21 - 22] = " << tempData.numberOfElementsBetween(21.0, 22.0) << endl;
	return 0;
}