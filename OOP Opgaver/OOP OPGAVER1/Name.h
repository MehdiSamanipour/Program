#pragma once

#include <iostream>
#include <string>

using namespace std;


class Name
{
public:
	Name(string firstName = "N", string lastName = "N");
	void setName(string fN, string lN);
	void printName(void) const;
private:
	string firstName_;
	string lastName_;
};