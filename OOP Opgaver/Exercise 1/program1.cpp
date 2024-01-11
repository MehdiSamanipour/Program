#include <cmath>          // Include the math library
#include <iostream>       // Include the input/output stream library
#include <iomanip>        // Include the input/output manipulation library
#include "Header.h"       // Include the custom header file

using namespace std;     // Use the standard namespace

int main()
{
    cout << "My first program in OPRG kursus:" << endl;  // Print a message

    int number1 = 16, number2 = 4;   // Declare and initialize two integers
    int result = calculate(number1, number2);  // Call a function and store the result
    float kvatratrodx = sqrt(number1);        // Calculate square root
    double pi = 3.141592;       // Define the value of pi

    // Print out various results and messages
    cout << "The result of calculation with " << number1 << " and " << number2 << " is: " << result << endl;
    cout << "Square root of " << number1 << " is " << kvatratrodx << endl;
    cout << "Cosine of pi/4 is " << cos(pi / 4) << endl;
    cout << "Result of calculation is " << result << endl;

    float radius = 3.5;    // Define the radius of a circle
    float area1 = circleArea(radius);  // Calculate the area of a circle
    cout << "The circle with radius " << radius << " has area " << area1 << endl;  // Print the result

    int sideA = 3, sideB = 4, sideC = 5;   // Define sides of a triangle or rectangle
    int area2 = rectangleArea(sideA, sideB);  // Calculate the area of a rectangle
    cout << "The rectangle with sides " << sideA << " and " << sideB << " has area " << area2 << endl;  // Print the result

    float area3 = triangleArea(sideA, sideB, sideC);  // Calculate the area of a triangle
    cout << "The triangle with sides " << sideA << ", " << sideB << ", and " << sideC << " has area " << area3 << endl;  // Print the result

    char ch1 = 'a', ch2 = 'b';   // Define two characters
    bool isEqualResult = isEqual(ch1, ch2);  // Check if characters are equal
    cout << "Is '" << ch1 << "' equal to '" << ch2 << "'? " << (isEqualResult ? "Yes" : "No") << endl;  // Print the result

    charToASCII(ch1);  // Convert character to ASCII and print the result

    float x = 4;   // Define a float value
    float kvadratrodx;   // Declare a variable for square root

    kvadratrodx = sqrt(x);   // Calculate square root
    cout << "Square root of " << x << " is " << kvadratrodx << endl;   // Print the result

    x = 16;   // Assign a new value to x
    kvadratrodx = sqrt(x);   // Calculate square root
    cout << "Square root of " << x << " is " << kvadratrodx << endl;   // Print the result

    x = 5.713;   // Assign a new value to x
    cout << "Square root of " << x << " is " << sqrt(x) << endl;   // Calculate and print square root

    cout << "Variable kvadratrodx is still: " << kvadratrodx << endl;  // Print the value of kvadratrodx

    pi = 3.14159265358979323846;   // Update the value of pi
    cout << "Cosine of pi is " << cos(pi) << endl;  // Calculate and print cosine of pi
    cout << "Cosine of pi/4 is " << cos(pi / 4) << endl;  // Calculate and print cosine of pi/4

    cout << setprecision(15);   // Set precision for floating-point output
    cout << "pi is set to: " << pi << endl;  // Print the value of pi
    cout << "Cosine of pi/4 with 15 digits precision is " << cos(pi / 4) << endl;  // Calculate and print cosine of pi/4 with increased precision

    // Additional code starts here

    float radius2, area4;  // Define variables for circle
    int sideA2, sideB2, sideC2, area5;  // Define variables for rectangle and triangle
    char ch3, ch4;  // Define characters for comparison
    int test2;  // Define an integer for testing

    // test af funktionen circleArea()
    radius2 = 4.5;  // Assign a value to radius2
    area4 = circleArea(radius2);  // Calculate area of circle

    cout << "Cirklen med radius " << radius2 << " har arealet " << area4 << endl;  // Print the result

    // test af funktionen rectangleArea()
    sideA2 = 3;   // Assign a value to sideA2
    sideB2 = 4;   // Assign a value to sideB2
    area5 = rectangleArea(sideA2, sideB2);   // Calculate area of rectangle

    cout << "Rektanglet med sider " << sideA2 << " og " << sideB2 << " har arealet " << area5 << endl;  // Print the result

    // test af funktionen triangleArea()
    sideA2 = 2;   // Assign a value to sideA2
    sideB2 = 4;   // Assign a value to sideB2
    sideC2 = 5;   // Assign a value to sideC2

    area4 = triangleArea(sideA2, sideB2, sideC2);  // Calculate area of triangle

    cout << "Trekanten med sider " << sideA2 << ", " << sideB2 << " og " << sideC2 << " har arealet " << area4 << endl;  // Print the result

    // test af funktionen isEqual()
    ch3 = 'a';   // Assign a value to ch3
    ch4 = 'b';   // Assign a value to ch4

    test2 = isEqual(ch3, ch4);   // Check if characters are equal

    cout << "Returvaerdien fra isEqual( '" << ch3 << "', '" << ch4 << "' ) er: " << test2 << endl;  // Print the result

    // test af funktionen charToASCII()
    charToASCII(ch3);  // Convert character to ASCII and print the result

    return 0;  // Return 0 to indicate successful program execution
}
