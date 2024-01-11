#include <iostream>
#include "Person.h"
#include"Lifoqueue.h"
#include "TestClass.h"
#include "CircularBuffer-int.h"
#include "Point.h"

using namespace std;


template < class varType >
bool isEqualTo( const varType& var1, const varType& var2)
{
	return (var1 == var2);
}


template < class varType >
void print( const varType &var1, const varType& var2)
{
	cout << var1 << " og " << var2 << " er";
	cout << (isEqualTo(var1, var2) ? " " : " ikke ");
	cout << "ens." << endl << endl;
}


int main()
{
	int i1 = 2, i2 = 3, i3 = 3;
	double d1 = 1.1, d2 = 3.3, d3 = 3.3;
	char c1 = 'a', c2 = 'c', c3 = 'c';

	print(i1, i2);
	print(i2, i3);
	print(d1, d2);
	print(d2, d3);
	print(c1, c2);
	print(c2, c3);


	
		Person p1("Ib Brun", 27), p2("Ida Hald", 34), p3("Ida Hald", 34);
		Person p4("Ib Brun", 17), p5("Ida Hald", 27);

		// This won't work with the current definition of Person
		// cout << p1 won't work with a Person object
		// p1 == p2 won't work with two Person objects
		// The compiler doesn't know what to do when the template functions are expanden
		/*print(p1, p2);
	    print(p1, p4);
		print(p1, p5);
		print(p2, p3);*/
		Lifoqueue<int> queue1;
			int number;
		
			for( int j=0; j<6; j++ )
			{
				if( queue1.insert( j ) )
					cout << "Tallet " << j << " indsat i k\x9B." << endl;
				else
					cout << "K\x9B" << "en er fuld. Tallet " << j << " ikke indsat." << endl;
			}
		
			for( int k=0; k<6 && !queue1.isEmpty(); k++ )
			{
				if( queue1.remove( number ) )
					cout << "Tallet " << number << " udtaget af k\x9B." << endl;
			}
			cout << "K\x9B" << "en er tom." << endl;
		
		// test char kø
			Lifoqueue<char> queue2;
			char character;
		
			for( int j=0; j<6; j++ )
			{
				character = 97 + j;
		
				if( queue2.insert( character ) )
					cout << "Tegnet " << character << " indsat i k\x9B." << endl;
				else
					cout << "K\x9B" << "en er fuld. Tegnet " << character << " ikke indsat." << endl;
			}
		
			for( int k=0; k<6 && !queue2.isEmpty(); k++ )
			{
				if( queue2.remove( character ) )
					cout << "Tegnet " << character << " udtaget af k\x9B." << endl;
			}
			cout << "K\x9B" << "en er tom." << endl;
		
		// test Person kø
			Lifoqueue<Person> queue3;
			Person p[6] = { Person("Bo Hald", 20), Person("Ib Hald", 24), Person("Pia Hald", 18),
							Person("Bo Hel", 40), Person("Ib Hel", 48), Person("Pia Hel", 36) };
		
			for( int j=0; j<6; j++ )
			{
				if( queue3.insert( p[j] ) )
				{
					cout << "Personen ";
					p[j].print();
					cout << " indsat i k\x9B." << endl;
				}
				else
				{
					cout << "K\x9B" << "en er fuld. Personen ";
					p[j].print();
					cout << " ikke indsat." << endl;
				}
			}
		
			for( int k=0; k<6 && !queue3.isEmpty(); k++ )
			{
				if( queue3.remove( p[k] ) )
				{
					cout << "Personen ";
					p[k].print();
					cout << " udtaget af k\x9B." << endl;
				}
			}
			cout << "K\x9B" << "en er tom." << endl;
			TestClass myTest("Hugo");

			myTest.print();

			myTest.setName("Charlotte");

			myTest.print();

			CircularBuffer buffer(5);

			buffer.print();

			for (int i = 0; i < 3; i++)
				/*buffer.insert(Point(i, i));*/

			buffer.print();

			cout << "\nMiddel: " << buffer.meanValue() << endl;
			cout << endl;

			/*buffer.insert(Point(20, 20));*/
		

			for (int i = 0; i < 3; i++)
				buffer.insert(i);

			

			

			buffer.insert(20).print();
		

	return 0;
}