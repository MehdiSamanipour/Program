#include <iostream>
// This includes the necessary header file for input/output operations in C++.

using namespace std;
// This allows us to use the standard namespace so that we can access functions like `cout` and `cin` directly.



//opgave 4 chalenge 

// Define the monotonically increasing or decreasing function as a lambda function.
auto f = [](double x) -> double {
    return x * x - 4; // Replace this with your actual function.
};

double FindNulpunkt(double a, double b, double tolerance) {
    // a and b are the endpoints of the interval, and tolerance is the desired accuracy.

    if (f(a) * f(b) > 0) {
        // Check if f(a) and f(b) have the same sign. If yes, there is no root in the interval.
        cout << "No root in the specified interval." << endl;
        return NAN; // Return NaN (Not-a-Number) to indicate an invalid result.
    }

    while ((b - a) > tolerance) {
        // Continue iteration until the width of the interval is smaller than the desired tolerance.

        double mid = (a + b) / 2.0;
        // Calculate the midpoint between a and b.

        if (f(mid) == 0) {
            // Check if the midpoint itself is the root.
            return mid;
        }

        if (f(a) * f(mid) < 0) {
            // Check if f(mid) has a different sign than f(a). If yes, update b to mid.
            b = mid;
        }
        else if (f(b) * f(mid) < 0) {
            // Check if f(mid) has a different sign than f(b). If yes, update a to mid.
            a = mid;
        }
    }

    return (a + b) / 2.0; // Return the approximate root when the interval width is small enough.
}

int beregn_sum(int n) {
    // This is the beginning of the function definition for `beregn_sum`. It takes an integer parameter `n`.

    int summen = 0;
    // This initializes a variable `summen` with the value 0, which will be used to accumulate the sum.

    int tal = 1;
    // This initializes a variable `tal` with the value 1. This variable will be used to iterate through the numbers.

    while (tal <= n) {
        // This starts a while loop. It will continue as long as the condition `tal <= n` is true.

        summen += tal;
        // This adds the current value of `tal` to `summen`.

        tal++;
        // This increments the value of `tal` by 1 in each iteration.
    }

    return summen;
    // This returns the final sum after the while loop has finished.
}

int main() {
    // This is the beginning of the `main` function, which is the entry point of the program.


    int input_tal;
    // This declares an integer variable `input_tal` which will be used to store user input.

    cout << "Indtast et positivt heltal: ";
    // This prints the message asking the user to input a positive integer.

    cin >> input_tal;
    // This takes user input and stores it in the variable `input_tal`.

    int resultat = beregn_sum(input_tal);
    // This calls the `beregn_sum` function with the user input and assigns the result to the variable `resultat`.

    cout << "Summen af talene fra 1 til " << input_tal << " er " << resultat << "." << endl;
    // This prints the final result.

    // Opgave 2

    cout << "Indtast et positivt heltal: ";
    // This prints the message asking the user to input a positive integer.

    cin >> input_tal;
    // This takes user input and stores it in the variable `input_tal`.

    if (input_tal <= 0) {
        // This is an `if` statement. It checks if the value of `input_tal` is less than or equal to 0.

        cout << "Du skal indtaste et positivt heltal." << endl;
        // If the condition is true, this line prints a message indicating that the user should enter a positive integer.

        return 0;
        // This terminates the program early since the user input was invalid.
    }

    int tal = 2;
    // This initializes a variable `tal` with the value 2. This variable will be used to iterate through even numbers.

    cout << "De lige tal op til " << input_tal << " er: ";

    while (tal <= input_tal) {
        // This starts a while loop. It will continue as long as the condition `tal <= input_tal` is true.

        cout << tal << " ";
        // This prints the current value of `tal`.

        tal += 2;
        // This increments the value of `tal` by 2 in each iteration, ensuring that we only consider even numbers.
    }

    cout << endl;
    // This prints a newline character to move to the next line after all even numbers have been displayed.

    //opgave 3  


    cout << "Indtast et positivt heltal: ";
    // This prints the message asking the user to input a positive integer.

    cin >> input_tal;
    // This takes user input and stores it in the variable `input_tal`.

    if (input_tal <= 0) {
        // This is an `if` statement. It checks if the value of `input_tal` is less than or equal to 0.

        cout << "Du skal indtaste et positivt heltal." << endl;
        // If the condition is true, this line prints a message indicating that the user should enter a positive integer.

        return 0;
        // This terminates the program early since the user input was invalid.
    }

    int række = 1;
    // This initializes a variable `række` (row) with the value 1. This variable will be used to keep track of the current row.

    while (række <= input_tal) {
        // This starts a while loop. It will continue as long as the condition `række <= input_tal` is true.

        int mellemrum = input_tal - række;
        // This calculates the number of spaces needed before printing the stars.

        // Udskriv mellemrum
        for (int i = 0; i < mellemrum; i++) {
            // This loop prints the necessary spaces.
            cout << " ";
        }

        // Udskriv stjerner
        for (int i = 0; i < 2 * række - 1; i++) {
            // This loop prints the stars for the current row.
            cout << "*";
        }

        cout << endl;
        // This moves to the next line for the next row.
        række++;
    }

    double a, b, tolerance;

    cout << "Enter the left endpoint of the interval: ";
    cin >> a;

    cout << "Enter the right endpoint of the interval: ";
    cin >> b;

    cout << "Enter the desired tolerance: ";
    cin >> tolerance;

    double root = FindNulpunkt(a, b, tolerance);

    if (!isnan(root)) {
        cout << "Approximate root found: " << root << endl;
    }

    // Deklarerer variablerne tæller, nævner og resultater som decimaltal
    double tæller, nævner, resultater;

    // Starter en uendelig løkke
    while (true) {
        // Udskriver en besked til brugeren for at indtaste tæller og nævner
        cout << "Indtast en tæller og en nævner: ";

        // Læser værdierne for tæller og nævner fra brugeren
        cin >> tæller >> nævner;

        // Tjekker om tæller eller nævner er 0, hvis ja, afsluttes løkken
        if (tæller == 0 || nævner == 0) {
            break; // Afslutter løkken
        }
        // Hvis hverken tæller eller nævner er 0, udfør division og udskriv resultatet
        else {
            resultater = tæller / nævner;
            cout << "Resultatet er : " << resultater << endl;
        }
    }


    return 0;
    // This signifies a successful execution of the program and is returned to the operating system.
}
