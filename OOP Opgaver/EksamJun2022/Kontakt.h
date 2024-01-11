#pragma once
#include <string>
#include "Adresse.h"

class Kontakt {
public:
    Kontakt(std::string navn, int telefonnummer, std::string gadenavn, int husnummer, char bogstav, int postnummer);
    Kontakt(std::string navn, int telefonnummer, std::string gadenavn, int husnummer, int postnummer);

    void print() const;
    void setNavn(std::string navn);
    void setTelefonnummer(int telefonnummer);
    void setAdresse(Adresse adresse);

    std::string getNavn() const;
    int getTelefonnummer() const;
    Adresse getAdresse() const;

private:
    std::string navn_;
    int telefonnummer_;
    Adresse adresse_;
};
