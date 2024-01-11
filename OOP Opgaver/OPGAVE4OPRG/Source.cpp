#include <iostream>
#include <cstdlib>  // Added for srand and rand
#include <ctime>    // Added for time
#include "Event.h"
#include "function.h"
#include "TicketBureau.h"

using namespace std;

int main() {
    // Opgave 3
    // Oprettelse af et Event-objekt
    Event e1("Stand Up Show med Anders Hattesen", 10, 50, 20, 30, 15, 25);

    // Kald af metoden chooseCategory()
    char chosenCategory = e1.chooseCategory();

    // Kald af metoden chooseNumberOfTickets()
    int chosenNumber = e1.chooseNumberOfTickets(chosenCategory);

    // Kald af metoden reserveTickets()
    e1.reserveTickets(chosenCategory, chosenNumber);

    // Create an instance of TicketBureau
    TicketBureau ticketBureau("BestTickets", "Awesome Concert", 10, 50, 20, 30, 15, 25);

    // Test TicketBureau's testMethod
    ticketBureau.testMethod();

    // Seed the random number generator
    srand(time(0));

    // Declare an array of integers with 50 slots
    const int arraySize = 50;
    int myArray[arraySize];

    do {
        // Fill the array with random numbers between 1 and 10
        for (int i = 0; i < arraySize; ++i) {
            myArray[i] = rand() % 10 + 1;  // Generate random numbers between 1 and 10
        }

        // Calculate the sum of the array
        int sum = calculateSum(myArray, arraySize);

        // Check the sum and print the result
        if (sum > 275) {
            cout << "Summen af alle tal i arrayet er " << sum << endl;
        } else {
            cout << "Summen " << sum << " er for lille." << endl;
        }
    } while (calculateSum(myArray, arraySize) <= 275);  // Repeat until the sum is greater than 275

    // Opgave 1
    const int size = 6;
    int myArray1[size] = {4, 23, 11, 6, 3, 78};

    // Call the function to print the array backwards
    printArrayBackwards(myArray1, size);

    double num = 1;  // Default value

    cout << "Indtaste et decimaltal" << endl;
    cin >> num;

    cout << int(num) << " krone og " << (num - int(num)) * 100 << " ore" << endl;

    for (int i = 0; i < 3; ++i) {
        cout << "Indtaste et decimaltal" << endl;
        cin >> num;

        cout << int(num) << " krone og " << (num - int(num)) * 100 << " ore" << endl;
    }

    while (num > 0) {
        cout << "Indtaste et decimaltal" << endl;
        cin >> num;

        cout << int(num) << " krone og " << (num - int(num)) * 100 << " ore" << endl;
    }

    return 0;
}
