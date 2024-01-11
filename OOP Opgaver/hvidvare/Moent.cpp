#include "Moent.h"
#include <iostream>
#include <iomanip>

using namespace std;


Moent::Moent(const std::string& land, int aarstal, double vaerdi, const std::string& moentfod)
{
    land_ = land;
    setAarstal(aarstal);
    setVaerdi(vaerdi);
    moentfod_ = moentfod;
}

void Moent::setLand(const std::string& land)
{
    land_ = land;
}

std::string Moent::getLand() const
{
    return land_;
}

void Moent::setAarstal(int aarstal)
{
    aarstal_ = (1000 <= aarstal && aarstal <= 2100 ? aarstal : 0);
}

int Moent::getAarstal() const
{
    return aarstal_;
}

void Moent::setVaerdi(double vaerdi)
{
    vaerdi_ = (vaerdi >= 0.0 ? vaerdi : 0.0);
}

double Moent::getVaerdi() const
{
    return vaerdi_;
}

void Moent::setMoentfod(const std::string& moentfod)
{
    moentfod_ = moentfod;
}

std::string Moent::getMoentfod() const
{
    return moentfod_;
}

void Moent::print() const
{
    cout << setprecision(2) << fixed << land_ << "\t\t" << aarstal_ << "\t" << vaerdi_ << " " << moentfod_ << endl;
}