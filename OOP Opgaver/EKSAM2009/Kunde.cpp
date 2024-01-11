#include"Kunde.h"
#include<iostream>

Kunde::Kunde(int kunderNummer, string navn, float saldo) {

	/*kundeNummer_ = kunderNummer;  */  //alternative
	setKundeNummer(kunderNummer);
	navn_ = navn;
	saldo_ = saldo;
}
void Kunde::setKundeNummer(int kundeNummer) {

	if ((kundeNummer < 1000 || 9999 < kundeNummer) && kundeNummer != 0){

		cout << "\nFejl i kunder er sat til 10000.\n";
		kundeNummer = 10000;
	}
	kundeNummer_ = kundeNummer;
}
int  Kunde::getKundeNummer(void)const {

	return kundeNummer_;
}
void  Kunde::setNavn(string navn) {

	navn_ = navn;
}
string Kunde::getNavn(void)const {

	return navn_;
}
void  Kunde::opdaterSaldo(float saldo) {

	saldo_ = saldo;
}
float Kunde::getSaldo(void)const {

	return saldo_;
}
void  Kunde::print(void)const {

	cout << "kundenummer " << "  : " << kundeNummer_ << endl;
	cout << "Navn          " << ": " << navn_ << endl;
	cout << "saldo             " << ": " << saldo_ << endl;
}