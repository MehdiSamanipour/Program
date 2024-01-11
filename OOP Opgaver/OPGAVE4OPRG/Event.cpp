#include "Event.h"
#include <conio.h>
#include <iostream>

// Constructor implementation
Event::Event(std::string name, int numberOfA, int priceA, int numberOfB,
              int priceB, int numberOfC, int priceC)
    : eventName_(name),
      nbOfAvailableTicketsA_(numberOfA > 0 ? numberOfA : 0),
      priceTicketA_(priceA < 0 ? priceA : 0),
      nbOfAvailableTicketsB_(numberOfB > 0 ? numberOfB : 0),
      priceTicketB_(priceB < 0 ? priceB : 0),
      nbOfAvailableTicketsC_(numberOfC > 0 ? numberOfC : 0),
      priceTicketC_(priceC < 0 ? priceC : 0) {}

// Member function implementations...

char Event::chooseCategory() const {
    char category;

    // Print event name
    std::cout << "Event: " << eventName_ << std::endl;
    std::cout << "Choose a category (press A, B, or C):" << std::endl;
    std::cout << "A: Category A    " << priceTicketA_ << " kr" << (nbOfAvailableTicketsA_ == 0 ? " (sold out)" 
        : (nbOfAvailableTicketsA_ < 4 ? " only a few left" : "")) << std::endl;
    std::cout << "B: Category B    " << priceTicketB_ << " kr" << (nbOfAvailableTicketsB_ == 0 ? " (sold out)" 
        : (nbOfAvailableTicketsB_ < 4 ? " only a few left" : "")) << std::endl;
    std::cout << "C: Category C    " << priceTicketC_ << " kr" << (nbOfAvailableTicketsC_ == 0 ? " (sold out)" 
        : (nbOfAvailableTicketsC_ < 4 ? " only a few left" : "")) << std::endl;

    do {
        category = _getch();
    } while (category < 'A' || 'C' < category);

    std::cout << std::endl;  // Add this line for a newline after the user chooses a category
    return category;
}

int Event::chooseNumberOfTickets(char category) const {
    // Your implementation logic here
    // You can prompt the user to enter the number of tickets they want to reserve
    // and return that value.
    int numberOfTickets;

    std::cout << "Enter the number of tickets you want to reserve for category " << category << ": ";
    std::cin >> numberOfTickets;

    // Add any validation logic if needed

    return numberOfTickets;
}

void Event::reserveTickets(char category, int number) {
    // Print the reservation message
    std::cout << "You have now reserved " << number << " tickets in category "
              << category << " for " << eventName_ << "." << std::endl;

    switch (category) {
    case 'A':
        nbOfAvailableTicketsA_ -= number;
        break;
    case 'B':
        nbOfAvailableTicketsB_ -= number;
        break;
    case 'C':
        nbOfAvailableTicketsC_ -= number;
        break;
    }
}
