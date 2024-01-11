#pragma once
#include "Isvaffel.h"

class IsbodsOrdre
{
public:
    IsbodsOrdre();

    void indsaetIsvaffel(Isvaffel v);

    void print() const;
    double beregnPris() const;

private:
    Isvaffel vafler_[4];
    int antalVafler_;
};

