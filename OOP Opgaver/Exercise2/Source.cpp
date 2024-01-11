#include<iostream> // Including the input-output stream library

#include <cmath> // Including the math library for mathematical functions

using namespace std; // Using the standard namespace

int main() // Main function starts here
{
    // Part 1: Ohm's Law
    double current, resistance; // Declaring variables for current and resistance

    // Prompt user for current and resistance
    cout << "Indtast strømstyrken (i milliampere): "; // Output message
    cin >> current; // Input current from user

    cout << "Indtast modstanden (i ohm): "; // Output message
    cin >> resistance; // Input resistance from user

    // Convert current to amperes
    current /= 1000; // Convert current to amperes

    // Calculate voltage and power
    double voltage = current * resistance; // Calculate voltage
    double power = voltage * current; // Calculate power

    // Display results
    cout << "Spændingen over modstanden er: " << voltage << " Volt" << endl; // Output voltage
    cout << "Den afsatte effekt er: " << power << " Watt" << endl; // Output power

    // Part 2: Vector Distance
    double x1, x2, x3, y1, y2, y3; // Declaring variables for vectors

    cout << "Indtast vektor x (x1 x2 x3): "; // Output message
    cin >> x1 >> x2 >> x3; // Input values for vector x

    cout << "Indtast vektor y (y1 y2 y3): "; // Output message
    cin >> y1 >> y2 >> y3; // Input values for vector y

    // Calculate distance
    double distance = max({ abs(y1 - x1), abs(y2 - x2), abs(y3 - x3) }); // Calculate distance using max and abs functions

    // Display result
    cout << "Afstanden mellem vektor x og vektor y er: " << distance << endl; // Output distance

    // Part 3: Linear System Solver
    double a11, a12, a21, a22, c1, c2; // Declaring variables for linear system

    cout << "Input the matrix values in order a11 a12 a21 a22: "; // Output message
    cin >> a11 >> a12 >> a21 >> a22; // Input values for matrix coefficients

    double det = a11 * a22 - a21 * a12; // Calculate determinant

    if (det == 0) { // Check if determinant is zero
        cout << "Systemet har ingen entydig løsning. Programmet termineres." << endl; // Output message and terminate program
        return 0; // Return 0 to indicate successful program termination
    }

    cout << "Systemet har en entydig løsning." << endl; // Output message

    cout << "Input the values c1 c2: "; // Output message
    cin >> c1 >> c2; // Input values for constants

    // Calculate solutions
    double x = (1 / det) * (a22 * c1 - a12 * c2); // Calculate x
    double y = (1 / det) * (-a21 * c1 + a11 * c2); // Calculate y

    // Display solutions
    cout << "Løsningen er: " << endl; // Output message
    cout << "x = " << x << endl; // Output x
    cout << "y = " << y << endl; // Output y

    // Part 4: Number Comparison
    int num1, num2; // Declaring variables for numbers

    cout << "Indtast to heltal: "; // Output message
    cin >> num1 >> num2; // Input two integers

    // Compare numbers and display results
    if (num1 > num2) { // Check if num1 is greater than num2
        cout << "Det første er større end det andet." << endl; // Output message
    }
    else if (num2 > num1) { // Check if num2 is greater than num1
        cout << "Det andet er større end det første." << endl; // Output message
    }
    else { // If neither of the above conditions are true
        cout << "Tallene er ens." << endl; // Output message
    }

    // Calculate and display sum and product
    int sum = num1 + num2; // Calculate sum
    int produkt = num1 * num2; // Calculate product

    cout << "Summen af tallene er: " << sum << endl; // Output sum
    cout << "Produktet af tallene er: " << produkt << endl; // Output product

    // Part 5: Number Properties
    int number; // Declaring variable for number

    cout << "enter a number : " << endl; // Output message
    cin >> number; // Input a number

    // Determine number properties and display results
    if (number > 0 && number % 2 == 0) // Check if number is positive and even
        cout << "The number is positive and even." << endl; // Output message
    if (number > 0 && number % 2 != 0) // Check if number is positive and odd
        cout << "The number is positive and odd." << endl; // Output message
    if (number < 0 && number % 2 == 0) // Check if number is negative and even
        cout << "The number is negative and even." << endl; // Output message
    if (number < 0 && number % 2 != 0) // Check if number is negative and odd
        cout << "The number is negative and odd." << endl; // Output message
    if (number == 0) // Check if number is zero
        cout << "The number is zero " << endl; // Output message

    // Alternative for Part 5
    int z; // Declaring variable for alternative input

    cout << "Enter a number: "; // Output message
    cin >> z; // Input a number

    if (z > 0) { // Check if z is positive
        if (z % 2 == 0) { // Check if z is even
            cout << "The number is positive and even." << endl; // Output message
        }
        else { // If z is not even
            cout << "The number is positive and odd." << endl; // Output message
        }
    }
    else if (z < 0) { // If z is not positive
        if (z % 2 == 0) { // Check if z is even
            cout << "The number is negative and even." << endl; // Output message
        }
        else { // If z is not even
            cout << "The number is negative and odd." << endl; // Output message
        }
    }
    else { // If z is not negative
        cout << "The number is zero." << endl; // Output message
    }

    // Part 6: Matrix and Determinant
    double a111, a121, a221, a211; // Declaring variables for matrix

    cout << "input the matrix values in order a11 a12 a21 a22" << endl; // Output message
    cin >> a111 >> a121 >> a211 >> a221; // Input values for matrix coefficients

    double dett = a111 * a221 - a211 * a121; // Calculate determinant

    if (dett == 0.0) // Check if determinant is zero
    {
        cout << "The system does not have a unique solution"; // Output message
    }
    else // If determinant is not zero
    {
        cout << "input the values c1 c2" << endl; // Output message
        double c11, c21; // Declaring variables for constants
        cin >> c11 >> c21; // Input values for constants

        double x = (a221 * c11 - a121 * c21) / dett; // Calculate x
        double y = (-a211 * c11 + a111 * c21) / dett; // Calculate y
        cout << "The solution is x: " << x << " and y: " << y << endl; // Output solutions

        cout << "Check c1:" << a111 * x + a121 * y << endl; // Output check for c1
        cout << "Check c2:" << a211 * x + a221 * y << endl; // Output check for c2
    }

    // Part 7: 3D Distance
    double x11, x21, x31, y11, y21, y31; // Declaring variables for 3D distance

    cout << "Input values x1 x2 x3" << endl; // Output message
    cin >> x11 >> x21 >> x31; // Input values for x coordinates
    cout << "Input values y1 y2 y3" << endl; // Output message
    cin >> y11 >> y21 >> y31; // Input values for y coordinates

    // Calculate 3D distance
    double distancee = sqrt(pow(y11 - x11, 2) + pow(y21 - x21, 2) + pow(y31 - x31, 2)); // Calculate 3D distance
    cout << " the distance is: " << distancee << endl; // Output 3D distance

    // Part 8: Power and Voltage
    cout << "input current in milliAmperes and resistance in Ohm as: current resistance;" << endl; // Output message

    double currentt; // unit mA
    double resistancee; // unit ohm

    cin >> currentt >> resistancee; // Input current and resistance

    double potential = currentt / 1000 * resistancee; // Calculate potential
    double powerr = potential * currentt / 1000; // Calculate power

    cout << "The potential in Volts is " << potential << endl; // Output potential
    cout << "The power dissipated in Watts is " << powerr << endl; // Output power

    return 0; // Indicate successful program execution
}
