#include<stdio.h>
#include<math.h>
#include<string.h>
#include "Opgave.h"
#include "Dato.h"

#include "Coulomb.h"



#define NAME_SIZE 26

const int ARRAY_SIZE = 5;


int main()
{
// opgave 1
	int i;

	for(i=1;i<=99;i+=2 )
	{
		printf("%d %f\n", i, sqrt(i));

	}
	//OPGAVE 2
	char navn[NAME_SIZE];
	int alder;
	printf("indtaste dit fornavn: ");
	scanf_s("%s", navn, NAME_SIZE);
	printf("indtast din alder som heltal: ");
	scanf_s("%d", &alder);
	printf("du hedder %s\n",navn);
	printf("Dit fornavn hat %d bogstaver \n", strlen(navn));
	printf("Din alder er %d\n", alder);

	// Anvendelse af %g er hintet i opgaven
// Andre måder at udskrive returværdien er også OK ­ hvis det er korrekt
	printf("Ladning 1: %f, Ladning 2: %f, Afstand: %f, Kraft: %g\n", 1.0, 1.0, 1.0, beregnKraft(1, 1, 1));
	printf("Ladning 1: %f, Ladning 2: %f, Afstand: %f, Kraft: %g\n", 0.0, 1.0, 1.0, beregnKraft(0, 1, 1));
	printf("Ladning 1: %g, Ladning 2: %g, Afstand: %g, Kraft: %g\n", 1.6022e-19, 1.6022e-19, 0.01, beregnKraft(1.6022e-19, 1.6022e-19, 0.01));
	// Opgave 3.d
	printf("Ladning 1: %f, Ladning 2: %f, Afstand: %f, Kraft: %g\n",
		1.0, 1.0, 0.0, beregnKraft(1, 1, 0));

	//opgave 4

	Opgave opg1; // Default constructor
	Opgave opg2("Aflevere rapport", 5, 5, 6, 2021); // Parametriseret constructor

	// Printing the content of the objects
	opg1.print();
	opg2.print();

	// Opgave 4.e
// Eksempler ­ det er bedre at initialisere end at sætte hvert enkelt element explicit
Opgave huskeliste[ARRAY_SIZE] = {
Opgave("Opgave 1", 1, 1,1,2020),
{"Opgave 2", 2, 1,1,2021},
Opgave("Opgave 3", 3, 1,1,2023),
Opgave("Opgave 4", 4, 1,1,2024),
Opgave("Opgave 5", 5, 1,1,2025)
};

	//// e) Extend main() with an array huskeliste with 5 Opgave objects
	//Opgave huskeliste[5] = {
	//	Opgave("Køb mælk", 3, 2023, 12, 31),
	//	Opgave("Læs bøger", 4, 2023, 11, 15),
	//	Opgave("Træn 30 min", 2, 2023, 10, 20),
	//	Opgave("Lav opgave", 1, 2023, 9, 5),
	//	Opgave("Prioritet 5", 5, 2023, 8, 15)
	//};

	//// f) Extend main() with a loop to print tasks with priority at least 4
	//for (const Opgave& task : huskeliste) {
	//	if (task.getPrioritet() >= 4) {
	//		task.print();
	//	}
	//}
	// Opgave 4.f
for (int i = 0; i < ARRAY_SIZE; i++)
{
if (huskeliste[i].getPrioritet() >= 4)
{
huskeliste[i].print();
}
}
	return 0;
}
