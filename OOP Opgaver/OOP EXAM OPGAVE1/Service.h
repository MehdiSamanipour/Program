#pragma once
#include"FakturaLinje.h"

class Service : public FakturaLinje
{
public:
	Service(const std::string navn, double enhedsPris, double antal,bool momsPligtig);
	double beregnPris(double)const override ;
	void print()const;

	~Service();

private:

	bool momspligtig_;


};



