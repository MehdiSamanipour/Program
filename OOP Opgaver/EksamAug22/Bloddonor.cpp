#include "Bloddonor.h"
#include <iostream>

Bloddonor::Bloddonor() : navn_("Ukendt"), BMI_(22.5), blodtype_("Ukendt"), rhesustype_(false)
{
}

Bloddonor::Bloddonor(std::string navn, double BMI, std::string blodtype, bool rhesustype)
    : navn_(navn), BMI_(BMI), blodtype_(blodtype), rhesustype_(rhesustype)
{
}

void Bloddonor::print() const
{
    std::cout << navn_ << ", " << blodtype_;
    if (rhesustype_)
    {
        std::cout << "+, ";
    }
    else
    {
        std::cout << "-, ";
        std::cout << "BMI: " << BMI_ << std::endl;
    }
}

void Bloddonor::setNavn(std::string navn)
{
    navn_ = navn;
}

void Bloddonor::setBMI(double bmi)
{
    BMI_ = (bmi >= 10.0 && bmi <= 50.0) ? bmi : 22.5;
}

void Bloddonor::setBlodtype(std::string type)
{
    if (type == "A" || type == "B" || type == "AB" || type == "0")
        blodtype_ = type;
    else
        blodtype_ = "Ukendt";
}

void Bloddonor::setRhesustype(bool rhesustype)
{
    rhesustype_ = rhesustype;
}

std::string Bloddonor::getNavn() const
{
    return navn_;
}

double Bloddonor::getBMI() const
{
    return BMI_;
}

std::string Bloddonor::getBlodtype() const
{
    return blodtype_;
}

bool Bloddonor::getRhesustype() const
{
    return rhesustype_;
}
