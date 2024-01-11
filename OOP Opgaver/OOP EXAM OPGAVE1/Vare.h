#pragma once
#include"FakturaLinje.h"

class Vare : public FakturaLinje
{
public:
	Vare(std::string navn, double enhedsPris, double antal);

	double beregnPris(double)const override ;
	~Vare();

private:

};


