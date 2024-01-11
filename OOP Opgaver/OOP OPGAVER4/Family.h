#pragma once
#include "Person.h"

class Family
{
public:
	Family(const Person&, const Person&, const Person&, const Person&);
	void print() const;
private:
	Person dad_;
	Person mum_;
	Person son_;
	Person daughter_;
};

// ekstra opgave med  array metode

const int SIZE = 4;

class Family2
{
public:
	Family2(const Person[]);
	void print() const;
private:
	Person members_[SIZE];
};

// ekstra opgave med array metode 2 and pointer
//const int SIZE = 4;


class Family3
{
public:
	Family3(const Person[], const int);
	~Family3();
	void print() const;
private:
	Person* members_;
	int numberOfMembers_;
};