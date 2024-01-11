
#pragma once
#include "Shape.h"

class Triangle : public Shape
{
public:
	Triangle();
	Triangle( int x, int y, int a, int b, int  c);

	void setSides( int a, int b, int c );

	int getSideA() const;
	int getSideB() const;
	int getSideC() const;

	int circumference( void ) const;
	int area( void ) const override;

	void draw( void ) const override;

private:
	int a_;
	int b_;
	int c_;
};