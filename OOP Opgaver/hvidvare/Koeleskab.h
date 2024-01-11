#pragma once
 #include <iostream>
#include "Hvidevare.h"

class Koeleskab: public Hvidevare
{
public:
	Koeleskab(const std::string& maerke, const std::string& model, char energiklasse, int volumen);
	int getVolumen() const;
	void print() const;
private:
	void tegnSymbol() const;
	int volumen_;					// Indvendig volumen i liter
									// Gyldige værdier [50;500]
};