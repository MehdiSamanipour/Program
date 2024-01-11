#include "Box.h"

Box::Box(const string &name, const string &type, int max) :MAX_NUMBER_OF_ITEMS_(max)
{
	boxName_ = name;
	itemType_ = type;
	numberOfItems_ = 0;
}

Box & Box::operator++()
{
	if (numberOfItems_ < MAX_NUMBER_OF_ITEMS_)
		numberOfItems_++;

	return *this;
}

Box Box::operator++(int)
{
	if (numberOfItems_ < MAX_NUMBER_OF_ITEMS_)
	{
		Box localCopy = *this;

		++(*this);

		return localCopy;
	}
	else
		return *this;
}

Box & Box::operator--()
{
	if (numberOfItems_ > 0)
		numberOfItems_--;

	return *this;
}

Box Box::operator--(int)
{
	if (numberOfItems_ > 0)
	{
		Box localCopy = *this;

		--(*this);

		return localCopy;
	}
	else
		return *this;
}

void Box::print() const
{
	cout << *this;
}

ostream & operator<<(ostream &out, const Box &box)
{
	out << box.boxName_ << "n indeholder " << box.numberOfItems_ << " " << box.itemType_ << endl;
	return out;
}