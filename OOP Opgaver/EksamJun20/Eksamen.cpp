#include "Eksamen.h"

double bestaaelsesProcent(int karakterer[], int totalAntal)
{
    int best = 0;
    for (int i = 0; i < totalAntal; i++)
        if (karakterer[i] >= 2)
            best++;
    return (double)best / totalAntal * 100;
}
