#include "Adresse.h"
#include <iostream>

Adresse::Adresse(std::string gadenavn, int husnummer, char bogstav, int postnummer) {
    setGadenavn(gadenavn);
    setHusnummer(husnummer);
    setBogstav(bogstav);
    setPostnummer(postnummer);
}

Adresse::Adresse(std::string gadenavn, int husnummer, int postnummer) {
    setGadenavn(gadenavn);
    setHusnummer(husnummer);
    bogstav_ = ' ';
    setPostnummer(postnummer);
}

void Adresse::print() const {
    std::cout << gadenavn_ << " " << husnummer_;
    if (bogstav_ != ' ') {
        std::cout << bogstav_;
    }
    std::cout << ", " << postnummer_ << std::endl;
}

void Adresse::setGadenavn(std::string gadenavn) {
    gadenavn_ = gadenavn;
}

void Adresse::setHusnummer(int husnummer) {
    husnummer_ = (husnummer >= 1 && husnummer <= 999) ? husnummer : 1;
}

void Adresse::setBogstav(char bogstav) {
    if ('A' <= bogstav && bogstav <= 'Z') {
        bogstav_ = bogstav;
    } else {
        bogstav_ = ' ';
    }
}

void Adresse::setPostnummer(int postnummer) {
    postnummer_ = (1000 <= postnummer && postnummer <= 9999) ? postnummer : 0;
}

std::string Adresse::getGadenavn() const {
    return gadenavn_;
}

int Adresse::getHusnummer() const {
    return husnummer_;
}

char Adresse::getBogstav() const {
    return bogstav_;
}

int Adresse::getPostnummer() const {
    return postnummer_;
}
