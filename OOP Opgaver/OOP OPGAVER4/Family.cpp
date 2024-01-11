#include "Family.h"


Family::Family(const Person& dad, const Person& mum, const Person& son, const Person& daughter) : dad_(dad), mum_(mum), son_(son), daughter_(daughter)
{
}

void Family::print() const
{
	dad_.printAll();
	mum_.printAll();
	son_.printAll();
	daughter_.printAll();
}

//ekstra opgave med array metode

Family2::Family2(const Person m[])
{
	for (int i = 0; i < SIZE; i++)
		members_[i] = m[i];
}


void Family2::print() const
{
	for (int i = 0; i < SIZE; i++)
		members_[i].printAll();
}

// ekstra opgave med array and pointer
Family3::Family3(const Person members[], const int numberOfMembers)
{
	numberOfMembers_ = (numberOfMembers > 0 ? numberOfMembers : 0);

	members_ = new Person[numberOfMembers_];

	for (int i = 0; i < numberOfMembers_; i++)
		members_[i] = members[i];
}

Family3::~Family3()
{
	delete[] members_;
}


void Family3::print() const
{
	for (int i = 0; i < numberOfMembers_; i++)
		members_[i].printAll();

	cout << endl;
}