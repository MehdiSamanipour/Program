#pragma once
#include <iostream>
#include <string>

using namespace std;

class Member
{
public:
	Member(const string &firstname, const string &lastname);
	string getFirstname() const;
	string getLastname() const;
	void setMembernumber(int);
	int getMembernumber() const;
	void print() const;

	friend ostream & operator<<(ostream &, const Member &);

private:
	string firstname_;
	string lastname_;
	int membernumber_;
};

ostream & operator<<(ostream &, const Member &);