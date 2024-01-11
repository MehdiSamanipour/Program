#pragma once
#include <stdlib.h>
#include <time.h>


double measureTemperature()
{
	srand(time(0));

	static double temp = (rand() % 101 + 150) / 10.0;
	double deltaTemp = (rand() % 6) / 10.0;

	if (rand() % 2 == 0)
		temp += deltaTemp;
	else
		temp -= deltaTemp;

	return temp;
}