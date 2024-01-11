#include <iostream>   // Include the input/output stream library
#include <cmath>      // Include the math library
#include "Header.h"   // Include the custom header file

int calculate(int parametr1, int parametr2)
{
    return (parametr1 / parametr2);  // Return the result of division
}

float circleArea(float r)
{
    return (3.14 * r * r);   // Return the area of a circle
}

int rectangleArea(int a, int b)
{
    return (a * b);   // Return the area of a rectangle
}

float triangleArea(int a, int b, int c)
{
    if (a + b < c || a + c < b || b + c < a)   // Check if sides form a valid triangle
    {
        printf("\nDette er IKKE en trekant!\n");   // Print a message if not a triangle
        return 0;   // Return 0 (invalid area)
    }
    else
    {
        float s = 0.5 * (a + b + c);   // Calculate semiperimeter
        return (sqrt(s * (s - a) * (s - b) * (s - c)));  // Return the area of a triangle
    }
}

int isEqual(char c1, char c2)
{
    if (c1 == c2)   // Check if characters are equal
        return true;   // Return true if equal
    else
        return false;   // Return false if not equal
}

void charToASCII(char c)
{
    std::cout << "Tegnet " << c << " har ASCII vaerdien " << (int)c << std::endl;   // Print character and its ASCII value
}
