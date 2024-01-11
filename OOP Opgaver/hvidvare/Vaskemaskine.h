#pragma once
#include "Hvidevare.h"
#include <iostream>

class Vaskemaskine :public Hvidevare
{
public:
	Vaskemaskine(const std::string& maerke, const std::string& model, char energiklasse, float kapacitet);

		float getKapacitet() const;
		virtual void print() const;
private:
		void tegnSymbol() const;
		float kapacitet_;				// Vaskekapacitet i kg tøj
										// Gyldige værdier [3.0;10.0]
};

