// Med som bilag
#include "Meal.h"
#include <iostream>
using namespace std;

void Meal::printMeal()
{
	cout << "Meal med" << endl;
	burger_.print();
	cout << "og " << drik_ << " og " << tilbehoer_ << endl;
}
// bilag slutter her

// Opgave 3d
// Formål: specialt at vise bruge af Burger's constructor i
// member initializer list
Meal::Meal(int boeffer, bool ost, bool bacon, std::string drik, std::string tilbehoer)
	: burger_(boeffer, ost, bacon), drik_(drik), tilbehoer_(tilbehoer)
{
	// drik og tilbehør kan også sættes her
}

