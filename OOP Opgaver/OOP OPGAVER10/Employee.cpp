

#include <iostream>
#include "Employee.h"

using namespace std;


Employee::Employee( int id, int age, int step )
:Person( id, age )
{
	setStep( step );
}


void Employee::setStep( int step )
{
	step_ = ( step<10 || step >40 ? 0 : step );
}


int Employee::getStep() const
{
	return step_;
}


int Employee::calcSalary() const
{
	return 1000*step_;
}


void Employee::print() const
{
	Person::print();
	cout << "Loentrin    : " << step_ << endl;
	cout << "Loen        : " << calcSalary() << endl;
}