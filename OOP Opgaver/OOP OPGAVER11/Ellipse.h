#pragma once
#include"Shape.h"

#include <iostream>

using namespace std;

class Ellipse : public Shape
{
public:
	Ellipse(int x, int y, int vert, int hori);
	void setAxis(int vert, int hori);
	void draw() const;
	int area() const;


private:
	int axisVertical_;
	int axisHorizontal_;
};

