#pragma once


class Ship
{
public:
	Ship( const char * = "Ukendt", int = 0, int = 0 );
	virtual ~Ship();
	void setPosition( int, int );
	void getPosition( int &, int &);
	void setType( const char * );
	float distance( const Ship & ) const;
	virtual void show() const;
	Ship(const Ship& copyMe);
	Ship& operator= (const Ship& copyMe);

protected:
	char *type_;

private:
	int x_;
	int y_;
};
