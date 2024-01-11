#pragma once
// Hele filen med som bilag
#pragma once

#include "Burger.h"
#include <string>

class Meal
{
public:
	Meal(int, bool, bool, std::string, std::string);
	void printMeal();

private:
	Burger burger_;
	std::string drik_;
	std::string tilbehoer_;
};

