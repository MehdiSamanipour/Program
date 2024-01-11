#include"Kasse.h"
#include"Butik.h"
#include"Vare.h"
#include<string>
#include<iostream>
using namespace std;



void Butik::opdaterLager()
{
	int solgteVarer[ANTAL_VARER];

	for (size_t i = 0; i < ANTAL_KASSER; i++)
	{
		Kasser_[i].ekspedition(solgteVarer, ANTAL_VARER);

		cout << "\nKasse " << i + 1 << ":" << endl;

		for (size_t j = 0; j < ANTAL_VARER; j++)
		{
			if (Varer_[j].getNummer() != 0 && solgteVarer[j] != 0)
			{
				cout << endl << solgteVarer[j] << " stk ";
				Varer_[j].print();
			}
		}

		for (size_t j = 0; j < ANTAL_VARER; j++)
		{
			if (solgteVarer[j] != 0)
				Varer_[j].opdaterAntal(solgteVarer[j]);
		}
	}
}
void Butik::bestilVarer()
{
	for (size_t i = 0; i < ANTAL_VARER; i++)
		if (Varer_[i].getNummer() != 0 && Varer_[i].getLagerAntal() < 6)
			Varer_[i].bestil(10);
}


void Butik::printLager() const
{
	cout << "\n\n*** " << navn_ << " ***" << endl;
	cout << "\nLagerstatus:" << endl;
	for (size_t i = 0; i < ANTAL_VARER; i++)
	{
		if (Varer_[i].getNummer() != 0)
			Varer_[i].print();
	}	
}

void Butik::tilfoejVare(int nummer, string navn, double pris)
{
	if (nummer < 1000 || 1000 + ANTAL_VARER <= nummer)
		cout << "Error! Ugyldigt varenummer" << endl;
	else
	{
		if (Varer_[nummer - 1000].getNummer() == 0)
			Varer_[nummer - 1000] = Vare(nummer, navn, pris);
		else
		{
			cout << "Error! Der findes allerede en vare med varenummer ";
			cout << nummer << endl;
		}
	}
}

 Butik::Butik(string navn)
{
	navn_ = navn;
	for (size_t i = 0; i < ANTAL_KASSER; i++)
		Kasser_[i] = Kasse(i + 1);
}