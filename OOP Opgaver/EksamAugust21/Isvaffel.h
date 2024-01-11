#pragma once

class Isvaffel
{
public:
    Isvaffel();
    Isvaffel(int kugler, int extras);

    void print() const;
    double beregnPris() const;
    bool tilfoejKugle();
    bool tilfoejExtra();
    int getAntalKugler() const;
    int getAntalExtras() const;

private:
    int antalKugler_;
    int antalExtras_;
};
