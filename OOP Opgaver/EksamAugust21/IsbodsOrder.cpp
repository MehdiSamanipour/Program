#include "IsbodsOrder.h"
#include <iostream>
using namespace std;

IsbodsOrdre::IsbodsOrdre()
{
	antalVafler_ = 0;
}

void IsbodsOrdre::indsaetIsvaffel(Isvaffel v)
{
	if (antalVafler_ < 4)
	{
		vafler_[antalVafler_] = v;
		antalVafler_++;
	}
}

double IsbodsOrdre::beregnPris() const
{
	double pris = 0;
	for (int i = 0; i < antalVafler_; i++)
	{
		pris += vafler_[i].beregnPris();
	}

	return pris;
}

void IsbodsOrdre::print() const
{
	cout << "Ordre paa " << antalVafler_ << " vafler" << endl;
	for (int i = 0; i < antalVafler_; i++)
	{
		vafler_[i].print();
	}
	// Bør kalde sin egen beregnPris()
	cout << "Pris ialt: " << beregnPris() << " kr." << endl;
}