#include"Resistor.h"
#include "Erotik.h"
#include "Boernebog.h"
#include <vector>
using namespace std;

int main() {

	/*Resistor r1, r2(5);
	cout << "Resistor 1 med modstand " << r1.getResistance() << " og konduktans " << r1.getConductance() << endl;
	cout << "Resistor 2 med modstand " << r2.getResistance() << " og konduktans " << r2.getConductance() << endl;
		r1.setResistance(5.0);
	cout << "Resistor 1 har nu modstand " << r1.getResistance() << " og konduktans " << r1.getConductance() << endl;
		r2.setConductance(10.0);
	cout << "Resistor 2 har nu modstand " << r2.getResistance() << " og konduktans " << r2.getConductance() << endl;

	Resistor a(5), b(15);
	Resistor c, d;
	c = a && b;
	d = a || b;
	cout << "Resistor c har modstand " << c.getResistance() << " og konduktans "
		<< c.getConductance() << endl;
	cout << "Resistor d har modstand " << d.getResistance() << " og konduktans "
		<< d.getConductance() << endl;*/


	// opgave 2

	Erotik e1("50 Shades of Grey", "E.L.James");
	e1.print();
	Boernebog bb1("Hodja fra Pjort", "Ole Lund Kirkegaard", 8);
	bb1.print();
	vector<Bog*> bogVec;
	bogVec.push_back(&e1);
	bogVec.push_back(&bb1);
	// Der bedes udtrykkeligt om at bruge en iterator
	// så en for range sætning tæller som lidt mindre
	// Man må gerne bruge auto:
	// for (auto it = bogVec.begin(); it != bogVec.end(); it++)
	for (vector<Bog*>::iterator it = bogVec.begin(); it != bogVec.end(); it++)
	{
		(*it)->print();
	}
}