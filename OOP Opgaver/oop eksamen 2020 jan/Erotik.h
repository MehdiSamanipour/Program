#pragma once
#include"Bog.h"
class Erotik : public Bog
{
public:
	Erotik(const string& titel, const string& forfatter);
	int getMinimumAlder()const override;

private:

};


