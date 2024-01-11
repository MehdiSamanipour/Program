#include "Kortfunktioner.h"  // Include the header file with function prototypes
#include <stdio.h>           // Standard input-output functions
#include <stdlib.h>          // Standard library functions
#include <time.h>            // Time functions for randomization

int TraekKort() {
    return rand() % (13 - 1 + 1) + 1;  // Generate a random card value between 1 and 13
}

void PrintKort(int kort) {
    switch (kort) {
        case 13:
            printf("Konge\n");  // Print "Konge" for card value 13
            break;
        case 12:
            printf("Dame\n");   // Print "Dame" for card value 12
            break;
        case 11:
            printf("Knaegt\n"); // Print "Knaegt" for card value 11
            break;
        case 1:
            printf("Es\n");      // Print "Es" for card value 1
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("%d\n", kort);  // Print the card value for values 2-10
            break;
        default:
            printf("Ugyldigt kort: %d\n", kort);  // Print for invalid card values
            break;
    }
}

void PrintHaand(int array[], int size) {
    for (int i = 0; i < size; i++) {
        PrintKort(array[i]);  // Print each card in the hand
    }
}
