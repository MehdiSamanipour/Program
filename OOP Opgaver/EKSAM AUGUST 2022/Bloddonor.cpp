#include"Bloddonor.h"
#include<iostream>

using namespace std;



Bloddonor::Bloddonor(string navn, double BMI, string blodtype, bool rhesus) {

	setNavn(navn);
	setBMI(BMI);
	setBlodtype(blodtype);
	setRhesustype(rhesus);
}
void Bloddonor::setNavn(string navn) {

	navn_ = navn;
}
void Bloddonor::setBMI(double BMI) {
	BMI_ = (BMI <= 10.0 && BMI >= 50.0 ? BMI : 22.5);
}
void Bloddonor::setBlodtype(string blodtype) {
	Blodtype_ = (blodtype == "A" || blodtype == "B" || blodtype == "AB"
		|| blodtype == "0" || blodtype == "ukendt" ? blodtype : "ukendt");
}
void  Bloddonor::setRhesustype(bool rhesus) {
	rhesustype_ = rhesus;
}
string  Bloddonor::getNavn()const {
	return navn_;
}
double Bloddonor::getBMI() const {
	return BMI_;
}
string  Bloddonor::getBlodtype()const {
	return Blodtype_;

}
bool Bloddonor::getRhesustype()const {
	return rhesustype_;
}
void Bloddonor::print()const {

	cout << getNavn() << ", " << getBlodtype() << getRhesustype() ;
	if (rhesustype_ == true)
		 {
		 cout << "+ ";
		 }
     else
		 {
		 cout << "- ";
		 }
	
		 cout << "BMI: " << getBMI() << endl;

}