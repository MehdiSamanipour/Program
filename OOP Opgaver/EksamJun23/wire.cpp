// Wire.cpp
#include "Wire.h"
#include <iostream>

Wire::Wire(double length, double area, double resistance) {
    if (length <= 0) {
        L = 0;
        std::cout << "length <= 0" << std::endl;
    } else {
        L = length;
    }

    if (area <= 0) {
        A = 0;
        std::cout << "area <= 0" << std::endl;
    } else {
        A = area;
    }

    if (resistance <= 0) {
        rho = 0;
        std::cout << "Resistance <= 0" << std::endl;
    } else {
        rho = resistance;
    }
}

double Wire::getLength() const {
    return L;
}

double Wire::getCrossSectionArea() const {
    return A;
}

double Wire::getModstand() const {
    if (rho == 0 || L == 0 || A == 0)
        return 0;
    else
        return (L * rho) / A;
}

void Wire::setLength(double length) {
    L = length;
}

void Wire::setCrossSectionArea(double area) {
    A = area;
}

void Wire::setModstand(double resistance) {
    rho = resistance;
}
