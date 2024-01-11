#include <iostream>

#include "function.h"

// Function definition
void printArrayBackwards(int *arrayPtr, int size) {
    // Iterate through the array in reverse order and print each element
    for (int i = size - 1; i >= 0; --i) {
        std::cout << arrayPtr[i];

        // Print a comma and space if it's not the last element
        if (i > 0) {
            std::cout << ", ";
        }
    }

    // Print a newline at the end
    std::cout << std::endl;
}


// Function definition to calculate the sum of an array
int calculateSum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum;
}