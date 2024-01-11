

#include "PriorityQueue.h"


PriorityQueue::PriorityQueue( int size )
{
	size_ = ( size > 0 ? size : 10 );

	freeSpace_ = size_;

	data_ = new int [size_];

	for( int i=0; i<size_; i++ )
		data_[i] = 0;
}


PriorityQueue::~PriorityQueue()
{
	delete [] data_;
}


bool PriorityQueue::push( int value )
{
	if (value > 0 && freeSpace_ > 0)
	{
		for (int i = 0; i < size_; i++)
		{
			if (data_[i] == 0)
			{
				data_[i] = value;
				--freeSpace_;
				return true;
			}
		}
	}

	return false;
}


int PriorityQueue::pop()
{
	int maxValueIndex = 0, maxValue = data_[0];

	if (freeSpace_ < size_)
	{
		for (int i = 1; i<size_; i++)
		{
			if (data_[i] > maxValue)
			{
				maxValue = data_[i];
				maxValueIndex = i;
			}
		}

		data_[maxValueIndex] = 0;
		++freeSpace_;
		return maxValue;
	}
	else
		return 0;
}


int PriorityQueue::getSize() const
{
	return size_;
}


int PriorityQueue::getFreeSpace() const
{
	return freeSpace_;
}


const int *PriorityQueue::getData() const
{
	return data_;
}

ostream &operator<<( ostream &output, const PriorityQueue &pq )
{
	const int *myPtr = pq.getData();

	for (int i = 0; i < pq.getSize(); i++)
	{
		if (myPtr[i] != 0)
		{
			output << myPtr[i] << " ";
		}
	}

	output << endl;

	return output;
}

// Exercise 12.9
PriorityQueue::PriorityQueue(const PriorityQueue& copyMe)
{
	size_ = copyMe.size_;
	data_ = new int[size_];
	freeSpace_ = copyMe.freeSpace_;
	for (int i = 0; i < size_; i++)
		data_[i] = copyMe.data_[i];
}

const PriorityQueue& PriorityQueue::operator=(const PriorityQueue& copyMe)
{
	if (this != &copyMe)
	{
		if (size_ != copyMe.size_)
		{
			delete [] data_;
			size_ = copyMe.size_;
			data_ = new int[size_];
		}

		freeSpace_ = copyMe.freeSpace_;
		for (int i = 0; i < size_; i++)
			data_[i] = copyMe.data_[i];
	}

	return *this;
}

