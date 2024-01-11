#pragma once
#include <iostream>
#include <string>

using namespace std;

class Box
{
	friend ostream & operator<<(ostream &out, const Box &box);
public:
	Box(const string &name, const string &type, int max = 100);
	Box & operator++();
	Box operator++(int);
	Box & operator--();
	Box operator--(int);
	void print() const;
private:
	string boxName_;
	string itemType_;
	int numberOfItems_;					// legal values 0-MAX_NUMBER_OF_ITEMS_
	const int MAX_NUMBER_OF_ITEMS_;
};

ostream & operator<<(ostream &out, const Box &box);