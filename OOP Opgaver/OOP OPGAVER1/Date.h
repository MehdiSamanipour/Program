#pragma once

#include <iostream>

using namespace std;


class Date
{
public:
	Date(int day = 1, int month = 1, int year = 1900);
	bool set(int d, int m, int y);
	void print() const;
private:
	bool validate() const;
	int day_;
	int month_;
	int year_;
};
