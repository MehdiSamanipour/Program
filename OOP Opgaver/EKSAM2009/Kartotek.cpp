#include"Kartotek.h"
#include"Kunde.h"

bool Kartotek::nyKunde(int kunderNummer , string navn, float saldo) {

	for (size_t i = 0; i < SIZE; i++)

		if (kundeArray[i].getKundeNummer() == 0)

		{
			kundeArray[i].setKundeNummer(kunderNummer);
			kundeArray[i].setNavn(navn);
			kundeArray[i].opdaterSaldo(saldo);
			antalKunder++;
			return true;

		}
	return false;
}