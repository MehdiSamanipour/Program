#pragma once
#include <iostream>
#include "Point.h"
#include "CircularBuffer.h"

using namespace std;

class CircularBuffer
{
public:
	CircularBuffer(int =10);
	CircularBuffer& insert(int);
	double meanValue()const;
	void print() const;
	~CircularBuffer();
private:
	int size_;
	int newestIndex_;
	int* arrayPtr_;
		
};


// anden metode



class CircularBuffer2
{
public:
	CircularBuffer2(int = 10);
	CircularBuffer2& insert(const Point&);
	Point meanValue() const;
	void print() const;
	~CircularBuffer2();
	
private:
	Point* arrayPtr_;
	int size_;
	int newestIndex_;
};
