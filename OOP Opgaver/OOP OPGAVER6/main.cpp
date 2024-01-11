#include <iostream>
#include <conio.h>
#include <string>
#include "Sladrehank.h"
#include"IntArray.h"
#include"IntArrayExceptions.h"


using namespace std;


void func1CallByValue(Sladrehank arg1)
{
	std::cout<< "  func1CallByValue modtog Sladrehank instans <" << arg1.getId() << ">" << endl;
}


void func2CallByReference(Sladrehank &arg1)
{
	std::cout << "  func2CallByReference modtog Sladrehank instans <" << arg1.getId() << ">" << endl;
}


Sladrehank func3ReturnByValue()
{
	Sladrehank s("Retur-instans");
	std::cout << "  func3ReturnByDirectValue returnerer Sladrehank instans <" << s.getId() << ">" << endl;
	return s;
}


int main()
{
	IntArray testObj(5);

	testObj.print();
	try
	{
		IntArray testObj(5);

		testObj.print();

		try
		{
			// Each of these could be given its own try/catch block
			testObj.insertNumber(34, 2);
			testObj.insertNumber(11, 4);
			testObj.insertNumber(120, 7);
		}
		catch (IndexRangeException e)
		{
			e.reportError();
			// We don't exit as this could be OK
		}

		testObj.print();


		try
		{
			testObj.setArraySize(15);
		}
		catch (MemoryAllocationException e)
		{
			e.reportError();
			// We don't exit, as this is could be OK
		}

		testObj.print();

		try
		{
			testObj.setArraySize(-5);
		}
		catch (MemoryAllocationException e)
		{
			e.reportError();
			// We don't exit, as this is could be OK
		}

		testObj.print();

		try
		{
			testObj.setArraySize(15);
		}
		catch (MemoryAllocationException e)
		{
			e.reportError();
			// We don't exit, as this is could be OK
		}

		testObj.print();

		try
		{
			testObj.setArraySize(4);
		}
		catch (MemoryAllocationException e)
		{
			e.reportError();
			// We don't exit, as this is could be OK
		}

		testObj.print();

		try
		{
			testObj.setArraySize(400000000);
		}
		catch (MemoryAllocationException e)
		{
			e.reportError();
			// We don't exit, as this is could be OK
		}

		cout << "Size of array is now: " << testObj.getArraySize() << endl;
	}
	catch (MemoryAllocationException e)
	{
		e.reportError();
		// We exit, because we don't get any space for our array called testObj.
		exit(1);
	}


	try
	{
		IntArray bigObj(400000000);
		cout << "Size of array is: " << bigObj.getArraySize() << endl;
	}
	catch (MemoryAllocationException e)
	{
		e.reportError();
		cout << "We were not allowed to allocate 400,000,000 integers, but that's OK :-)" << endl;
	}

	cout << endl;


	testObj.insertNumber(34, 2);
	testObj.insertNumber(11, 4);
	testObj.insertNumber(120, 7);
	testObj.print();

	testObj.setArraySize(15);
	testObj.print();

	testObj.setArraySize(-5);
	testObj.print();

	testObj.setArraySize(15);
	testObj.print();

	testObj.setArraySize(4);
	testObj.print();

	testObj.setArraySize(400000000);
	std::cout << "Size of array is now: " << testObj.getArraySize() << endl;

	IntArray bigObj(400000000);
	std::cout << "Size of array is: " << bigObj.getArraySize() << endl;

	std::cout << endl;

	

		std::cout << "\nEksperiment 1 \"Create/delete order\"\n\n";
		Sladrehank s1("Nummer 1");
		Sladrehank s2("Nummer 2");
		Sladrehank s3("Nummer 3");
	




	/*{
		cout << "\nEksperiment 2 \"Call by value\"\n\n";
		Sladrehank s("Parameter instans");
		func1CallByValue(s);
	}



	{
		cout << "Ekspreriment med try catch" << endl;

		Sladrehank s1("Uden for try");

		try
		{
			Sladrehank s2("Inden i try");

			throw std::runtime_error("Kastet exception");

			cout << "Efter throw " << endl;
			Sladrehank s3("Efter trhow");
		}
		catch (const std::runtime_error e)
		{
			Sladrehank s4("Inden i catch");
			cout << e.what() << endl;
		}
	}

	{
		cout << "\nEksperiment 4 \"Object assignment\"\n\n";
		Sladrehank s1, s2;
		s2 = s1;
	}

	
	{
		cout << "\nEksperiment 5 \"Return by value, no local copy\"\n\n";
		func3ReturnByValue();
	}

	
	{
		cout << "\nEksperiment 6 \"Return by value, with local copy\"\n\n";
		Sladrehank s = func3ReturnByValue();
	}

	{
		cout << "\nEksperiment 7 \"Return by value, with local copy to existing object\"\n\n";
		Sladrehank s("Instans s");
		s = func3ReturnByValue();
	}


	{
		cout << "\nEksperiment 8 \"Array of objects\"\n\n";
		Sladrehank array[10];
	}


	{
		cout << "\nEksperiment 9 \" Construction versus assignment\"\n\n";
		Sladrehank x, y;
		Sladrehank z = x;
		Sladrehank w(x);
		z = y;
	}


	{
		cout << "\nEksperiment 10 \" Normal assignment versus self assignment\"\n\n";
		Sladrehank x, y;
		x = x;
		x = y;
	}


	cout << "  Ialt "<< Sladrehank::getNaesteId()-1 << " instanser\n\n";*/
	return 0;
}


 //eksperimenter med STL vector

//{
//cout << "\nEksperiment 11 \"Vector of objects\"\n\n";
//vector<Sladrehank> vec;
//}
//
//
//{
//cout << "\nEksperiment 12 \"Insert 1 object into vector\"\n\n";
//Sladrehank s1("Instans s1");
//vector<Sladrehank> vec;
//
//vec.push_back(s1);
//}
//
//
//{
//cout << "\nEksperiment 13 \"Insert 2 objects into vector\"\n\n";
//Sladrehank s1("Instans s1");
//Sladrehank s2("Instans s2");
//vector<Sladrehank> vec;
//
//vec.push_back(s1);
//vec.push_back(s2);
//}
//
//
//{
//cout << "\nEksperiment 14 \"Insert 3 objects into vector\"\n\n";
//Sladrehank s1("Instans s1");
//Sladrehank s2("Instans s2");
//Sladrehank s3("Instans s3");
//vector<Sladrehank> vec;
//
//vec.push_back(s1);
//vec.push_back(s2);
//vec.push_back(s3);
//}
//
//
//{
//cout << "\nEksperiment 15 \" Declare Vector of 10 objects implicit initialization (default objects)\"\n\n";
//vector<Sladrehank> vec(10);
//}
//
//
//{
//cout << "\nEksperiment 16 \" Declare Vector of 10 objects explicit initialization (explicit objects)\"\n\n";
//vector<Sladrehank> vec(10, Sladrehank("Skabelon"));
//}
//
//
//{
//cout << "\nEksperiment 17 \" Vector of objects with resize, implicit initialization (default objects)\"\n\n";
//vector<Sladrehank> vec;
//vec.resize(10);
//}
//
//
//{
//cout << "\nEksperiment 18 \" Vector of objects with resize, explicit initialization (explicit objects)\"\n\n";
//vector<Sladrehank> vec;
//vec.resize(10,Sladrehank("Skabelon"));
//}
//
