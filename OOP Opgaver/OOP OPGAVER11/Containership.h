
#pragma once

#include "Ship.h"


class Containership : public Ship
{
public:
	Containership(const char * = "Ukendt", const char * ="NN", int = 0, int = 0);
	~Containership() override;
	void setName( const char * );
	void show() const override;
	Containership(const Containership& copyMe);
	Containership& operator=(const Containership& copyMe);
private:
	char * name_;;
};