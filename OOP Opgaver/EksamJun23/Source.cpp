// main.cpp
#include <iostream>
#include "func.h"
#include "Samling.h"
#include "Wire.h"

int main() {
    // BMI Calculation
    double weight, height, bmi;
    std::cout << "Enter weight in kg: " << std::endl;
    std::cin >> weight;
    std::cout << "Enter height in m: " << std::endl;
    std::cin >> height;
    bmi = weight / (height * height);

    // BMI Category
    if (bmi <= 18.5)
        std::cout << "Underweight" << std::endl;
    else if (bmi <= 25)
        std::cout << "Normal weight" << std::endl;
    else if (bmi <= 30)
        std::cout << "Overweight" << std::endl;
    else
        std::cout << "Severely overweight" << std::endl;

    // Task 2
    int first, second;
    std::cout << "Enter two integers separated by a space: ";
    std::cin >> first >> second;
    addSecondToFirst(&first, &second);
    std::cout << "Result after adding the second integer to the first: " << first << std::endl;

    // Task 3
    // Task 3e - Invalid resistances
    Wire w1(0, 1.0, 0.72E-6);
    std::cout << w1.getModstand() << std::endl;
    Wire w2(1.0, 0, 0.72E-6);
    std::cout << w2.getModstand() << std::endl;
    Wire w3(1.0, 1.0, -0.72E-6);
    std::cout << w3.getModstand() << std::endl;

    // Gold
    Wire w4(1.0, 12E-6, 0.0244E-6);
    std::cout << w4.getModstand() << std::endl;

    // Stainless steel
    Wire w5(1.0, 12E-6, 0.72E-6);
    std::cout << w5.getModstand() << std::endl;

    // Task 3i - Samling object and average resistance
    Samling s;
    s.addWire(0.0244e-6, 1, 12e-6);
    s.addWire(0.72e-6, 1, 12e-6);
    std::cout << "Average: " << s.genemsnit() << std::endl;

    return 0;
}
