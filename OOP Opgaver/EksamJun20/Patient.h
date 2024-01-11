#pragma once
#include <string>

#include "Dato.h"

class Patient
{
public:
    Patient(
        std::string navn = "Ukendt",
        double hoejde = 1.74,
        double vaegt = 74,
        int fDag = 1,
        int fMaaned = 1,
        int fAar = 1970
    );

    void setNavn(std::string);
    std::string getNavn() const;
    void setHoejde(double);
    double getHoejde() const;
    void setVaegt(double);
    double getVaegt() const;
    void setFoedselsDato(int, int, int);
    int getFDag() const;
    int getFMaaned() const;
    int getFAar() const;
    void print() const;
    double calculateBMI() const;

private:
    std::string navn_;
    double hoejde_;
    double vaegt_;
    int fDag_;
    int fMaaned_;
    int fAar_;
    Dato fDato_;
};

