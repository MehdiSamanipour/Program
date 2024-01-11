#pragma once
#include <iostream>

using namespace std;

class MemoryAllocationException
{
public:
	MemoryAllocationException(int size)
	{
		memorySize_ = size;
	}

	void reportError()
	{
		cout << "Allocation of memory for " << memorySize_ << " integers failed\n";
	}

private:
	int memorySize_;
};

class IndexRangeException
{
public:
	IndexRangeException(int index)
	{
		indexValue_ = index;
	}

	void reportError()
	{
		cout << "Index with value " << indexValue_ << " does not exist.\n";
	}

private:
	int indexValue_;
};

