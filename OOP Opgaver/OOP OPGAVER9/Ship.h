#pragma once
#include <iostream>
#include <cstring>
#include <cmath>
#include<vector>

using namespace std;


class Ship
{
public:
	Ship(const char* = "Ukendt", int = 0, int = 0);
	void setPosition(int, int);
	void getPosition(int&, int&);
	void setType(const char*);
	float distance(const Ship&) const;
	void show() const;
	~Ship();
protected:
	char* type_;

private:
	int x_;
	int y_;
};
