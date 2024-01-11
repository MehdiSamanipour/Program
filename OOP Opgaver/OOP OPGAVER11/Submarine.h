
#pragma once

#include "Ship.h"
// Rule of three is not necessary for Submarine
// The base class has it's own implementation of rule-of-three

class Submarine : public Ship
{
public:
	Submarine( const char * = "Ukendt", int = 0, int = 0, int = 0 );
	void setDepth( int );
	void show() const override;
private:
	int depth_;
};