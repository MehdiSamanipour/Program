#include "Moentsamling.h"
#include <iostream>
#include <string.h>
using namespace std;

Moentsamling::Moentsamling()
{
	antalMoenter_ = 0;
	moentPtr_ = nullptr;
}

Moentsamling::~Moentsamling()
{
	delete[]moentPtr_;
}

Moentsamling::Moentsamling(const Moentsamling& copyMe)		//copy
{
	antalMoenter_ = copyMe.antalMoenter_;
	moentPtr_ = new Moent[antalMoenter_];
	for (size_t i = 0; i < antalMoenter_; i++)
	{
		moentPtr_[i] = copyMe.moentPtr_[i];
	}

	


}

const Moentsamling& Moentsamling::operator=(const Moentsamling& copyMe)	//as
{
	if (this != &copyMe)	// avoid self assignment
	{
		if (antalMoenter_ != copyMe.antalMoenter_)
		{
			antalMoenter_ = copyMe.antalMoenter_;
			delete[]moentPtr_;
			moentPtr_ = new Moent[antalMoenter_];
		}
		for (size_t i = 0; i <antalMoenter_; i++)
		
			moentPtr_[i] = copyMe.moentPtr_[i];
		
	}
	return *this;
}

void Moentsamling::tilfoejMoent(const Moent& nyMoentRef)
{
	Moent* temp = moentPtr_;

	moentPtr_ = new Moent[antalMoenter_] + 1;
	for (size_t i = 0; i <antalMoenter_; i++)
	{
		moentPtr_[i] = temp[i];
	}
	antalMoenter_++;
	delete temp;

}

void Moentsamling::print() const
{
	for (size_t i = 0; i < antalMoenter_; i++)
		moentPtr_[i].print();
}
