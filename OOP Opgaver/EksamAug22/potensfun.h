#pragma once
#include <stdio.h>
#include <math.h>

// Function to calculate the power of a number
int potens(int tal1, int tal2) {
    int resultate = 1;
    
    // Check if either tal1 or tal2 is negative
    if (tal1 < 0 || tal2 < 0)
        resultate = -1;
    else if (tal2 == 0)
        resultate = 1;
    else {
        // Calculate the power using a loop
        for (int i = 1; i <= tal2; i++) {
            resultate *= tal1;
        }
    }
    
    return resultate;
}

// Function to replace the value pointed by tal1 with its power to tal2
void erstatMedPotens(int* tal1, int tal2) {
    *tal1 = potens(*tal1, tal2);
}