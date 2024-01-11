#include "RoadVehicle.h"
#include <iostream>
using namespace std;

RoadVehicle::RoadVehicle(int wheels, int passengers)
{
	setWheels(wheels);
	setPassengers(passengers);
}

void RoadVehicle::setWheels(int wheels)
{
	wheels_ = (wheels > 0 ? wheels : 0);
}

void RoadVehicle::setPassengers(int passengers)
{
	passengers_ = (passengers > 0 ? passengers : 0);
}


int RoadVehicle::getWheels() const
{
	return wheels_;
}


int RoadVehicle::getPassengers() const
{
	return passengers_;
}

void RoadVehicle::print() const
{
	cout << "Wheels:     " << wheels_ << endl;
	cout << "Passengers: " << passengers_ << endl;
}