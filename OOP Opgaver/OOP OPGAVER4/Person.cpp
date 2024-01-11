#include "Person.h"

int Person::numberOfPersons_ = 0;


Person::Person(const string& sSNRef , const string& fNRef, const string& lNRef )
{
	socialSecNumber_ = sSNRef;
	firstName_ = fNRef;
	middleName_ = "";
	lastName_ = lNRef;
	numberOfPersons_++;
}
Person::Person(const string& sSNRef, const string& fNRef, const string& mNRef, const string& lNRef)
{
	socialSecNumber_ = sSNRef;
	firstName_ = fNRef;
	middleName_ = mNRef;
	lastName_ = lNRef;
	numberOfPersons_++;
}

void Person::setFirstName(const string& FNRef)
{
	firstName_ = FNRef;
}
Person::~Person()
{
	numberOfPersons_--;
}

void Person::setMiddleName(const string& mNRef)
{
	middleName_ = mNRef;
}
void Person::setLastName(const string& LNRef)
{
	lastName_ = LNRef;
}
void Person::getData(string& sSNRef, string& fNRef, string& mNRef, string& lNRef) const
{
	sSNRef = socialSecNumber_;
	fNRef = firstName_;
	mNRef = middleName_;
	lNRef = lastName_;
}
int Person::getNumberOfPersons()
{
	return numberOfPersons_;
}
void  Person::printPartially() const
{
	cout << "Navn: " << firstName_ << " ";
	if (middleName_ != "")
		cout << middleName_[0] << ". ";
	cout << lastName_ << endl;
	cout << "F\x9B" << "dt: " << socialSecNumber_.substr(0, 6) << endl;
}
void Person::printAll() const
{
	cout << "Navn: " << lastName_ << ", " << firstName_ << " " << middleName_ << endl;
	cout << "Personnr.:" << socialSecNumber_ << endl;
}
bool Person::checkForSameName(const Person& personRef) const
{
	 if (firstName_ == personRef.firstName_ && middleName_ == personRef.middleName_&& lastName_ == personRef.lastName_)
		return true;
	else
		return false;
	
}