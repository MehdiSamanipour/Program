#pragma once
#include "Event.h"

class TicketBureau {
public:
    // Constructor
    TicketBureau(std::string bureauName, std::string eventName,
                 int numberOfA, int priceA, int numberOfB,
                 int priceB, int numberOfC, int priceC);

    // Member function
    void testMethod();

private:
    std::string bureauName_;
    Event oneEvent_;
};
