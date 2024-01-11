// Project		Exercises 1. semester
//
// File			Triangle.cpp
//
// Description	Implementation of class Triangle
//
// Author		NVJ
//
// Version		1.0 - 130411 - original version
//              2.0 - 190416 - ændret og udvidet pga. lektionsomlægning - FRABJ
//				3.0 - 20201115 - brugt til OOP opgave som del af Shape arvehierarki - FRABJ

#include <iostream>
#include <cmath>
#include "Triangle.h"

using namespace std;


Triangle::Triangle()
	: Shape (0, 0)
{
	setSides( 1, 1, 1 );
}


Triangle::Triangle( int x, int y, int a, int b, int c )
	: Shape(x, y)
{
	setSides( a, b, c );
}


void Triangle::setSides( int a, int b, int c )
{
	// Siderne skal være positive
	// og summen af alle kombinationer af to sider skal være
	// større end den tredje side, ellers er det ikke en mulig ægte trekant
	if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
	{
		a_ = a;
		b_ = b;
		c_ = c;
	}
	else
	{
		// Betingelser ikke opfyldt, sæt alle sider til default værdi
		cout << "\nFejl i trekantens sider. Sider sat til (1, 1, 1)." << endl;
		a_ = b_ = c_ = 1;
	}

}

int Triangle::getSideA() const
{
	return a_;
}

int Triangle::getSideB() const
{
	return b_;
}

int Triangle::getSideC() const
{
	return c_;
}



int Triangle::circumference( void ) const
{
	return ( a_ + b_ + c_ );
}


int Triangle::area( void ) const
{
	double s = 0.5 * circumference();
	return ( sqrt( s * (s - a_) * (s - b_) * (s - c_) ) );
}


void Triangle::draw( void ) const
{
	cout << "Triangle med centrum i (" << centerX_ << ", " << centerY_ << ")" << endl;
	cout << "side A " << a_ << ", side B " << b_ << " og side C " << c_ << endl;
	cout << "og arealet " << area() << endl;
}