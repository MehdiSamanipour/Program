#pragma once
#include <string>

class Adresse {
public:
    Adresse(std::string gadenavn, int husnummer, char bogstav, int postnummer);
    Adresse(std::string gadenavn, int husnummer, int postnummer);

    void print() const;
    void setGadenavn(std::string gadenavn);
    void setHusnummer(int husnummer);
    void setBogstav(char bogstav);
    void setPostnummer(int postnummer);

    std::string getGadenavn() const;
    int getHusnummer() const;
    char getBogstav() const;
    int getPostnummer() const;

private:
    std::string gadenavn_;
    int husnummer_;
    char bogstav_;
    int postnummer_;
};
