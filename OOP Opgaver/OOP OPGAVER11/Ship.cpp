#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

#include "Ship.h"


Ship::Ship( const char * type, int x, int y )
{
	// Vi kan ikke brug setType, for type_ er jo ikke sat endnu
	// Alternativt, kan vi sætte type_ til nullptr først
	int len = strlen(type) + 1;
	type_ = new char [ len ];
	strcpy_s( type_, len, type );

	setPosition( x, y );
}

Ship::~Ship()
{
	cout << "*** Ship destructor called ***" << endl;
	delete [] type_;
}

void Ship::setPosition( int x, int y )
{
	x_ = x;
	y_ = y;
}


void Ship::getPosition( int &x, int &y)
{
	x = x_;
	y = y_;
}


void Ship::setType( const char * type )
{
	// Kan først bruges, når type_ har en gyldig værdi

	// Check om det er nødvendigt at reallokere
	int len = strlen(type) + 1;
	if (strlen(type_)+1 != len)
	{
		delete [] type_;
		type_ = new char [ len ];
	}

	strcpy_s( type_, len, type );
}


float Ship::distance( const Ship & otherShip ) const
{
	int a = x_ - otherShip.x_;
	int b = y_ - otherShip.y_;

	return ( sqrt( (double) (a*a + b*b) ) );
}


void Ship::show() const
{
	cout << endl << "Type:     " << type_ << endl;
	cout << "Position: ( " << x_ << ", " << y_ << " )\n";
}

Ship::Ship(const Ship& copyMe)
{
	int len = strlen(copyMe.type_) + 1;
	type_ = new char[len];
	strcpy_s(type_, len, copyMe.type_);

	setPosition(copyMe.x_, copyMe.y_);
}

Ship& Ship::operator=(const Ship& copyMe)
{
	if (this != &copyMe)
	{
		setType(copyMe.type_);
		setPosition(copyMe.x_, copyMe.y_);
	}

	return *this;
}