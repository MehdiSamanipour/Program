#include "Burger.h"
#include <iostream>
using namespace std;

// Formaål: implementation af en simpel klasses metoder
// Konstruktoren skal sørge for at alle attributter er initialiseret korrekt
// Set metoder skal udfør validering, hvis relevant

Burger::Burger(int boeffer, bool ost, bool bacon)
{
	setAntalBoeffer(boeffer);
	setOst(ost);
	setBacon(bacon);
}

void Burger::setAntalBoeffer(int antal)
{
	antalBoeffer_ = antal > 0 && antal <= 3 ? antal : 1;
}

int Burger::getAntalBoeffer() const
{
	return antalBoeffer_;
}

void Burger::setOst(bool ost)
{
	ost_ = ost;
}

bool Burger::getOst() const
{
	return ost_;
}

void Burger::setBacon(bool bacon)
{
	bacon_ = bacon;
}

bool Burger::getBacon() const
{
	return bacon_;
}

void Burger::print() const
{
	cout << "Burger med " << antalBoeffer_;
	if (antalBoeffer_ == 1)
	{
		cout << " boef";
	}
	else
	{
		cout << " boeffer";
	}

	if (ost_)
	{
		cout << " med ost";
	}
	else
	{
		cout << " uden ost";
	}

	if (bacon_)
	{
		cout << " med bacon";
	}
	else
	{
		cout << " uden bacon";
	}

	cout << endl;

	// Alternative Konstruktioner med indlejrede ?: er også tilladt:
	// Sammenligning med true og false er ikke god stil, men tilladt
	cout << "Burger med " << antalBoeffer_;
	cout << (antalBoeffer_ == 1 ? " boef" : " boeffer");
	cout << (ost_ == true ? " med" : " uden") << " ost";
	cout << (bacon_ ? " med" : " uden") << " bacon";
	cout << endl;
}
