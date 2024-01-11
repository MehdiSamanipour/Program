#include "Hvidevare.h"
#include <iostream>


using namespace std;


Hvidevare::Hvidevare(const std::string& maerke, const std::string& model, char energiklasse)
{
	maerke_ = maerke;
	model_ = model;
	setEnergiklasse(energiklasse);
}

void Hvidevare::setEnergiklasse(char energiklasse)
{
	energiklasse_ = ('A' <= energiklasse && energiklasse <= 'G' ? energiklasse : 'G');
}

char Hvidevare::getEnergiklasse() const
{
	return energiklasse_;
}

 void Hvidevare::print() const
{
	tegnSymbol();
	cout << maerke_ << " " << model_ << endl;
	cout << "Energiklasse " << energiklasse_ << endl;
}



ostream& operator<<(ostream& out, const Hvidevare& right) {

	right.print();
	return out;
}
