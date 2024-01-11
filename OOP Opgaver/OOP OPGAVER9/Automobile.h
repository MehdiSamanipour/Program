#pragma once

#include "RoadVehicle.h"

// Definition af en enum type
// Som integers har de per default værdierne 0, 1, 2
// og kan indbyrdes sammenlignes relativt
enum CarType { CAR, VAN, WAGON };

class Automobile : public RoadVehicle
{
public:
	Automobile(CarType = CAR, int = 0, int = 0);
	void setType(CarType);
	CarType getType() const;
	void print() const;
private:
	CarType automobileType_;
};