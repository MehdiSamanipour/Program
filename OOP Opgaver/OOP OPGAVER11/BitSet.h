#pragma once
#include<iostream>
using namespace std;
class BitSet
{
public:
	BitSet(int size);
	~BitSet();

	// Ekstra metoder til rule-of-three Opgave 11.3
	BitSet(const BitSet& copyMe);  // Copy constructor
	const BitSet& operator=(const BitSet& copyMe); // Copy Assignment

	BitSet& shiftIn(int data);
	// int shiftOut();

	void print() const;

private:
	int* dataPtr_;
	int size_;
};
