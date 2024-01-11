// Filen Statistik.c
#include "Statistik.h"

double varians(const double arr[], int size, double gennemsnit) {
    // Det er ikke angivet, hvad der skal ske, hvis size == 0
    // Følgende tilføjelse er ekstra god
    if (size == 0)
        return 0;

    double sum = 0;
    for (int i = 0; i < size; i++) {
        double diff = (arr[i] - gennemsnit);
        sum += diff * diff;
        // Alternativer (fx)
        // sum += (arr[i] - gennemsnit) * (arr[i] - gennemsnit);
        // sum += pow((arr[i] - gennemsnit), 2.0);
    }
    return sum / size;
}
