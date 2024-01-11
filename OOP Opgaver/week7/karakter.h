#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Karakter
{
	string fag;
	int karakter;

};

struct KarakterBog
{
	string navn;
	vector<Karakter> karakterer;
};

void printKarakter(Karakter k)
{
	cout << "Fag: " << k.fag << " Karakter: " << k.karakter << endl;
}


void printKarakterBog(KarakterBog kb)
{
	cout << "Karakterbog for: " << kb.navn << endl;
	for (int i = 0; i < kb.karakterer.size(); i++)
	{
		printKarakter(kb.karakterer[i]);
	}
}