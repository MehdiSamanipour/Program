// Wire.h
#pragma once

class Wire {
public:
    // Constructor
    Wire(double length, double area, double resistance);

    // Getter functions
    double getLength() const;
    double getCrossSectionArea() const;
    double getModstand() const;

    // Setter functions
    void setLength(double length);
    void setCrossSectionArea(double area);
    void setModstand(double resistance);

private:
    double L;    // Length of the wire in meters
    double A;    // Cross-sectional area of the wire in square meters
    double rho;  // Specific resistance of the material in ohm⸱meter
};
