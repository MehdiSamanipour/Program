// Samling.h
#pragma once

#include <vector>
#include "Wire.h"

// Declare the function prototype for gennemsnitligModstand
double gennemsnitligModstand(std::vector<Wire> v);

class Samling {
public:
    Samling();  // Constructor
    void addWire(double specRes, double length, double area);
    double genemsnit() const;

private:
    std::vector<Wire> wires;  // Vector to store Wire objects
};
