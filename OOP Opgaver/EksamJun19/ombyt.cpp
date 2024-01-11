// Ombyt.cpp
#include "Ombyt.h"

void ombyt(int *i1, int *i2)
{
    int t = *i1;
    *i1 = *i2;
    *i2 = t;
}
