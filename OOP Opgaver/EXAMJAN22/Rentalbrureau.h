#pragma once
#include "Car.h"

const int MAX_CARS = 100;

class Rentalbureau
{
public:
	Rentalbureau(string name);
	void addCar(Car car);
	void searchCarByCategory(char category) const;
	void print() const;
private:
	string bureauName_;
	Car cars_[MAX_CARS];
};
