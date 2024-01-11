#include <iostream>
#include "Submarine.h"

using namespace std;


Submarine::Submarine(const char* type, int x, int y, int depth)
	: Ship(type, x, y) // Basisklassens constructor kaldes i member initialization listen
{
	setDepth(depth);
}


void Submarine::setDepth(int depth)
{
	depth_ = (depth > 0 ? depth : 0);
}


void Submarine::show() const
{
	// Basisklassens show() kaldes
	Ship::show();
	cout << "Depth:    " << depth_ << endl;
}