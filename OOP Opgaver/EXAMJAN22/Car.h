#pragma once
#include<iostream>
#include <string>
using namespace std;
class Car
{
public:
	Car();
	Car(int id, char cat, std::string model, int doors, char fuel, char gear, double price);
	char getCategory()const;
	bool getIsAvailable()const;
	void setIsAvailable(bool);
	int getIdNumber()const;
	void setIdNumber(int);
	void print()const;
	~Car();

private:
	int idNumber_;
	char category_;
	string model_;
	int doors_;
	char fuelType_;
	char gearType_;
	double pricePrDay_;
	bool isAvailable_;
};

