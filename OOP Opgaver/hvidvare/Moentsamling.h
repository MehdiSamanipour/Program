#pragma once
#include "Moent.h"
class Moentsamling
{
public:
	Moentsamling();
	void tilfoejMoent(const Moent& nyMoentref);
	void print()const;

	//rule of 3:
	
	Moentsamling(const Moentsamling& copyMe);	//copy-constructer
	const Moentsamling& operator=(const Moentsamling& copyMe);   //assignment-operator
	~Moentsamling();

private:
	Moent* moentPtr_;
	int antalMoenter_;
};

