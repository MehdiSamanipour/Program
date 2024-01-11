// Dato.cpp

#include "Dato.h"
#include <iostream>
#include <iomanip>

Dato::Dato(int dag, int maaned, int aar)
{
    setDato(dag, maaned, aar);
}

Dato::Dato()
{
    setDato(1, 1, 1970);
}

void Dato::setDato(int dag, int maaned, int aar)
{
    aar_ = (1970 <= aar && aar <= 2099) ? aar : 1970;
    maaned_ = (1 <= maaned && maaned <= 12) ? maaned : 1;

    switch (maaned_)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        dag_ = (1 <= dag && dag <= 31) ? dag : 1;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        dag_ = (1 <= dag && dag <= 30) ? dag : 1;
        break;

    case 2:
        // February check for leap year
        if ((aar_ % 4 == 0 && aar_ % 100 != 0) || (aar_ % 400 == 0))
            dag_ = (1 <= dag && dag <= 29) ? dag : 1;
        else
            dag_ = (1 <= dag && dag <= 28) ? dag : 1;
        break;
    }
}

int Dato::getDag() const
{
    return dag_;
}

int Dato::getMaaned() const
{
    return maaned_;
}

int Dato::getAar() const
{
    return aar_;
}

void Dato::print() const
{
    std::cout << aar_ << "-" << std::setw(2) << std::setfill('0') << maaned_ << "-" << std::setw(2) << dag_;
}
