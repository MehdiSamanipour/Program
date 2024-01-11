#include"func.h"


int main() {
    double v, r;

    cout << "this program calculates the power" << endl;

    getUserInput(v, r); // Call the function to get user input

    double power = calculatePower(v, r); // Call the function to calculate power

    cout << "the power is: " << power <<" W"<< endl;

    return 0;
}

