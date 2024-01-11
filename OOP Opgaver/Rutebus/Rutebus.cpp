#include"Rutebus.h"


Rutebus::Rutebus() {
	farve_ = "ukendt";
	rutenr_ = 0;
	antalPladser_ = 0;
	iDrift_ = false;
}
Rutebus::Rutebus(string farve , int rutenr , int antalPladser ) {
	setFarve(farve);
	setRutenr(rutenr);
	setAntalPladser(antalPladser);
	iDrift_ = false;
}
Rutebus::~Rutebus() {

}
void Rutebus::setFarve(string farve) {
	if (farve != "hvid" && farve != "gul" && farve != "sort")
		farve = "ukendt";
	farve_ = farve;
}

void Rutebus::setRutenr(int rutenr) {

	rutenr_ = (99 < rutenr && rutenr < 1000 ? rutenr : 0);
}
void Rutebus::setAntalPladser(int antalPladser) {

	antalPladser_ = (9 < antalPladser && antalPladser < 61 ? antalPladser : 0);
}


void Rutebus::setIDrift(bool iDrift) {

	iDrift_ = iDrift;

}
void Rutebus::print(void)const {

	cout << "bus nr. " << rutenr_ << endl;
	cout << "-------------------------" << endl;
	cout << "Farve: " << farve_ << endl;
	cout << "Antal pladser: " << antalPladser_ << endl;
	cout << "Bussen er " << (iDrift_ ? "" : "ikke ") << "i drift" << endl;
	cout << "-------------------------\n\n";

}