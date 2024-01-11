#include "Koeleskab.h"
#include <iostream>
using namespace std;

Koeleskab::Koeleskab(const std::string& maerke, const std::string& model, char energiklasse, int volumen)
 : Hvidevare(maerke, model, energiklasse)
{
	volumen_ = (volumen >= 50 && volumen <= 500 ? volumen : 50);
}

int Koeleskab::getVolumen() const
{
	return volumen_;
}

void Koeleskab::print() const
{	
	tegnSymbol();
	cout << " ___\n|   |\n| * |\n|___|\n";
	Hvidevare::print();
	cout << "Volumen  "<< volumen_ << "liter  " << endl;
}

void Koeleskab::tegnSymbol() const
{
	cout << " ___\n|   |\n| * |\n|___|\n";
}