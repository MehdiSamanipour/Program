#pragma once

#include <string>

class Event {
public:
    // Constructor
    Event(std::string name, int numberOfA, int priceA, int numberOfB,
          int priceB, int numberOfC, int priceC);

    // Member functions
    char chooseCategory() const;
    int chooseNumberOfTickets(char category) const;
    void reserveTickets(char category, int number);

private:
    std::string eventName_;
    int nbOfAvailableTicketsA_;
    int priceTicketA_;
    int nbOfAvailableTicketsB_;
    int priceTicketB_;
    int nbOfAvailableTicketsC_;
    int priceTicketC_;
};
