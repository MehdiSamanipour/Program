#include"Ship.h"
#include"Containership.h"
Containership::Containership(const char* type, const char* name, int x, int y)
	: Ship(type, x, y)  // Basisklassens constructor kaldes i member initialization listen
{
	// Vi kan ikke bruge setName, for name_ er ikke sat endnu til en gyldig værdi
	int len = strlen(name) + 1;
	name_ = new char[len];

	strcpy_s(name_, len, name);
}


Containership::~Containership()
{
	cout << "*** Containership destructor called ***" << endl;
	delete[] name_;
}

void Containership::setName(const char* name)
{
	// Virker kun, hvis name_ er sat til en gyldig værdi

	// Check om reallokering er nødvendig
	int len = strlen(name) + 1;
	if (strlen(name_) + 1 != len)
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
