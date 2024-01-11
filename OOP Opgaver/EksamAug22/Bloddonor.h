#pragma once
#include <string>

class Bloddonor
{
public:
    Bloddonor();
    Bloddonor(std::string navn, double BMI, std::string blodtype, bool rhesustype);
    void print() const;
    void setNavn(std::string);
    void setBMI(double);
    void setBlodtype(std::string);
    void setRhesustype(bool);
    std::string getNavn() const;
    double getBMI() const;
    std::string getBlodtype() const;
    bool getRhesustype() const;

private:
    std::string navn_;
    double BMI_;
    std::string blodtype_;
    bool rhesustype_;
};
