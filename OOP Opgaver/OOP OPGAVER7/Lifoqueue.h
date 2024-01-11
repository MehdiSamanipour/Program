
#pragma once
#include<iostream>
using namespace std;

const int QUEUE_LENGTH = 10;

template<typename type>
class Lifoqueue
{
public:

	Lifoqueue()
	{
		firstFreeIndex_ = 0;
	}

	bool insert(type& typeRef)
	{
		if (!isFull())
		{
			queueArray_[firstFreeIndex_++] = typeRef;
			return true;
		}
		return false;
	}

	bool remove(type& typeRef)
	{
		if (!isEmpty())
		{
			typeRef = queueArray_[--firstFreeIndex_];
			return true;
		}
		return false;
	}

	bool isEmpty() const
	{
		return (firstFreeIndex_ == 0);
	}

	bool isFull() const
	{
		return (firstFreeIndex_ == QUEUE_LENGTH);
	}

	void clear()
	{
		firstFreeIndex_ = 0;
	}
private:
	int firstFreeIndex_;
	type queueArray_[QUEUE_LENGTH];
	
};

