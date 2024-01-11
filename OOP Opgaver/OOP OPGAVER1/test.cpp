#include "Date.h"
#include"Name.h"
#include "Vehicle.h"
#include "Regtangle.h"
#include "Point.h"
using namespace std;


int  main()
{
	int myDay, myMonth, myYear;
	bool check;

	Date d1;

	d1.print();

	Date d2(29, 2, 2012);

	d2.print();

	do
	{
		cout << "\nIndtast en dato ( Eksempel: 12 3 2004 ): ";
		cin >> myDay >> myMonth >> myYear;
		check = d1.set(myDay, myMonth, myYear);

		if (check == false)
			cout << "\nUgyldig dato!" << endl;

	} while (check == false);

	d1.print();

	string first, last;

	Name n1;

	n1.printName();

	Name n2("Kurt", "hansen");

	n2.printName();

	cout << "\nIndtast et navn ( Eksempel: Bo Hald ): ";
	cin >> first >> last;
	n1.setName(first, last);

	n1.printName();

	cout << "==============================" << endl;
	cout << "Test case: Explicit constructor" << endl;
	cout << "------------------------------" << endl;
	Vehicle vehicle("Skoda Fabia", 'B', 1050);
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;



	cout << "==============================" << endl;
	cout << "Test case: Valid name set" << endl;
	cout << "------------------------------" << endl;
	vehicle.setOwner("Troels", "Jensen");
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;



	cout << "==============================" << endl;
	cout << "Test case: Error in reg number string length" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegNr("AB2345");
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;



	cout << "==============================" << endl;
	cout << "Test case: Error in reg number char 0" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegNr("xB12345");
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Error in reg number char 1" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegNr("Ax12345");
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Error in reg number char 2" << endl;
	cout << "------------------------------" << endl;
	// Error in reg number char 2
	vehicle.setRegNr("ABA2345");
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;



	cout << "==============================" << endl;
	cout << "Test case: Valid reg number set" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegNr("AB12345");
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;

	cout << "==============================" << endl;
	cout << "Test case: Invalid date set" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegDate(31, 2, 2016);
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;

	cout << "==============================" << endl;
	cout << "Test case: Valid date set" << endl;
	cout << "------------------------------" << endl;
	vehicle.setRegDate(31, 1, 2016);
	vehicle.printCertificate();
	cout << "==============================" << endl << endl;

	return 0;

}
