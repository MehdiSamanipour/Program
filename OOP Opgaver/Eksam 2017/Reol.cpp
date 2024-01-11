#include"Reol.h"
#include<iostream>


Reol::Reol() {


}
Reol::Reol(string skuffeIndhold, int antal) : reolSkuffe_(skuffeIndhold, antal)
{

}
void Reol::print()const {

	cout << "*** Reolskuffen ***" << endl;
	reolSkuffe_.print();

}