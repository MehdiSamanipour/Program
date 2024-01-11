#pragma once

#include<string>
using namespace std;

class Kunde 
{
public:
	Kunde( int kunderNummer = 0 , string navn = "nn", float saldo=0.0 );
	void setKundeNummer(int);
	int  getKundeNummer(void)const ;
	void  setNavn(string);
	string getNavn(void)const ;
	void  opdaterSaldo(float);
	float getSaldo(void)const;
	void  print(void)const;

private:
	int kundeNummer_;
	string navn_;
	float  saldo_;
};

