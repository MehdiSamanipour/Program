#pragma once
#include <string>

class Vektor1 {
public:
    Vektor1(double x, double y);
    void rotate(double angle);
    double length() const;
    std::string toString() const;
    double angle(Vektor1 v) const;
    double innerProduct(Vektor1 v) const;

private:
    double x_;
    double y_;
};