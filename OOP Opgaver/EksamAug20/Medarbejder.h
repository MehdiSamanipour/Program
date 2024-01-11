#pragma once
// Opgave 3.a
#pragma once
#include <string>

// const er vigtig
// using namespace std er tilladt
// Opgave 3.a
class Medarbejder
{
public:
    // Parametrized constructor
    Medarbejder(std::string navn);
    void setNavn(std::string navn);
    std::string getNavn() const;
    void tilfoejArbejdsDage(double dage);
    double getArbejdsDage() const;
    bool afholdFerie(double ferie);
    double getFerieTilGode() const;
    void print() const;

private:
    // Attributes
    std::string navn_;
    double arbejdsDage_;
    double ferieTilgode_;
};


