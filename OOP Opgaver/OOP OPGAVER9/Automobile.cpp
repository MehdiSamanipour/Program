

#include "Automobile.h"
#include <iostream>

using namespace std;

Automobile::Automobile(CarType type, int wheels, int passengers)
	: RoadVehicle(wheels, passengers)  // Kald basisklassens constructor i member initialization listen
{
	setType(type);
}

void Automobile::setType(CarType type)
{
	// enum typer kan sammenlignes med integers og med sig selv
	automobileType_ = (type < CAR || type > WAGON ? CAR : type);
}

CarType Automobile::getType() const
{
	return automobileType_;
}

void Automobile::print() const
{
	cout << "Type:       ";

	switch (automobileType_)
	{
	case CAR:
		cout << "CAR";
		break;
	case VAN:
		cout << "VAN";
		break;
	case WAGON:
		cout << "WAGON";
		break;
	}

	cout << endl;

	RoadVehicle::print();
}
