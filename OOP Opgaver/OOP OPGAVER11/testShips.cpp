#include <iostream>
#include <vector>
#include "Ship.h"
#include "Submarine.h"
#include "Containership.h"
#include"BitSet.h"
#include"BitSetConstSize.h"
#include"Shape.h"
#include"Ellipse.h"
#include"Rectangle.h"
#include"Triangle.h"
using namespace std;
int main()
{
	BitSet b(8);
	BitSet b1(8);

	b.shiftIn(1).shiftIn(0).shiftIn(1).shiftIn(1);
	b1.shiftIn(1).shiftIn(0).shiftIn(1).shiftIn(1).shiftIn(1).shiftIn(0).shiftIn(1).shiftIn(1);

	b.print();
	cout << endl;
	b1.print();
	cout << endl;


	// Opgave 11.4
	BitSet b2(b);   // copy constructor, size 8
	BitSet b3(1);   // Size 1

	b2.print();
	cout << endl;
	b3.print();
	cout << endl;

	b3 = b2;		// Overskriv b3 med assignment, ny size 8

	b3.print();
	cout << endl;
	Containership c1, c2("Maersk Containerskib", "McKinney Maersk", 4, 5), c3("Lloyd Containerskib", "Lloyd Alexander", 11, 12);

	c1.show();
	c2.show();
	c3.show();

	// Nu må vi lave assignment
	c1 = c2;
	c1.show();

	c2.setPosition(7, -10);
	c2.setType("A. P. Moeller Container");
	c2.setName("Lotte Moeller");

	c2.show();

	int x, y;

	c2.getPosition(x, y);

	cout << endl << "Position  (" << x << ", " << y << ")\n";

	cout << endl << c3.distance(c2) << endl;
	cout << c2.distance(c3) << endl;

	Ship coaster("Coaster", 33, 45);

	cout << endl << coaster.distance(c3) << endl;
	cout << c3.distance(coaster) << endl << endl;

	Submarine subm("Yellow Submarine", 11, 15, 100);

	// Test af udskrifter af en vector af Ship objekter
	// Først prøves med en simpel vector af objekter

	// Nu slippe vi for nogle af problemerne ved kopiering, for vi har implementeret rule-of-three
	// men det er stadig et problem at vi prøver at putte Containership og Submarine objekter ind i Ship objekter
	// - vi får "slicing"

	// Kommenter det ud, for at fuldføre programmet
	vector<Ship> shipVector;

	shipVector.push_back(c1);
	shipVector.push_back(c2);
	shipVector.push_back(c3);
	shipVector.push_back(coaster);
	shipVector.push_back(subm);

	for (vector<Ship>::iterator iter = shipVector.begin(); iter != shipVector.end(); iter++)
	{
		iter->show();
	}


	// Så bruger vi en vector af Ship * - pointere til Ship objekter

	// Nu bruger vi polymorfi, for show() er virtual, og vi får skrevet det rigtige ud
	// Men nu er der ingen problemer pga. kopiering, for vi kopierer ikke!
	vector<Ship*> shipPtrVector;

	shipPtrVector.push_back(&c1);
	shipPtrVector.push_back(&c2);
	shipPtrVector.push_back(&c3);
	shipPtrVector.push_back(&coaster);
	shipPtrVector.push_back(&subm);

	for (auto iter = shipPtrVector.begin(); iter != shipPtrVector.end(); ++iter)
	{
		// Læg mærke til, at iter er pointeragtig
		// og at iter selv peger på en pointer, derfor er der både * og ->
		// Alternativt: (**iter).show();
		(*iter)->show();
	}

	// Alternativt bruges for-range, da det blot er en simpel tilgang af hvert element
	// Her er det en pointer vi får direkte, udenom iter
	for (const Ship* p : shipPtrVector)
	{
		p->show();
	}

	// Kopier af submarine og ship giver heller ikke problemer længere
	Submarine subm2("Whisky class", 5000, 6000, 300);
	Submarine subm3(subm);

	subm2.show();
	subm3.show();

	subm2 = subm3;

	subm2.show();

	Ship ship2("Spritbaad", 3000, 4000);
	Ship coaster2(coaster);

	ship2.show();
	coaster2.show();

	ship2 = coaster2;

	ship2.show();

	// Opgave 11.6
	// Shape s1(4, 5);

	// Opgave 11.7+8
	Rectangle r1(4, 5, 10, 15);

	r1.draw();

	// Opgave 2D
	vector<Shape*> shapeVec;

	shapeVec.push_back(new Rectangle(2, 3, 4, 5));
	shapeVec.push_back(new Rectangle(10, 11, 14, 15));
	shapeVec.push_back(new Rectangle(22, 23, 24, 25));

	// Standard iterator loop
	for (vector<Shape*>::iterator i = shapeVec.begin(); i != shapeVec.end(); i++)
	{
		(*i)->draw();
		cout << endl;
	}

	// Brug af auto i standard iterator loop
	for (auto i = shapeVec.begin(); i != shapeVec.end(); i++)
	{
		(**i).draw();
		cout << endl;
	}

	// Brug for range, giver mindre skrivning i hver løkke
	for (Shape* p : shapeVec)
	{
		p->draw();
		cout << endl;
	}

	// Brug for range med auto, endnu mindre skrivning
	for (auto p : shapeVec)
	{
		p->draw();
		cout << endl;
	}

	Ellipse e1(3, 6, 8, 10);

	e1.draw();
	cout << endl;

	Triangle t1(10, 11, 3, 4, 5);

	t1.draw();
	cout << endl;

	shapeVec.push_back(new Ellipse(3, 6, 8, 10));
	shapeVec.push_back(new Triangle(10, 11, 3, 4, 5));

	for (auto i = shapeVec.begin(); i != shapeVec.end(); i++)
	{
		(*i)->draw();
		cout << endl;
	}

	// Clean up all dynamically allocated objects
	for (auto p : shapeVec)
	{
		delete p;
	}
	return 0;
}

	