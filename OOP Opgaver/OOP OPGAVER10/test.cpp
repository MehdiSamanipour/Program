
#include <iostream>
#include <vector>

#include "Person.h"
#include "Employee.h"
#include "Boss.h"

using namespace std;

void calcTotalSalary(const Person&);


int main()
{
	Employee e1, e2(1567, 45, 34);
	Boss b1, b2(1345, 54, 15000);
	
	

	e1.setId(1102);
	e1.setAge(15);
	e1.setStep(12);
	e1.print();

	b1.setId(1200);
	b1.setAge(25);
	b1.setBonus(5000);
	b1.print();

	// Vi kan bare bruge de objekter, vi havde før
	vector<Person*> ptrVector;
	ptrVector.push_back(&e1);
	ptrVector.push_back(&b1);
	ptrVector.push_back(&e2);
	ptrVector.push_back(&b2);

	for (vector<Person*>::iterator it = ptrVector.begin(); it != ptrVector.end(); it++)
	{
		(*it)->print();
	}

	const int SIZE = 4;
	// Vi kan oprette nye objekter med new - men så skal vi huske at slette dem til sidst
	// Dette kan gøres både med et array og en container som vector eller list
	Person* ptrArray[SIZE] = { new Employee(1010), new Boss(1011),
							 new Employee(1567, 45, 34), new Boss(1345, 54, 15000) };

	for (int i = 0; i < SIZE; i++)
		ptrArray[i]->print();


	// Prøv calcTotalSalary på dem i vector
	for (auto it = ptrVector.begin(); it != ptrVector.end(); it++)
	{
		calcTotalSalary(**it);
	}

	// Prøv calcTotalSalary på dem i array
	for (int i = 0; i < SIZE; i++)
		calcTotalSalary(*ptrArray[i]);

	// Da vi har brugt new, skal vi også huske delete
	// Men først til allersidst, og kun for dem, vi har lavet med new
	for (int i = 0; i < SIZE; i++)
		delete ptrArray[i];  // Fordi vi har allokeret objekterne et af gangen, skal vi IKKE bruge delete []

	return 0;
}


void calcTotalSalary(const Person& pRef)
{
	// Polymorfi vil sikre, at den korrekte månedsløn bliver udregnet
	int totalSalary = 12 * pRef.calcSalary();

	cout << "\nID: " << pRef.getId() << endl;
	cout << "Total salary: " << totalSalary << endl;
}