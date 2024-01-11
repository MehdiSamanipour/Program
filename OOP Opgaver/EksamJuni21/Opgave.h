// Opgave.h

#pragma once

#include <string>
#include "Dato.h"

class Opgave {
public:
    Opgave(); // Default constructor
    Opgave(std::string opgave, int prioritet, int dag, int maaned, int aar); // Parametriseret constructor

    // Set methods
    void setOpgave(std::string opgave);
    void setPrioritet(int prioritet);
    void setDeadline(int dag, int maaned, int aar);

    // Get methods
    std::string getOpgave() const;
    int getPrioritet() const;
    Dato getDeadline() const;

    // Print method
    void print() const;

private:
    std::string opgave_;
    int prioritet_;
    Dato deadline_;
};
