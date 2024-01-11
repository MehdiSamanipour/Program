#include "Ellipse.h"
#include"Shape.h"


Ellipse::Ellipse(int x, int y, int vert, int hori): Shape(x,y)
{
	setAxis(vert, hori);
}

void Ellipse::setAxis(int vert, int hori)
{
	axisVertical_ = (vert > 0 ? vert : 1);
	axisHorizontal_ = (hori > 0 ? hori : 1);
}

void Ellipse::draw() const
{
	cout << "Ellipse med centrum i (" << centerX_ << ", " << centerY_ << ")" << endl;
	cout << "lodret akse " << axisVertical_ << " og vandret akse " << axisHorizontal_ << endl;
	cout << "og arealet " << area() << endl;
}

int Ellipse::area() const
{
	return (int) (((double) axisHorizontal_ + axisVertical_) / 2 * 3.1415926536);
}
