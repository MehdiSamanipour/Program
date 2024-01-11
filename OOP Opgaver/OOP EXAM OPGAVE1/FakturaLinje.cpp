#include "FakturaLinje.h"
#include <iostream>
using namespace std;

FakturaLinje::FakturaLinje( std::string navn, double enhedsPris, double antal) {

	navn_=navn;
	enhedsPris_ = (enhedsPris >= 0 ? enhedsPris : 100.0);
	antal_ = (antal > 0 ? antal : 1);

}
double FakturaLinje::beregnPris(double finalPris) {

	return finalPris;
}
 FakturaLinje::~FakturaLinje() {

	 

}



 void FakturaLinje::print() const
{
	cout << navn_ << " " << antal_ << " a " << enhedsPris_  << " kr. i alt " << beregnPris() << " kr." << endl;
}

 std::ostream& operator<<(std::ostream& out, const FakturaLinje& right) {

	 right.print();
	 return out;
 }