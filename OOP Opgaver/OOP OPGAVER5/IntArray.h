#pragma once
#include "Point.h"
#include "CircularBuffer.h"

class IntArray
{
public:
	IntArray(int = 10);
	~IntArray();

	void setArraySize(int);
	int getArraySize() const;

	void indsaetTal(int, int);
	void print() const;

private:
	int arraySize_;
	int* arrayPtr_;
};