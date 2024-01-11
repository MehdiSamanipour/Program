// Opgave1C.cpp
#include "Kort.h"
#include "Bog.h"
#include "Ombyt.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(NULL));  // Seed the random number generator with the current time

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Der trækkes: " << traekEtKort() << std::endl;  // Print the result of drawing a card
    }

    int sum = 0;
    char svar[5];

    do
    {
        int kort = traekEtKort();  // Draw a card
        sum += kort;  // Add the drawn card value to the total sum
        std::cout << "Der blev trukket " << kort << " og summen er nu " << sum << std::endl;  // Print the drawn card value and the current sum

        if (sum <= 21)
        {
            std::cout << "Vil du trække et kort til? (N/J): ";
            std::cin >> svar;  // Read the user's response to draw another card
        }
        else
        {
            std::cout << "Du har tabt!" << std::endl;  // Inform the user that they have lost
        }
    } while (sum <= 21 && (svar[0] == 'j' || svar[0] == 'J'));  // Continue the loop if the sum is less than or equal to 21 and the user wants to draw another card

    // Opgave 2
    int a = 5;
    int b = 6;

    std::cout << "Før ombytning: a = " << a << ", b = " << b << std::endl;

    // Take the address of the variables to get pointers
    ombyt(&a, &b);

    std::cout << "Efter ombytning: a = " << a << ", b = " << b << std::endl;
// Opgave 3d
    Bog b1("Ulysses", "James Joyce", "3210987654321", 987);
    b1.print();

    // Opgave 3e
    Bog kartotek[4] = {
        b1,
        Bog("Ditte Menneskebarn", "Martin Andersen Nexø", "1230123456789", 400),
        Bog("Fasanjægerne", "Jussi Adler­Olsen", "1234567890123"),
        Bog() // Default constructed object
    };

    for (int i = 0; i < 4; i++)
    {
        kartotek[i].print();
    }


    return 0;
}
