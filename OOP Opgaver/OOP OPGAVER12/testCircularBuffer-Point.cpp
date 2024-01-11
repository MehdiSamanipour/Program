#include <iostream>
#include "CircularBuffer-Point.h"
#include"CircularBuffer-int.h"
#include "Point.h"
#include"CircularBufferTemplate.h"
#include"PriorityQueue.h"
using namespace std;


int main()
{

	PriorityQueue pQ1(6);
	int in, out;

	cout << pQ1 << endl << endl;;

	for (int i = 0; i < 6; i++)
	{
		cout << "Indtast et helt positivt tal: ";
		cin >> in;

		if (pQ1.push(in) == false)
			cout << "Koeen er fyldt eller forkert data!" << endl << endl;

		if (i % 3 == 2)
			cout << "Koeen er nu: " << pQ1 << endl << endl;
	}

	cout << pQ1 << endl << endl;

	for (int j = 0; j < 6; j++)
	{
		out = pQ1.pop();

		if (out != 0)
			cout << out << endl;
		else
		{
			cout << "Koeen er tom!" << endl << endl;
			break;
		}

		if (j % 3 == 2)
			cout << "Koeen er nu: " << pQ1 << endl << endl;
	}

	cout << "Koeen er nu: " << pQ1 << endl << endl;

	// Testing exercise 12.1-3
	Point a(2.3, 4.5), b(1.1, 2.2), c, d, e;

	double x, y;
	cout << "Indtast punktets koordinater ( f.eks.: 3.6 5.8 ): ";
	cin >> x >> y;

	c.setX(x);
	c.setY(y);

	cout << "a: ";
	a.print();
	cout << endl;

	cout << "b: ";
	b.print();
	cout << endl;

	cout << "c: ";
	c.print();
	cout << endl;

	d = a + b + c;

	cout << "d = a + b + c: ";
	d.print();
	cout << endl;

	e = a - b;

	cout << "e = a - b: ";
	e.print();
	cout << endl;

	a += b;

	cout << "a += b: ";
	a.print();
	cout << endl;

	cout << " a == a ?: " << boolalpha << (a == a) << ". a == b ?: " << (a == b) << endl << endl;
	cout << endl;

	// Exercise 12.4 og 12.5
	// Test operator/
	Point f;

	f = a / 2.5;
	f.print();
	cout << endl;

	// Test operator <<
	cout << f << endl;

	// Test operator >>
	cout << "Indtast punktets koordinater ( f.eks.: 3.6 5.8 ): ";
	Point g;

	cin >> g;

	cout << g << endl;

	// Test at CircularBuffer-Point kan bruge / og <<
	CircularBuffer<Point> buf1(5);

	buf1.print();

	// Indsæt 6! punkter - det sidste vil gå tabt
	for (int i = 0; i < 6; i++)
		buf1.insert(Point(i / 10.0, i * i / 10.0));

	buf1.print();

	cout << "\nMiddel: ";
	buf1.meanValue().print();
	cout << endl << endl;

	CircularBuffer<Point> buf2(buf1);
	buf2.print();

	CircularBuffer<Point> buf3(8);
	buf3.print();

	buf3 = buf1;

	buf3.print();

	CircularBuffer<int> tbuf(5);
	CircularBuffer<int> tbuf2(tbuf);

	//// Testing exercise 12.1-3
	//Point a(2, 4), b(1, 2), a,b,c,d,e;

	//double x, y;
	//cout << "Indtast punktets koordinater ( f.eks.: 3.6 5.8 ): ";
	//cin >> x >> y;

	//c.setX(x);
	//c.setY(y);

	//cout << "a: ";
	//a.print();
	//cout << endl;

	//cout << "b: ";
	//b.print();
	//cout << endl;

	//cout << "c: ";
	//c.print();
	//cout << endl;

	//d = a + b + c;

	//cout << "d = a + b + c: ";
	//d.print();
	//cout << endl;

	//e = a - b;

	//cout << "e = a - b: ";
	//e.print();
	//cout << endl;

	//a += b;

	//cout << "a += b: ";
	//a.print();
	//cout << endl;

	//cout << " a == a ?: " << boolalpha << (a == a) << ". a == b ?: " << (a == b) << endl << endl;
	//cout << endl;

	//// Exercise 12.4 og 12.5
	//// Test operator/
	//Point f;

	//f = a / 2.5;
	//f.print();
	//cout << endl;

	//// Test operator <<
	//cout << f << endl;

	//// Test operator >>
	//cout << "Indtast punktets koordinater ( f.eks.: 3.6 5.8 ): ";
	//Point g;

	//cin >> g;

	//cout << g << endl;

	// //Test at CircularBuffer-Point kan bruge / og <<
	//CircularBuffer2 buf1(5);

	//buf1.print();

	//// Indsæt 6! punkter - det sidste vil gå tabt
	//for (int i = 0; i < 6; i++)
	//	buf1.insert(Point(i / 10.0, i * i / 10.0));

	//buf1.print();

	//cout << "\nMiddel: ";
	//buf1.meanValue().print();
	//cout << endl << endl;

	//CircularBuffer2 buf2(8);
	//buf2.print();

	//CircularBuffer2 buf3(8);
	//buf3.print();

	//buf3 = buf1;

	//buf3.print();

	//CircularBuffer2 buf(5);

	//// CIRCULAR BUFFER INT
	//CircularBuffer3 buffer1(5);

	//buffer1.print();

	//for (int i = 0; i < 3; i++)
	//	buffer1.insert(i);

	//buffer1.print();

	//cout << "\nMiddel: " << buffer1.meanValue() << endl;

	//buffer1.insert(20).print();

	////CIRCULARBUFFER POINT
	//CircularBuffer3 buffer1(5);

	//buffer1.print();

	//for(int i=0; i<3; i++ )
	//	buffer1.insert( Point(i,i) );

	//buffer1.print();

	//cout << "\nMiddel: ";
	//buffer1.meanValue().print();
	//cout << endl;

	//buffer1.insert( Point(20,20) ).print();

	return 0;
}