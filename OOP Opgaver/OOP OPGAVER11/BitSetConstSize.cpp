#include "BitSetConstSize.h"

BitSetConstSize::BitSetConstSize(int size)
	: size_(size > 0 ? size : 32)
{

	dataPtr_ = new int[size_];
	for (int i = 0; i < size_; i++)
	{
		dataPtr_[i] = 0;
	}

	dataPtr_ = new int[size_] {0};  // Alternativ initialisering

}

BitSetConstSize& BitSetConstSize::shiftIn(int data)
{
	if (data == 0 || data == 1)
	{
		for (int i = 0; i < size_ - 1; ++i)
		{
			dataPtr_[i] = dataPtr_[i + 1];
		}

		dataPtr_[size_ - 1] = data;
	}

	return *this;
}

void BitSetConstSize::print() const
{
	for (int i = 0; i < size_; i++)
	{
		cout << dataPtr_[i];
	}
}

BitSetConstSize::~BitSetConstSize()
{
	delete[] dataPtr_;
}

BitSetConstSize::BitSetConstSize(const BitSetConstSize& copyMe)
	: size_(copyMe.size_)
{
	dataPtr_ = new int[size_];

	for (int i = 0; i < size_; i++)
	{
		dataPtr_[i] = copyMe.dataPtr_[i];
	}
}

const BitSetConstSize& BitSetConstSize::operator=(const BitSetConstSize& copyMe)
{
	if (this != &copyMe)
	{
		// size_ er const, så vi kan ikke ændre den
		// vi må smide data væk eller fylde op med nuller eller bevare de gamle data
		// vi klarer begge dele med 2 for løkker og en beregning
		int minimum = (size_ < copyMe.size_) ? size_ : copyMe.size_;

		// Copy the minimum amount of data
		for (int i = 0; i < minimum; i++)
		{
			dataPtr_[i] = copyMe.dataPtr_[i];
		}

		// Fill the rest with zeroes, if our size is larger than copyMe.size_
		// Alternatively, do nothing and leave the old data in there!
		for (int i = minimum; i < size_; i++)
		{
			dataPtr_[i] = 0;
		}

	}

	return *this;
}