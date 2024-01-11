#include"Butik.h"
#include"Kasse.h"
#include"Vare.h"
#include<string>
using namespace std;







Vare::Vare(int nummer, string navn, double pris)
{
	nummer_ = (1000 <= nummer && nummer < 1000 + ANTAL_VARER ? nummer : 0);
	navn_ = navn;
	pris_ = (0 <= pris ? pris : 0);
	lagerAntal_ = 0;
}

int Vare::getNummer() const {

	return nummer_;
}
int Vare::getLagerAntal() const {

	return lagerAntal_;
}
void Vare::bestil(int antalBestilt) {

	lagerAntal_ += antalBestilt;
}
void Vare::opdaterAntal(int antalSolgt) {

	lagerAntal_ -= antalSolgt;
	if (lagerAntal_ < 0)
		 lagerAntal_ = 0;
}
void Vare::print() const {

	cout << "Varenummer:   " << nummer_ << endl;
	cout << "Navn:         " << navn_ << endl;
	cout << "Pris:           " << pris_ <<" kr"<< endl;
	cout << "Lagerstatus:     "<<lagerAntal_ <<" stk"<< endl;
}