#include"Ship.h"
#include"Submarine.h"
#include"Containership.h"
#include"Automobile.h"
#include"RoadVehicle.h"
#include"Truck.h"

using namespace std;

int main()
{
	Ship speedbaad, robaad("Robaad", 4, 5), jolle(robaad);

	speedbaad.show();
	robaad.show();
	jolle.show();

	robaad.setPosition(7, -10);
	robaad.setType("Kajak");

	robaad.show();

	cout << endl << speedbaad.distance(robaad) << endl;
	cout << robaad.distance(speedbaad) << endl;

	int x, y;

	robaad.getPosition(x, y);

	cout << endl << "Position (" << x << ", " << y << ")\n\n";

	// Følgende kode kan give problemer, kommenter dem ud, hvis det er tilfældet
	// Løsningen kommer først i lektionerne om operator overload
	speedbaad = robaad;

	speedbaad.show();
	Submarine ubaad1, ubaad2("Yellow submarine", 4, 5, 200), ubaad3("Red October", 10, 11, 500);

	ubaad1.show();
	ubaad2.show();
	ubaad3.show();

	ubaad2.setPosition(7, -10);
	ubaad2.setType("Nuclear Submarine");
	ubaad2.setDepth(154);

	ubaad2.show();

	/*int x, y;*/

	ubaad2.getPosition(x, y);

	cout << endl << "Position (" << x << ", " << y << ")\n";

	cout << endl << ubaad3.distance(ubaad2) << endl;
	cout << ubaad2.distance(ubaad3) << endl;


	Ship coaster("Coaster", 33, 45);

	cout << endl << coaster.distance(ubaad3) << endl;
	cout << ubaad3.distance(coaster) << endl << endl;

	// Følgende kode kan give problemer, kommenter dem ud, hvis det er tilfældet
	// Løsningen kommer først i lektionerne om operator overload

	ubaad1 = ubaad2;

	ubaad1.show();

	Containership c1, c2("Maersk Containerskib", "McKinney Maersk", 4, 5), c3("Lloyd Containerskib", "Lloyd Alexander", 11, 12);

	c1.show();
	c2.show();
	c3.show();

	// Følgende kode kan give problemer, kommenter dem ud, hvis det er tilfældet
	// Det skyldes kopieringen
	// Løsningen kommer først i lektionerne om operator overload
	c1 = c2;

	c1.show();

	// Herfra OK igen?
	c2.setPosition(7, -10);
	c2.setType("A. P. Moeller Container");
	c2.setName("Lotte Moeller");

	c2.show();

	/*int x, y;*/

	c2.getPosition(x, y);

	cout << endl << "Position  (" << x << ", " << y << ")\n";

	cout << endl << c3.distance(c2) << endl;
	cout << c2.distance(c3) << endl;

	/*Ship coaster("Coaster", 33, 45);*/
	
	cout << endl << coaster.distance(c3) << endl;
	cout << c3.distance(coaster) << endl << endl;

	Submarine subm("Yellow Submarine", 11, 15, 100);

	// Test af udskrifter af en vector af Ship objekter
	// Først prøves med en simpel vector af objekter

	// Det vil det give problemer, at der kopieres (ligesom de forrige eksempler med kopiering)
	// Det skyldes den dynamiske allokering, og det løser vi først når vi hører om operator overload

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

	// Denne udskrift vil tro, at alle objekterne er Ship, og der kommer ikke de rigtige udskrifter
	// Løsningen på dette vil komme næste gang, hvor vi skal høre om polymorfi
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
		(**iter).show();
	}

	// Alternativt bruges for-range, da det blot er en simpel tilgang af hvert element
	// Her er det en pointer vi får direkte, udenom iter
	for (const Ship* p : shipPtrVector)
	{
		p->show();
	}
	RoadVehicle bil1, bil2(4, 4);
	Truck last1, last2(2400, 8, 3);
	Automobile MX_3, minibus(WAGON, 4, 7);

	cout << "Bil1\n-------------\n";
	bil1.print();
	cout << "Bil2\n-------------\n";
	bil2.print();
	cout << "Last1\n-------------\n";
	last1.print();
	cout << "Last2\n-------------\n";
	last2.print();
	cout << "MX-3\n-------------\n";
	MX_3.print();
	cout << "Minibus\n-------------\n";
	minibus.print();

	bil1.setWheels(3);
	bil1.setPassengers(2);

	cout << "Bil1\n-------------\n";
	bil1.print();

	last1.setWheels(6);
	last1.setPassengers(2);
	last1.setCargo(1200);

	cout << "Last1\n-------------\n";
	last1.print();

	MX_3.setWheels(4);
	MX_3.setPassengers(5);
	MX_3.setType(CAR);

	cout << "MX-3\n-------------\n";
	MX_3.print();



	return 0;
}