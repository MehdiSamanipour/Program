#pragma once

#include"Kunde.h"

const int SIZE = 20;

class Kartotek : public Kunde
{
public:
	Kartotek();
	bool nyKunde(int, string, float);
	void  getKunde(int & , string &, float &)const; // Kunde skift til constructor Kunde class
	void  opdaterKunde(int, float);
	void  sletKunde(int);
	int  getAntalKunder(void)const ;
	void printKunde(int)const;
	void  printAlle(void)const;

private:
	Kunde kundeArray[SIZE];
	int antalKunder;
};

