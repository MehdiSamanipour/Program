#pragma once
#include "RoadVehicle.h"

class Truck : public RoadVehicle
{
public:
	Truck(int = 0, int = 0, int = 0);
	void setCargo(int);
	int getCargo() const;
	void print() const;
private:
	int cargo_;
};