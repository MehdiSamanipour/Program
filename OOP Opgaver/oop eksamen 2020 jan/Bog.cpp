#include"Bog.h"
#include<iostream>

Bog::Bog(const string& titel, const string& forfatter)
{
	setTitel(titel);
	setForfater(forfatter);
}
Bog::~Bog()
{
}
void Bog::print() const
{
	cout << forfatter_ << ": " << titel_ << endl;
	cout << "Minimumsalder: " << getMinimumAlder() << endl;
}