#pragma once

#include "Ship.h"


class Submarine : public Ship
{
public:
	Submarine(const char* = "Ukendt", int = 0, int = 0, int = 0);
	void setDepth(int);
	void show() const;
private:
	int depth_;
};