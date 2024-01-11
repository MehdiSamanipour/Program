#include "Isvaffel.h"
#include <iostream>
using namespace std;

Isvaffel::Isvaffel()
{
    antalKugler_ = 1;
    antalExtras_ = 0;
}

Isvaffel::Isvaffel(int kugler, int extras)
{
    antalKugler_ = 1 <= kugler && kugler <= 5 ? kugler : 1;
    antalExtras_ = 0 <= extras && extras <= 5 ? extras : 0;
}

void Isvaffel::print() const
{
    cout << "Isvaffel med " << antalKugler_;
    if (antalKugler_ == 1)
        cout << " kugle ";
    else
        cout << " kugler ";

    cout << "og " << antalExtras_ << " extra ting, pris: " << beregnPris() << " kr." << endl;
}

double Isvaffel::beregnPris() const
{
    return 10 + antalKugler_ * 10 + antalExtras_ * 5;
}

bool Isvaffel::tilfoejKugle()
{
    if (antalKugler_ >= 5)
        return false;
    antalKugler_++;
    return true;
}

bool Isvaffel::tilfoejExtra()
{
    if (antalExtras_ >= 5)
        return false;
    antalExtras_++;
    return true;
}

int Isvaffel::getAntalKugler() const
{
    return antalKugler_;
}

int Isvaffel::getAntalExtras() const
{
    return antalExtras_;
}
