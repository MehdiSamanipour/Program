#include "Point.h"

using namespace std;

Point::Point(double xP, double yP)
{
	setX(xP);
	setY(yP);
}


void Point::setX(double xKoor)
{
	if (xKoor < 0)
	{
		cout << "\nx-koordinaten er mindre end nul. x sat til 0.0\n";
		xKoor = 0.0;
	}
	else if (100 < xKoor)
	{
		cout << "\nx-koordinaten er større end 100. x sat til 100.0\n";
		xKoor = 100.0;
	}
	x_ = xKoor;
}


void Point::setY(double yKoor)
{
	if (yKoor < 0)
	{
		cout << "\ny-koordinaten er mindre end nul. y sat til 0.0\n";
		yKoor = 0.0;
	}
	else if (100 < yKoor)
	{
		cout << "\ny-koordinaten er større end 100. y sat til 100.0\n";
		yKoor = 100.0;
	}
	y_ = yKoor;
}


double Point::getX() const
{
	return x_;
}


double Point::getY() const
{
	return y_;
}

void Point::print() const
{
	cout << "(" << x_ << " , " << y_ << ")";
}


void Point::operator+=(const Point& rightRef)
{
	setX(x_ + rightRef.x_);
	setY(y_ + rightRef.y_);
}


bool Point::operator==(const Point& rightRef) const
{
	return (x_ == rightRef.x_ && y_ == rightRef.y_);
}

// Exercise 12.4
const Point Point::operator/(double divisor) const
{
	return Point(x_ / divisor, y_ / divisor);
}

const Point operator+(const Point& leftRef, const Point& rightRef)
{
	return Point(leftRef.getX() + rightRef.getX(), leftRef.getY() + rightRef.getY());
}

const Point operator-(const Point& leftRef, const Point& rightRef)
{
	return Point(leftRef.getX() - rightRef.getX(), leftRef.getY() - rightRef.getY());
}

// Exercise 12.5
ostream& operator<<(ostream& output, const Point& rightRef)
{
	output << "(" << rightRef.getX() << " , " << rightRef.getY() << ")";

	return output;
}

istream& operator>> (istream& input, Point& rightRef)
{
	double a, b;

	input >> a >> b;

	rightRef.setX(a);
	rightRef.setY(b);

	return input;
}