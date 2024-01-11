

#include <iostream>
#include "Containership.h"

using namespace std;


Containership::Containership(const char * type, const char * name, int x, int y)
	: Ship( type, x, y )  // Basisklassens constructor kaldes i member initialization listen
{
	// Vi kan ikke bruge setName, for name_ er ikke sat endnu til en gyldig værdi
	int len = strlen(name) + 1;
	name_ = new char[len];

	strcpy_s(name_, len, name);
}


Containership::~Containership()
{
	cout << "*** Containership destructor called ***" << endl;
	delete [] name_;
}

void Containership::setName(const char * name)
{
	// Virker kun, hvis name_ er sat til en gyldig værdi

	// Check om reallokering er nødvendig
	int len = strlen(name) + 1;
	if (strlen(name_)+1 != len)
	{
		delete[] name_;
		name_ = new char[len];
	}
	strcpy_s(name_, len, name);
}

void Containership::show() const
{
	Ship::show();
	cout << "Name:     " << name_ << endl;
}

// rule of three


Containership::Containership(const Containership& copyMe)
	: Ship(copyMe)
{
	// Vi kan ikke bruge setName, for name_ er ikke sat endnu til en gyldig værdi
	int len = strlen(copyMe.name_) + 1;
	name_ = new char[len];
	strcpy_s(name_, len, copyMe.name_);

	// Alle andre attributter er sat af basisklassen
}

Containership& Containership::operator=(const Containership& copyMe)
{
	if (this != &copyMe)
	{
		// Brug operator= fra basisklassen
		(Ship&)*this = copyMe;
		setName(copyMe.name_);
	}

	return *this;
}