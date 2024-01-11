#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int x, int y, int vert, int hori)
	: Shape(x, y)
{
	setSides(vert, hori);
}

void Rectangle::setSides(int vert, int hori)
{
	sideVertical_ = (vert > 0 ? vert : 1);
	sideHorizontal_ = (hori > 0 ? hori : 1);
}

void Rectangle::draw() const
{
	cout << "Rectangle med centrum i (" << centerX_ << ", " << centerY_ << ")" << endl; 
	cout << "lodret side " << sideVertical_ << " og vandret side " << sideHorizontal_ << endl;
	cout << "og arealet " << area() << endl;
}

int Rectangle::area() const
{
	return sideHorizontal_ * sideVertical_;
}
