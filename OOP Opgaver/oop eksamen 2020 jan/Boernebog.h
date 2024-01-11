#pragma once
#include"Bog.h"

class Boernebog : public  Bog
{
public:
	Boernebog(const string& titel, const string& forfatter, int minimuAlder);

	void setMinimumAlder(int minimumAlder);
	int getMinimumAlder() const override;

	

private:
	int minimumAlder_;

};

