#include "Coulomb.h"

double beregnKraft(double q1, double q2, double afstand)
{
	// Tilføjelse for opgave 3.d
	if (afstand <= 0)
		return 0;
	return 8.98877e9 * q1 * q2 / (afstand * afstand);
}