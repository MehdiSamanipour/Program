#pragma once
#include <string>
#include<iostream>
#include"Vare.h"
#include"Kasse.h"
using namespace std;

class Butik 
{
public:
	
	Butik(string navn);
	void tilfoejVare(int nummer, string navn, double pris);
	void bestilVarer();
	void opdaterLager();
	void printLager()const;


private:
	string navn_;
	Vare Varer_[ANTAL_VARER];
	Kasse  Kasser_[ANTAL_KASSER];
};

