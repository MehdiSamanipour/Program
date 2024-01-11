#pragma once
#include <iostream>

using namespace std;


class IntArray
{
public:
	IntArray( int=10 );
	~IntArray();
	void setArraySize( int );
	int getArraySize() const;
	void insertNumber( int, int );
	void print() const;
private:
	int arraySize_ = 0;
	int *arrayPtr_;
};
