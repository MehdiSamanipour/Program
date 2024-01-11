// Opgave 3.b
#include "Medarbejder.h"
#include <iostream>

// Opgave 3.b
// using namespace er frivilligt
using namespace std;

// Implementation of Medarbejder methods
Medarbejder::Medarbejder(std::string navn)
{
    setNavn(navn);
    arbejdsDage_ = 0;
    ferieTilgode_ = 0;
}

void Medarbejder::setNavn(std::string navn)
{
    // Validate and set the name
    navn_ = navn == "" ? "Ukendt" : navn;
}

std::string Medarbejder::getNavn() const
{
    // Return the name
    return navn_;
}

void Medarbejder::tilfoejArbejdsDage(double dage)
{
    // Add workdays and calculate additional vacation days
    if (dage > 0)
    {
        arbejdsDage_ += dage;
        ferieTilgode_ += dage * 0.1;
    }
}

double Medarbejder::getArbejdsDage() const
{
    // Return the total workdays
    return arbejdsDage_;
}

bool Medarbejder::afholdFerie(double ferie)
{
    // Combined expression ferie > 0 && ferie < ferieTilgode_ is allowed
    if (ferie > 0)
    {
        if (ferie <= ferieTilgode_)
        {
            // Deduct vacation days and return true
            ferieTilgode_ -= ferie;
            return true;
        }
    }
    // Return false if vacation days are not enough or if the input is invalid
    return false;
}

double Medarbejder::getFerieTilGode() const
{
    // Return the remaining vacation days
    return ferieTilgode_;
}

void Medarbejder::print() const
{
    // Print the employee's information
    cout << "Navn: " << navn_ << endl;
    cout << "Arbejdsdage: " << arbejdsDage_ << endl;
    cout << "Ferie tilgode: " << ferieTilgode_ << endl;
}
