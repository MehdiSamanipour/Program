#pragma once
#include<iostream>
using namespace std;
class BitSetConstSize
{
public:
	BitSetConstSize(int size);
	~BitSetConstSize();

	// Ekstra metoder til rule-of-three Opgave 11.3
	BitSetConstSize(const BitSetConstSize& copyMe);  // Copy constructor
	const BitSetConstSize& operator=(const BitSetConstSize& copyMe); // Copy Assignment

	BitSetConstSize& shiftIn(int data);
	// int shiftOut();

	void print() const;

private:
	int* dataPtr_;
	const int size_;
};
