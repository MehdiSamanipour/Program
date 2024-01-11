#include"Boernebog.h"
using namespace std;

Boernebog::Boernebog(const string& titel, const string& forfatter, int minimumAlder)
	: Bog(titel, forfatter)

{
	setMinimumAlder(minimumAlder);

}

void Boernebog::setMinimumAlder(int minimumsAlder)
{
	minimumAlder_ = minimumsAlder >= 0 ? minimumsAlder : 0;
}
int Boernebog::getMinimumAlder() const
{
	return minimumAlder_;
}