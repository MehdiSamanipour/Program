#include "Vehicle.h"


Vehicle::Vehicle(string model, char fuel, int weight)
{
	model_ = model;
	fuel_ = ((fuel == 'B' || fuel == 'D') ? fuel : 'X');
	weight_ = (weight > 0 ? weight : 0);
	setRegNr("XX00000");
}


bool Vehicle::setRegNr(string regNr)
{
	regNr_ = regNr;

	if (checkRegNr() == false)
	{
		regNr_ = "XX00000";
		return false;
	}

	return true;
}


bool Vehicle::setRegDate(int day, int month, int year)
{
	return regDate_.set(day, month, year);
}


void Vehicle::setOwner(string firstName, string lastName)
{
	owner_.setName(firstName, lastName);
}


void Vehicle::printCertificate() const
{
	cout << "\nRegistreringsattest" << endl;
	cout << "-------------------" << endl;
	cout << "Model:      " << model_ << endl;
	cout << "Braendstof: " << fuel_ << endl;
	cout << "Vaegt:      " << weight_ << endl;
	cout << "Reg.dato:   ";

	regDate_.print();

	cout << "Reg.nr.:    " << regNr_ << endl;
	cout << "Ejer:       ";

	owner_.printName();

	cout << "-------------------\n\n";
}


bool Vehicle::checkRegNr() const
{
	if (regNr_.length() != 7)
		return false;

	for (int i = 0; i < 2; i++)
		if (regNr_[i] < 'A' || regNr_[i] > 'Z')
			return false;

	for (int j = 2; j < 7; j++)
		if (regNr_[j] < '0' || regNr_[j] > '9')
			return false;

	return true;
}