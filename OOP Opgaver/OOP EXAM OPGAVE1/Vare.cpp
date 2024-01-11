#include"Vare.h"
#include"FakturaLinje.h"


Vare::Vare(std::string navn, double enhedsPris, double antal)
	: FakturaLinje(navn, enhedsPris, antal)

{


}

double Vare::beregnPris(double)const {

	return (enhedsPris_ * antal_ * 1.25);
}
Vare::~Vare() {



}