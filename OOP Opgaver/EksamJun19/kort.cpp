// Kort.c
#include "Kort.h"
#include <stdlib.h>
#include <time.h>

int traekEtKort()
{
    srand(time(NULL));  // Seed the random number generator with the current time
    return rand() % 11 + 1;  // Generate a random number between 1 and 11
}
