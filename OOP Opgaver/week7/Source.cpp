#include "Time.h"
#include <iostream>
#include "karakter.h"
#include "Card.h"
using namespace std;


int main() {
	Time t1 = { 0, 120, 0 }; // Ugyldigt angivet minuttal
	Time t2 = { 1, 0, 0 };  // Korrekt tid

	// Man kan ikke blande cout << og print-funktioner, de skal
	// udføres hver for sig.
	cout << "t1: ";
	printTime(t1);

	cout << "t2: ";
	printTime(t2);

	// Add t1 og t2 og gem resultatet i t3
	Time t3 = addTime(t1, t2);
	cout << "t3, hvor timer, minutter og sekunder nu har korrekte værdier: ";
	printTime(t3);

	cout << "t3 som sekunder skulle gerne give 3600*3 == 10800: " << convertToSeconds(t3) << endl;

	t3 = createHour(3661);
	cout << "3661 sekunder skulle gerne give 1:1:1: ";
	printTime(t3);

	// opgave 2

	Karakter k1, k3;

	cout << "Indtast faget (uden mellemrum): ";
	cin >> k1.fag;

	cout << "Indtast karakteren som heltal: ";
	cin >> k1.karakter;

	printKarakter(k1);

	cout << "Indtast faget (uden mellemrum): ";
	cin >> k3.fag;

	cout << "Indtast karakteren som heltal: ";
	cin >> k3.karakter;


	//opgave 2 ekstra

	Karakter k2{ "MSYS", 12 };
	

	vector<Karakter> karakterer;

	karakterer.push_back(k1);
	karakterer.push_back(k2);
	karakterer.push_back(k3);

	cout << "Direkte udskrivning af vector<Karakter>: " << endl;

	for (int i = 0; i < karakterer.size(); i++)
	{
		printKarakter(karakterer[i]);
	}

	KarakterBog kb1;
	kb1.navn = "Frank B. Jakobsen";
	// Læg mærke til at der er 2 dots for at kunne kalde push back
	kb1.karakterer.push_back(k1);
	kb1.karakterer.push_back(k2);
	kb1.karakterer.push_back(k3);

	cout << "Udskrivning af KarakterBog: " << endl;
	printKarakterBog(kb1);

	// opgave 3

	Card c1{ ACE, SPADES };
	Card c2{ KING, CLUBS };
	Card c3{ KING, SPADES };

	cout << "c1: ";
	printCard(c1);

	cout << "c2: ";
	printCard(c2);

	cout << "c3: ";
	printCard(c3);

	Card c4;
	cout << "Highest card of c1 and c2 is: ";
	c4 = highestCard(c1, c2);
	printCard(c4);

	// Or we can print the result directly:
	cout << "Highest card of c2 and c3 is: ";
	printCard(highestCard(c2, c3));


	return 0;
}
