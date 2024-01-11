
#include <iostream>
#include "Boss.h"

using namespace std;


Boss::Boss( int id, int age, int bonus )
:Employee( id, age, 40 )
{
	setBonus( bonus );
}


void Boss::setBonus( int bonus )
{
	bonus_ = ( bonus<1000 || bonus >20000 ? 0 : bonus );
}


int Boss::getBonus() const
{
	return bonus_;
}


void Boss::setStep( int dummy )
{
	Employee::setStep(40);
}


int Boss::calcSalary() const
{
	return ( 1000*getStep() + bonus_ );
}


void Boss::print() const
{
	Person::print();
	cout << "Loentillaeg : " << bonus_ << endl;
	cout << "Loen        : " << calcSalary() << endl;
}