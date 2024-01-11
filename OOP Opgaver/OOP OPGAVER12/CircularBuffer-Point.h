#pragma once
#include<iostream>
#include "Point.h"
using namespace std;


class CircularBuffer3
{
public:
	CircularBuffer3(int = 10);
	CircularBuffer3& insert(const Point&);
	Point meanValue() const;
	void print() const;
	~CircularBuffer3();

	// Exercise 12.6 Rule-of-three
	CircularBuffer3(const CircularBuffer3& copyme);
	const CircularBuffer3& operator=(const CircularBuffer3& copyme);

private:
	Point* arrayPtr_;
	int size_;
	int newestIndex_;
};