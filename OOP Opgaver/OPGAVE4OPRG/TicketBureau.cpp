#include "TicketBureau.h"
#include <iostream>

// Constructor implementation
TicketBureau::TicketBureau(std::string bureauName, std::string eventName,
                           int numberOfA, int priceA, int numberOfB,
                           int priceB, int numberOfC, int priceC)
    : bureauName_(bureauName), oneEvent_(eventName, numberOfA, priceA, numberOfB, priceB, numberOfC, priceC) {
}

// Implementation of testMethod
void TicketBureau::testMethod() {
    // Call chooseCategory from the Event class
    char chosenCategory = oneEvent_.chooseCategory();

    // Output the result
    std::cout << "Chosen category: " << chosenCategory << std::endl;
}
