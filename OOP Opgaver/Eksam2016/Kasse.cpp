#include "Kasse.h"
#include <stdlib.h>
#include <time.h>
#include"Butik.h"
#include"Vare.h"
#include<string>
#include<iostream>
using namespace std;





Kasse::Kasse(int nummer)
{
	nummer_ = (1 <= nummer && nummer <= ANTAL_KASSER ? nummer : 0);
}


void Kasse::ekspedition(int solgteVarer[], const int SIZE) const
{
	int tal;

	srand(time(0));

	for (size_t i = 0; i < SIZE; i++)
	{
		tal = rand() % 100 + 1;

		if (1 <= tal && tal <= 50)
			solgteVarer[i] = 0;
		else if (51 <= tal && tal <= 76)
			solgteVarer[i] = 1;
		else if (77 <= tal && tal <= 87)
			solgteVarer[i] = 2;
		else if (88 <= tal && tal <= 94)
			solgteVarer[i] = 3;
		else if (95 <= tal && tal <= 98)
			solgteVarer[i] = 4;
		else
			solgteVarer[i] = 5;
	}
}
