#include <iostream>
#include <string>
#include "Date.h"
#include "Name.h"

using namespace std;


class Vehicle
{
public:
	Vehicle(string model, char fuel, int weight);
	bool setRegNr(string regNr);
	bool setRegDate(int day, int month, int year);
	void setOwner(string firstName, string lastName);
	void printCertificate(void) const;
private:
	bool checkRegNr(void) const;
	string model_;
	char fuel_;			// Valid values: 'B'(Benzin), 'D'(Diesel) and 'X'(unknown type). Default: 'X'
	int weight_;			// Valid values: positive numbers. Default: 0
	string regNr_;		// Valid values: exactly 7 chararters
	//				 first 2 characters: capital letters
	//				 next 5 characters: numbers 0 to 9
	//				 Default: "XX00000"
	Date regDate_;
	Name owner_;
};