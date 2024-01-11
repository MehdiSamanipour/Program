#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

// Constructor
Triangle::Triangle(double a, double b, double c) {
    setSides(a, b, c);
}

// Setters and getters
void Triangle::setSides(double a, double b, double c) {
    // Validation and setting sides
    if (a >= 0 && b >= 0 && c >= 0 && a + b > c && b + c > a && a + c > b) {
        a_ = a;
        b_ = b;
        c_ = c;
    }
    else {
        // If any side is invalid, set all sides to default value 1
        a_ = b_ = c_ = 1;
    }
}

double Triangle::getSideA() const {
    return a_;
}

double Triangle::getSideB() const {
    return b_;
}

double Triangle::getSideC() const {
    return c_;
}

// Other methods
double Triangle::circumference() const {
    return a_ + b_ + c_;
}

void Triangle::print() const
{
    cout << "siden a   : " << a_ << endl;
    cout << "siden b   : " << b_ << endl;
    cout << "siden c   : " << c_ << endl;
    cout << "omkreds   : " << circumference() << endl;
    cout << "areal     : " << area() << endl;
}

double Triangle::area() const {
    double s = circumference() / 2.0;
    return std::sqrt(s * (s - a_) * (s - b_) * (s - c_));
}
