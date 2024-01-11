

#include <iostream>
#include "Person.h"

using namespace std;


Person::Person( int id, int age )
{
	setId( id );
	setAge( age );
}

Person::~Person()
{

}

void Person::setId( int id )
{
	id_ = ( id<1000 || id >9999 ? 0 : id );
}


int Person::getId() const
{
	return id_;
}


void Person::setAge( int age )
{
	age_ = ( age<15 || age >67 ? 0 : age );
}


int Person::getAge() const
{
	return age_;
}


void Person::print() const
{
	cout << "\nID nummer   : " << id_ << endl;
	cout << "Alder       : " << age_ << endl;
}