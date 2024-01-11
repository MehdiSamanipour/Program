#include"Erotik.h"

Erotik::Erotik(const string& titel, const string& forfatter)
	   : Bog(titel, forfatter)
{



}

int Erotik::getMinimumAlder()const {

	return 18;
}