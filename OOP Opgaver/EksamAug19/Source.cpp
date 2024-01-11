//opgave 1
#include <iomanip>
#include <iostream>

#include "Burger.h"
#include "CPR.h"
#include "Meal.h"
#include "Oekonomi.h"




int main() {
    //opgave 3
    // Opgave 3c
	Burger b1(1, false, false);
	Burger b2(3, true, true);

	b1.print();
	b2.print();

	// Uden for opgave, kan teste korrekt implementation af 3d)
	Meal m1(2, true, false, "Coca Cola", "Pommes Frites");
	m1.printMeal();
    //opgave 2
     // Test the checkCPR function
    const char* validCPR = "123456-1234";
    const char* invalidCPR1 = "12A456-1234";
    const char* invalidCPR2 = "123456-12345";
    const char* invalidCPR3 = "123456-12A4";

    std::cout << "Result for valid CPR: " << checkCPR(validCPR) << std::endl;
    std::cout << "Result for invalid CPR 1: " << checkCPR(invalidCPR1) << std::endl;
    std::cout << "Result for invalid CPR 2: " << checkCPR(invalidCPR2) << std::endl;
    std::cout << "Result for invalid CPR 3: " << checkCPR(invalidCPR3) << std::endl;

    //opgave 1
    double totalAfstand = 0;
    double totalBraendstof = 0;
    double afstand, braendstof;

    // Prompt user to input distance and fuel consumption until either is less than or equal to 0
    do {
        

        // Input distance
        std::cout << "Indtast afstand for en tank: ";
        std::cin >> afstand;

        // Input fuel consumption
        std::cout << "Indtast braendstofmængde for en tank: ";
        std::cin >> braendstof;

        // Check if both distance and fuel consumption are greater than 0
        if (afstand > 0 && braendstof > 0) {
            // Calculate and print economy for the current tank
            double oekonomi = beregnOekonomi(afstand, braendstof);
          

            // Update total distance and total fuel consumption
            totalAfstand += afstand;
            totalBraendstof += braendstof;
        }

    } while (totalAfstand > 0 && totalBraendstof > 0);

    // Calculate and print overall economy
    if (totalAfstand > 0 && totalBraendstof > 0) {
       
        std::cout << "Økonomi for alle tankninger: " << beregnOekonomi( afstand, braendstof) << " km/l\n";
    }

    return 0;
}