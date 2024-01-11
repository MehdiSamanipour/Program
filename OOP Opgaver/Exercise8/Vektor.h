#pragma once
#include <string>


struct Vektor {
    void rotate(double angle);
    double length() const;
    std::string toString() const;
    double x_;
    double y_;
};
