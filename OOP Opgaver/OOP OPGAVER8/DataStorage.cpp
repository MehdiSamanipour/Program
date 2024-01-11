#include "DataStorage.h"
#include <iostream>


DataStorage::DataStorage()
{
}


DataStorage::DataStorage(int size, double initvalue)
:
data_(size, initvalue)
{
	// Either use vector's explicit constructor
	// or use the following assign method - not both
	// data_.assign(size, initvalue);
}


DataStorage & DataStorage::insert(double element)
{
	data_.push_back(element);
	return *this;  // Return reference to self, so cascading is possible
}


int DataStorage::numberOfElements() const
{
	// The number of elements is simply the number of elements in the 
	// vector object
	return data_.size();
}


double DataStorage::meanValue() const
{
	if (data_.empty())
		return 0.0;

	double sum = 0;

	// For loop with explicit declaration of iterator
	for (vector<double>::const_iterator i = data_.cbegin();
		 i != data_.cend();
		 i++
		)
	{
		sum += *i;
	}

	return sum / data_.size();
}


int DataStorage::numberOfElementsBetween(double low, double high) const
{
	int numberOfElements = 0;

	// Using auto with cbegin we will always get a const_iterator
	// even if we forgot to declare the method const
	// The for loop header is now so short it fits on one line
	for (auto i = data_.cbegin(); i != data_.cend(); ++i)
	{
		if (low <= *i && *i <= high)
			++numberOfElements;
	}

	return numberOfElements;
}


int DataStorage::eraseElementsBetween(double low, double high)
{
	int numberOfElements = 0;

	// Using auto and begin we get an iterator
	// - notice, no increment step in the for header, this is done in the loop
	for (auto i = data_.begin(); i != data_.end(); /* No increment here */)
	{
		if (low <= *i && *i <= high)
		{
			// This element must be erased
			++numberOfElements;
			// Update the iterator with the result from erase
			// It could be equal to end()
			i = data_.erase(i);
		}
		else
			// Otherwise increment the iterator
			++i;
	}

	// Alternatively use a while loop
	auto i = data_.begin();

	while (i != data_.end())
	{
		if (low <= *i && *i <= high)
		{
			// This element must be erased
			++numberOfElements;
			// Update the iterator with the result from erase
			// It could be equal to end()
			i = data_.erase(i);
		}
		else
			// Otherwise increment the iterator
			++i;
	}

	return numberOfElements;
}


void DataStorage::print() const
{
	// Using auto with crbegin we will always get a const_reverse_iterator
	// even if we forgot to declare the method const
	// We use crbegin and crend because we want it to be output
	// in reverse order. A reverse iterator goes backwards in the container
	// when using ++!
	for (auto i = data_.crbegin(); i != data_.crend(); ++i)
	{
		cout << *i << ' ';
	}
}
