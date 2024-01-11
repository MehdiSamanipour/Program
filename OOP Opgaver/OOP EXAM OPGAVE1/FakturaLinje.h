#pragma once

#include<string>

class FakturaLinje
{
public:
	
	FakturaLinje( std::string navn , double enhedsPris, double antal);
	double beregnPris(double Pris);
	virtual double beregnPris(double )const=0;
	virtual ~FakturaLinje();
	virtual void print() const;

protected:
	double enhedsPris_;
	double antal_;





private:

	std::string navn_;



};

std::ostream& operator<<(std::ostream& out, const FakturaLinje& right);

