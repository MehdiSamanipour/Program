#pragma once

#include "Ship.h"


class Containership : public Ship
{
public:
	Containership(const char* = "Ukendt", const char* = "NN", int = 0, int = 0);
	~Containership();
	void setName(const char*);
	void show() const;
private:
	char* name_;;
};
