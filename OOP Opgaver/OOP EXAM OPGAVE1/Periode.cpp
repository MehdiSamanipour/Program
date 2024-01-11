#include "Periode.h"
#include <iostream>

using namespace std;

int Periode::getStartMaaned() const
{
	return startMaaned_;
}

int Periode::getSlutMaaned() const
{
	return slutMaaned_;
}

void Periode::setForbrug(double forbrug)
{
	forbrug_ = forbrug >= 0 ? forbrug : 0;
}

double Periode::getForbrug() const
{
	return forbrug_;
}

void Periode::print() const
{
	cout << "Forbrug fra " << startMaaned_ << ". maaned til og med " 
		<< slutMaaned_ << ". maaned er " 
		<< forbrug_ << " m3" << endl;
}

