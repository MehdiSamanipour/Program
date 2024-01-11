#include "Vaskemaskine.h"
#include <iostream>

using namespace std;
Vaskemaskine::Vaskemaskine(const std::string& maerke, const std::string& model, char energiklasse, float kapacitet)
	: Hvidevare(maerke, model, energiklasse)
{
	kapacitet_ = (3.0 <= kapacitet && kapacitet <= 10.0 ? kapacitet : 3.0);
}
float Vaskemaskine:: getKapacitet() const
{
	return kapacitet_;
}

void Vaskemaskine:: print() const
{

	cout << " ___\n|   |\n| * |\n|___|\n";
	Hvidevare::print();
	cout << "kapacitet "<<" " << kapacitet_ << "kg" << endl;
}

void Vaskemaskine::tegnSymbol() const
{
	cout << " ___\n|   |\n|V M|\n|___|\n";
}
