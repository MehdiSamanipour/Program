#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <iostream>
#include <vector>

using namespace std;

#include <conio.h>

#include "Led.h"

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	ledOn(LD1);
	ledOn(LD2);
	ledOn(LD3);
	ledOn(LD4);
	ledOn(LD5);
	ledOn(LD6);
	// Brug en vector med 7 pladser, så er index 0..6 til rådighed
// Der går så een plads til spilde, men koden bliver
// enklere
	
// Da der ikke er nogen default constructor, skal alle elementer
// have en parameter
	vector<Led> diodes =
	{
		{ 1 },
		{ 1 },
		{ 2 },
		{ 3 },
		{ 4 },
		{ 5 },
		{ 6 }
	};

	// Constructorne sørger for at slukke alle dioder
	char svar = 'a';

	cout << "Indtast 1..6 for at toggle lysdioden" << endl
		<< "0 for at stoppe: ";

	while (svar != '0')
	{
		svar = _getch();

		int diode = svar - '0';

		if (diode >= 1 && diode <= 6)
		{
			// Led klassen husker alt hvad der skal til
			diodes[diode].toggle();
		}
		else if (diode == 0)
		{
			cout << endl << "Stopper nu!" << endl;
		}
		else
		{
			cout << endl << "Ukendt tast!" << endl;
			cout << "Indtast 1..6 for at toggle lysdioden" << endl
				<< "0 for at stoppe: ";
		}
	}
	printf("loop start   ..*******************");
	while (true)
	{
		Led green(1);
		green.on();
		Wait(1000);
		green.off();

		Led red(6);
		red.on();
		Wait(1000);
		red.off();
	}

	return 0;
}