#include "IntArray.h"

#include <iostream>
using namespace std;

IntArray::IntArray(int s)
{
	arraySize_ = (s > 0 ? s : 10);

	arrayPtr_ = new int[arraySize_];

	for (int i = 0; i < arraySize_; i++)
		arrayPtr_[i] = 0;
}


IntArray::~IntArray()
{
	delete[] arrayPtr_;
}


void IntArray::setArraySize(int s)
{
	if (s > 0 && s != arraySize_)
	{
		cout << "\nChanging arraysize - ";
		cout << ((s < arraySize_) ? "some data lost\n" : "no data lost\n");

		int* newPtr = new int[s];
		int minimum = s < arraySize_ ? s : arraySize_;

		// Copy data
		for (int i = 0; i < minimum; i++)
			newPtr[i] = arrayPtr_[i];

		// Fill remaining - if any - with zero
		for (int i = minimum; i < s; i++)
			newPtr[i] = 0;

		delete[] arrayPtr_;
		arrayPtr_ = newPtr;

		arraySize_ = s;
	}
}


int IntArray::getArraySize() const
{
	return arraySize_;
}


void IntArray::indsaetTal(int tal, int plads)
{
	if (plads >= 0 && plads < arraySize_)
	{
		arrayPtr_[plads] = tal;
	}
}


void IntArray::print() const
{
	cout << endl;

	for (int i = 0; i < arraySize_; i++)
		cout << arrayPtr_[i] << " ";

	cout << endl;
}