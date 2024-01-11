
#include <iostream>

using namespace std;

#include "CircularBuffer-Point.h"


CircularBuffer3::CircularBuffer3(int s)
{
	size_ = (s > 0 ? s : 10);

	arrayPtr_ = new Point[size_]; // This will call the default constructor for Point, which must exist

	// No initialization necessary


	newestIndex_ = -1;
}


CircularBuffer3& CircularBuffer3::insert(const Point& pointRef)
{
	(++newestIndex_) %= size_;
	arrayPtr_[newestIndex_] = pointRef;
	return *this;
}


Point CircularBuffer3::meanValue() const
{
	// Changed for exercise 12.4

	Point localPoint;  // Default point is (0, 0)

	for (int i = 0; i < size_; ++i)
		localPoint += arrayPtr_[i]; // We can now use += between points

	return localPoint / size_;  // We can now divide a point with a double
}


void CircularBuffer3::print() const
{
	// Changed for exercise 12.5
	cout << endl;

	for (int k = size_; k > 0; k--)
	{
		// We can now directly output a point to an ostream
		cout << arrayPtr_[(k + newestIndex_) % size_] << " ";
	}

	cout << endl;
}


CircularBuffer3::~CircularBuffer3()
{
	delete[] arrayPtr_;
}


// Additions for exercise 12.6 Rule-of-three
CircularBuffer3::CircularBuffer3(const CircularBuffer3& copyme)
{
	size_ = copyme.size_;
	arrayPtr_ = new Point[size_];
	newestIndex_ = copyme.newestIndex_;
	for (int i = 0; i < size_; i++)
		arrayPtr_[i] = copyme.arrayPtr_[i];
}

const CircularBuffer3& CircularBuffer3::operator=(const CircularBuffer3& copyme)
{
	if (this != &copyme)
	{
		if (size_ != copyme.size_)
		{
			size_ = copyme.size_;
			delete[] arrayPtr_;
			arrayPtr_ = new Point[size_];
		}

		newestIndex_ = copyme.newestIndex_;
		for (int i = 0; i < size_; i++)
			arrayPtr_[i] = copyme.arrayPtr_[i];
	}

	return *this;
}