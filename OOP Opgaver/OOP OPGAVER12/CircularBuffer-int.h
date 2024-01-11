#pragma once
#include <iostream>

#include"CircularBuffer-int.h"

using namespace std;
class CircularBuffer2
{
public:
	CircularBuffer2(int = 10);
	CircularBuffer2& insert(int);
	double meanValue() const;
	void print() const;
	~CircularBuffer2();
private:
	int* arrayPtr_;
	int size_;
	int newestIndex_;
};