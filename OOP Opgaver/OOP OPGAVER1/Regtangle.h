#pragma once
#include <iostream>
#include "Point.h"

using namespace std;


class Rectangle
{
public:
	Rectangle(double xTL = 0, double yTL = 0, double xBR = 100, double yBR = 100);

	void setXTopLeft(double);
	void setYTopLeft(double);
	void setXBottomRight(double);
	void setYBottomRight(double);

	double getXTopLeft() const;
	double getYTopLeft() const;
	double getXBottomRight() const;
	double getYBottomRight() const;

	double hight() const;
	double width() const;
	double perimeter() const;
	double area() const;
	bool isSquare() const;
	void print() const;

private:
	Point topLeft_;
	Point bottomRight_;
};
