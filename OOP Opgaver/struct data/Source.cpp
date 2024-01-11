#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>

#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

#include "Data.h"

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");


	/*bool on1 = false, on2 = false, on3 = false, on4 = false, on5 = false, on6 = false;

	ledOff(LD1);
	ledOff(LD2);
	ledOff(LD3);
	ledOff(LD4);
	ledOff(LD5);
	ledOff(LD6);

	char svar = 'a';

	while (svar != '0')
	{
		cout << "Indtast 1..6 for at toggle lysdioden" << endl
			<< "0 for at stoppe: ";

		cin >> svar;

		switch (svar)
		{
		case '1':
			if (on1)
			{
				ledOff(LD1);
				on1 = false;
			}
			else
			{
				ledOn(LD1);
				on1 = true;
			}
			break;

		case '2':
			if (on2)
			{
				ledOff(LD2);
				on2 = false;
			}
			else
			{
				ledOn(LD2);
				on2 = true;
			}
			break;

		case '3':
			if (on3)
			{
				ledOff(LD3);
				on3 = false;
			}
			else
			{
				ledOn(LD3);
				on3 = true;
			}
			break;

		case '4':
			if (on4)
			{
				ledOff(LD4);
				on4 = false;
			}
			else
			{
				ledOn(LD4);
				on4 = true;
			}
			break;

		case '5':
			if (on5)
			{
				ledOff(LD5);
				on5 = false;
			}
			else
			{
				ledOn(LD5);
				on5 = true;
			}
			break;

		case '6':
			if (on6)
			{
				ledOff(LD6);
				on6 = false;
			}
			else
			{
				ledOn(LD6);
				on6 = true;
			}
			break;

		case '0':
			cout << endl << "Stopper nu!" << endl;
			break;

		default:
			cout << endl << "Ukendt tast!" << endl;
			break;
		}

	}*/

	// metode vector


//vector<bool> on(7);
//
//// Sluk alle og sæt tilstanden
//for (int i = 1; i <= 6; i++)
//{
//	on[i] = false;
//	// Brug at LD1 == 1, osv.
//	ledOff(i);
//}
//
//char svar = 'a';
//
//while (svar != '0')
//{
//	cout << "Indtast 1..6 for at toggle lysdioden" << endl
//		<< "0 for at stoppe: ";
//
//	cin >> svar;
//
//	switch (svar)
//	{
//	case '1':
//		if (on[1])
//		{
//			ledOff(LD1);
//			on[1] = false;
//		}
//		else
//		{
//			ledOn(LD1);
//			on[1] = true;
//		}
//		break;
//
//	case '2':
//		if (on[2])
//		{
//			ledOff(LD2);
//			on[2] = false;
//		}
//		else
//		{
//			ledOn(LD2);
//			on[2] = true;
//		}
//		break;
//
//	case '3':
//		if (on[3])
//		{
//			ledOff(LD3);
//			on[3] = false;
//		}
//		else
//		{
//			ledOn(LD3);
//			on[3] = true;
//		}
//		break;
//
//	case '4':
//		if (on[4])
//		{
//			ledOff(LD4);
//			on[4] = false;
//		}
//		else
//		{
//			ledOn(LD4);
//			on[4] = true;
//		}
//		break;
//
//	case '5':
//		if (on[5])
//		{
//			ledOff(LD5);
//			on[5] = false;
//		}
//		else
//		{
//			ledOn(LD5);
//			on[5] = true;
//		}
//		break;
//
//	case '6':
//		if (on[6])
//		{
//			ledOff(LD6);
//			on[6] = false;
//		}
//		else
//		{
//			ledOn(LD6);
//			on[6] = true;
//		}
//		break;
//
//	case '0':
//		cout << endl << "Stopper nu!" << endl;
//		break;
//
//	default:
//		cout << endl << "Ukendt tast!" << endl;
//		break;
//	}
//
//}

	//metode 3
vector<bool> on(7);

// Sluk alle og sæt tilstanden
for (int i = 1; i <= 6; i++)
{
	on[i] = false;
	// Brug at LD1 == 1, osv.
	ledOff(i);
}

char svar = 'a';

cout << "Indtast 1..6 for at toggle lysdioden" << endl
<< "0 for at stoppe: ";

while (svar != '0')
{
	svar = _getch();

	int diode = svar - '0';

	if (diode >= 1 && diode <= 6)
	{
		if (on[diode])
		{
			ledOff(diode);
			on[diode] = false;
		}
		else
		{
			ledOn(diode);
			on[diode] = true;
		}
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


	vector<Data> maalinger(12);

	while (1)
	{
		cout << "Foretager målinger" << endl;
		for (int i = 0; i < 12; i++)
		{
			maalinger[i].lys = getIntensity();
			maalinger[i].temp = getTemperature();
			Wait(1000);
		}

		int lyssum = 0.0;
		double tempsum = 0;

		for (int i = 0; i < 12; i++)
		{
			lyssum += maalinger[i].lys;
			tempsum += maalinger[i].temp;

			// Udskrift med direkte tilgang
			//cout << "Lys nr. " << i + 1 << ": " << maalinger[i].lys << endl;
			//cout << "Temp nr. " << i + 1 << ": " << maalinger[i].temp << endl;

			// Udskrift med brug af printData
			cout << "Måling nr. " << i << ": ";
			printData(maalinger[i]);
		}

		cout << "Gennemsnit af lys: " << lyssum / 12 << endl;
		cout << "Gennemsnit af temperatur: " << tempsum / 12 << endl;

	}

	return 0;
}
