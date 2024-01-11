#pragma once
#include<iostream>
#include<cmath> // Include the cmath library for pow function

using namespace std;

// Function to calculate power
double calculatePower(double v, double r) {
    return pow(v, 2) / r;
}

// Function to get user input for voltage and resistance
void getUserInput(double& v, double& r) {
    cout << "input the power source voltage: ";
    cin >> v;
    cout << endl << "input resistance R [ohm]: ";
    cin >> r;
}