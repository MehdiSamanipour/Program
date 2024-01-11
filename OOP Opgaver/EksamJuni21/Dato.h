// Dato.h

#pragma once

class Dato
{
public:
    Dato();
    Dato(int dag, int maaned, int aar);
    void setDato(int dag, int maaned, int aar);
    int getDag() const;
    int getMaaned() const;
    int getAar() const;
    void print() const;

private:
    int dag_;
    int maaned_;
    int aar_;
};
