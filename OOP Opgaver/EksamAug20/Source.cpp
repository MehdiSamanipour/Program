// Opgave 1
#include <stdio.h>
// Ekstra til Opgave 1.d
#include <stdlib.h>
#include <time.h>


// Opgave 3.c, d og e
#include "Medarbejder.h"

// Opgave 1.a
// Function prototype for printStars
void printStars(int stars);

// Opgave 1.b
// Implementation of printStars function
void printStars(int stars) {
    // Loop to print '*' characters based on the 'stars' parameter
    // Alternativt for (int i = 0; i < stars; i++)
    for (int i = 0; i < stars; i++)
        printf("*");

    // Move to the next line after printing '*' characters
    printf("\n");
}

// Opgave 2.a
void makePositive(double* number) {
    if (*number < 0)
        *number = -*number;
}

// Opgave 1.c + d
// Main function
int main() {
    // Opgave 1.c
    // Loop to print increasing number of '*' characters from 1 to 5
    for (int stars = 1; stars <= 5; stars++)
        printStars(stars);

    // Loop to print decreasing number of '*' characters from 4 to 1
    for (int stars = 4; stars >= 1; stars--)
        printStars(stars);

    // Opgave 1.d
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Loop to generate and print 10 sets of random '*' characters (1 to 6 stars)
    for (int i = 0; i < 10; i++) {
        // Generate a random number between 1 and 6 (inclusive) for the number of stars
        int stars = rand() % 6 + 1;

        // Call the printStars function with the random number of stars
        printStars(stars);
    }
    // opgave 2
    double tal;

    // Brugeren bliver bedt om at indtaste et kommatal
    printf("Indtast et kommatal: ");
    scanf_s("%lf", &tal);

    // Udskriv den numeriske værdi af det indtastede tal
    printf("Den numeriske vaerdi af %f ", tal);

    // Kald makePositive funktionen for at ændre tallet
    makePositive(&tal);

    // Udskriv den opdaterede værdi af tallet
    printf(" er %f", tal);

    // Opgave 3.c
   // Create a Medarbejder object, register workdays, and print
    Medarbejder m1("Hans Hansen");
    m1.tilfoejArbejdsDage(22);
    m1.print();
    m1.afholdFerie(2.0);
    m1.print();

    // Opgave 3.d
    // Other initializations are also OK
    // It counts a bit less if setNavn is used to set the correct name
    // after creating the array
    Medarbejder array[3] = {
        {"Anders Andersen"},
        Medarbejder("Bo Boesen"),
        Medarbejder{"Carl Carlsen"} };

    // Opgave 3.e
    // Both method calls in the same loop or in separate loops are OK
    for (int i = 0; i < 3; i++)
    {
        array[i].tilfoejArbejdsDage(22);
        array[i].print();
    }


    // Indicate successful execution of the program
    return 0;
}
