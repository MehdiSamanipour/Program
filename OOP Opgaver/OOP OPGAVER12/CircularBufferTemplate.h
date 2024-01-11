#include <iostream>
using namespace std;
#include"Point.h"

template < typename myType >
class CircularBuffer
{
public:
	CircularBuffer(int = 10);
	CircularBuffer &insert(const myType &);
	myType meanValue() const;
	void print() const;
	~CircularBuffer()
	{
		delete[] arrayPtr_;
	};
	// rule of tree
	CircularBuffer(const CircularBuffer& copyMe);
	const CircularBuffer& operator=(const CircularBuffer& copyMe);

private:
	myType *arrayPtr_;
	int size_;
	int newestIndex_;
};

template < typename myType >
CircularBuffer<myType>::CircularBuffer(int s)
{
	size_ = (s > 0 ? s : 10);

	arrayPtr_ = new myType[size_];

	newestIndex_ = -1;

	// Initialize to default value
	for (int i = 0; i < size_; i++)
	{
		arrayPtr_[i] = myType();  // Default constructor also valid for int and other base types
	}
}

template < typename myType >
CircularBuffer<myType> & CircularBuffer<myType>::insert(const myType &v)
{
	(++newestIndex_) %= size_;
	arrayPtr_[newestIndex_] = v;

	return *this;
}

template < typename myType >
myType CircularBuffer<myType>::meanValue() const
{
	myType sum = myType();  // Default constructor also valid for int and other base types

	for (int i = 0; i < size_; i++)
	{
		sum += arrayPtr_[i];
	}

	return sum / size_;

}

template < typename myType >
void CircularBuffer<myType>::print() const
{
	for (int i = 0; i < size_; i++)
	{
		 cout << arrayPtr_[i] << endl;
	}

}

// Additions for exercise 12.6 Rule - of - three
template <typename myType>
CircularBuffer<myType>::CircularBuffer<myType>(const CircularBuffer<myType>&copyme)
{
	size_ = copyme.size_;
	arrayPtr_ = new myType[size_];
	newestIndex_ = copyme.newestIndex_;
	for (int i = 0; i < size_; i++)
		arrayPtr_[i] = copyme.arrayPtr_[i];
}

template <typename myType>
const CircularBuffer<myType>& CircularBuffer<myType>::operator=(const CircularBuffer<myType>&copyme)
{
	if (this != &copyme)
	{
		if (size_ != copyme.size_)
		{
			size_ = copyme.size_;
			delete[] arrayPtr_;
			arrayPtr_ = new myType[size_];
		}

		newestIndex_ = copyme.newestIndex_;
		for (int i = 0; i < size_; i++)
			arrayPtr_[i] = copyme.arrayPtr_[i];
	}

	return *this;
}