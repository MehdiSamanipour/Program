#include "NummerStander.h"


NummerStander::NummerStander()
{
	senesteTrukneNummer_ = 99;
	senestEkspederedeNummer_ = 99;
}


void NummerStander::traekNummer()
{
	++senesteTrukneNummer_;

	if (senesteTrukneNummer_ == 100)
		senesteTrukneNummer_ = 0;
}


int NummerStander::getNaesteNummerIKoe()
{
	if (senesteTrukneNummer_ == senestEkspederedeNummer_)
		return -1;
	else
	{
		++senestEkspederedeNummer_;

		if (senestEkspederedeNummer_ == 100)
			senestEkspederedeNummer_ = 0;

		return senestEkspederedeNummer_;
	}
}