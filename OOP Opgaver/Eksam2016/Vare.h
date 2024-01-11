#pragma once
#include <string>
#include<iostream>
#include"Kasse.h"
#include"Butik.h"
#include"Vare.h"


using namespace std;

const int ANTAL_VARER = 10;


class Vare : public Butik
{
public:

	Vare(int nummer = 0, string navn = "", double pris = 0);
	int getNummer() const;
	int getLagerAntal() const;
	void bestil(int antal);
	void opdaterAntal(int antalSolgt);
	void print() const;
private:
	int nummer_;
	string navn_;
	double pris_;
	int lagerAntal_;
};