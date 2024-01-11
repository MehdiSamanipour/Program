
#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck(int cargo, int wheels, int passengers)
	: RoadVehicle(wheels, passengers) // Basisklassens constructor kaldes i member initialization listen
{
	setCargo(cargo);
}


void Truck::setCargo(int cargo)
{
	cargo_ = (cargo > 0 ? cargo : 0);
}


int Truck::getCargo() const
{
	return cargo_;
}

void Truck::print() const
{
	RoadVehicle::print();
	cout << "Cargo:      " << cargo_ << endl;
}