#pragma once

#include"Person.h"

class Employee : public Person
{
public:
	Employee( int id=0, int age=0, int step=10 );
	virtual void setStep( int );
	int getStep() const;
virtual	int calcSalary() const;
	virtual void print( void ) const;
private:
	int step_;
};
