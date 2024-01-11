#include "Oekonomi.h"

// Function to calculate economy based on distance and fuel consumption
double beregnOekonomi(double afstand, double braendstof) {
    if (braendstof <= 0) {
        return 0; // Avoid division by zero
    }

    return afstand / braendstof;
}
