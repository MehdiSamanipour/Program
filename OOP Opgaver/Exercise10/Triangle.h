#pragma once

class Triangle {
public:
    // Constructor
    Triangle(double a, double b, double c);

    // Setters and getters
    void setSides(double a, double b, double c);
    double getSideA() const;
    double getSideB() const;
    double getSideC() const;

    // Other methods
    double circumference() const;
    void print() const;
    double area() const;

private:
    double a_;
    double b_;
    double c_;

};
