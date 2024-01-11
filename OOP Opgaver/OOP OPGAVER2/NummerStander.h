#pragma once
#include<iostream>

class NummerStander
{
public:
	NummerStander();
	void traekNummer();
	int getNaesteNummerIKoe();
private:
	int senesteTrukneNummer_;
	int senestEkspederedeNummer_;
};
