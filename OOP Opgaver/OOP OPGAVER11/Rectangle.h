#pragma once

#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(int x, int y, int vert, int hori);
	void setSides(int vert, int hori);
	void draw() const override;
	int area() const;


private:
	int sideVertical_;
	int sideHorizontal_;
};
