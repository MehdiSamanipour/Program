#pragma once

class RoadVehicle
{
public:
	RoadVehicle(int = 0, int = 0);
	void setWheels(int);
	void setPassengers(int);
	int getWheels() const;
	int getPassengers() const;
	void print() const;
private:
	int wheels_;
	int passengers_;
};
