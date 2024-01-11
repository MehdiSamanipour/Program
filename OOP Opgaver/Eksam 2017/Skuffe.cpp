#include "Skuffe.h"
#include <iostream>

Skuffe::Skuffe()
{
	indhold_ = "ukendt";
	antal_ = 0;            // Skriv koden for default constructoren her
}

Skuffe::Skuffe(string indhold, int antal)
{
	setIndhold(indhold);
	setAntal(antal);
}

void Skuffe::setIndhold(string indhold)
{
	indhold_ = indhold;
}

string Skuffe::getIndhold() const
{
	return indhold_;
}

void Skuffe::setAntal(int antal)
{
	antal_ = (0 < antal ? antal : 0);
	// Skriv koden for setAntal() her
}

int Skuffe::getAntal() const
{
	return antal_; // Skriv koden for getAntal() her
}

void Skuffe::print() const
{
	cout << "Indhold: " << indhold_ << endl;
	cout << "Antal:   " << antal_ << " styk" << endl << endl;
}