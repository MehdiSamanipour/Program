#include "Patient.h"
#include <iostream>

Patient::Patient(std::string navn, double hoejde, double vaegt, int fDag, int fMaaned, int fAar) : fDato_(fDag, fMaaned, fAar)
{
    setNavn(navn);
    setHoejde(hoejde);
    setVaegt(vaegt);
    setFoedselsDato(fDag, fMaaned, fAar);
}

void Patient::setNavn(std::string navn)
{
    navn_ = (navn != "") ? navn : "Ukendt";
}

std::string Patient::getNavn() const
{
    return navn_;
}

void Patient::setHoejde(double h)
{
    if (h >= 0.45 && h <= 2.35)
        hoejde_ = h;
    else
        hoejde_ = 1.74;
}

double Patient::getHoejde() const
{
    return hoejde_;
}

void Patient::setVaegt(double v)
{
    vaegt_ = (v >= 2.0 && v <= 300) ? v : 75;
}

double Patient::getVaegt() const
{
    return vaegt_;
}

void Patient::setFoedselsDato(int d, int m, int a)
{
    fDag_ = 1;
    fMaaned_ = 1;
    fAar_ = 1970;

    if (a < 1900 || a > 2099)
        return;

    if (m < 1 || m > 12)
        return;

    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (d < 1 || d > 31)
            return;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        if (d < 1 || d > 30)
            return;
        break;

    case 2:
        if (d < 1 || (a % 4 == 0 && d > 29) || (a % 4 != 0 && d > 28))
            return;
        break;

    default:
        return;
        break;
    }

    fDag_ = d;
    fMaaned_ = m;
    fAar_ = a;
}

int Patient::getFDag() const
{
    return fDag_;
}

int Patient::getFMaaned() const
{
    return fMaaned_;
}

int Patient::getFAar() const
{
    return fAar_;
}

void Patient::print() const
{
    std::cout << "Patientens navn: " << navn_ << std::endl;
    std::cout << "Hoejde: " << hoejde_ << " m" << std::endl;
    std::cout << "Vaegt: " << vaegt_ << " kg" << std::endl;
    std::cout << "Foedselsdato: " << fDag_ << "/" << fMaaned_ << "/" << fAar_ << std::endl;
}

double Patient::calculateBMI() const
{
    return vaegt_ / (hoejde_ * hoejde_);
}
