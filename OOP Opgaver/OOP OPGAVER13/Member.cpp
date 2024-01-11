#include "Member.h"

Member::Member(const string &firstname, const string &lastname)
{
	firstname_ = firstname;
	lastname_ = lastname;
	membernumber_ = 0;
}

string Member::getFirstname() const
{
	return firstname_;
}

string Member::getLastname() const
{
	return lastname_;
}

void Member::setMembernumber(int membernumber)
{
	membernumber_ = (1000 <= membernumber && membernumber <= 9999 ? membernumber : 0);
}

int Member::getMembernumber() const
{
	return membernumber_;
}

void Member::print() const
{
	// print kan fint bruge overload af <<
	 cout << lastname_ << ", " << firstname_ << ", " << membernumber_ << endl;
	cout << *this;
}

//Derudover er det specificeret, at stream output operator<< ogs� skal v�re
//tilg�ngelig.

ostream & operator<<(ostream & os, const Member & m)
{
	os << m.lastname_ << ", " << m.firstname_ << ", " << m.membernumber_;
	// det vil v�re en begr�nsning, hvis overload af << brugte
	// print, som jo kun skriver ud til cout
	// parameteren os g�r, at der kan skrives ud til alle ostreams, fx ogs� en fil

	return os;
}
