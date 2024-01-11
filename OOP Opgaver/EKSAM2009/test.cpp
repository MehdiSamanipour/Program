#include "Kunde.h"
#include <iostream>
#include"Kartotek.h"



void printSkyldigeKunder(Kunde*, const int);


int main()
{
	const int ARRAY_SIZE = 5;
	Kunde testArray[ARRAY_SIZE] = { Kunde(1000, "Bo", -1975.95),
   Kunde(2000, "Kurt", 200.00) };
	Kunde(-10, "ert",-10);

testArray[2].setKundeNummer(3000);
testArray[2].setNavn("Ib");
testArray[2].opdaterSaldo(-210.75);

printSkyldigeKunder(testArray, ARRAY_SIZE);

cout << "\nTom arrayplads: " << testArray[3].getKundeNummer();
cout << " " << testArray[3].getNavn() << " ";
cout << testArray[3].getSaldo() << endl;


return 0;
	}


	void printSkyldigeKunder(Kunde* kundePtr, const int _ARRAYSIZE)
	{

		for (size_t i = 0; i < _ARRAYSIZE; i++)
		{
			if (kundePtr->getSaldo() < 0)
				kundePtr->print();
			kundePtr++;
		}

	}
