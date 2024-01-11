#pragma once
#include <iostream>
using namespace std;

class Point
{
public:
	Point(double = 0, double = 0);
	void setX(double);
	void setY(double);
	double getX() const;
	double getY() const;

	void print() const;
	// mellemoperator
	void operator+=(const Point&);
	bool operator==(const Point&) const;

	const Point operator/(double divisor) const;
private:
	double x_;
	double y_;
};
         //fri operator
const Point operator+(const Point&, const Point&);
const Point operator-(const Point&, const Point&);

ostream& operator<<(ostream&, const Point&);
istream& operator>>(istream&, Point&);