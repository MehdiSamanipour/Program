// Samling.cpp
#include "Samling.h"

Samling::Samling() {
    // Constructor implementation (if needed)
}

void Samling::addWire(double specRes, double length, double area) {
    Wire ny(length, area, specRes);
    wires.push_back(ny);
}

double Samling::genemsnit() const {
    return gennemsnitligModstand(wires);
}

// Implementation of gennemsnitligModstand
double gennemsnitligModstand(std::vector<Wire> v) {
    double sum = 0;
    // They have not learned about iterators
    for (int i = 0; i < v.size(); i++) {
        sum += v[i].getModstand();
    }
    // It is not specified what the result should be if the count is 0
    if (v.size() == 0)
        return 0;
    else
        return sum / v.size();
}
