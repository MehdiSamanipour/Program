#include "Name.h"


Name::Name(string firstName, string lastName)
{
	setName(firstName, lastName);
}


void Name::setName(string fN, string lN)
{
	firstName_ = fN;
	lastName_ = lN;
}


void Name::printName() const
{
	cout << firstName_ << " " << lastName_ << endl;
}