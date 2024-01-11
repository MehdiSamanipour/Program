#include "IntArray.h"
#include "CircularBuffer.h"
#include "Point.h"


int main()
{
	IntArray testObj(5);

	testObj.print();

	testObj.indsaetTal(34, 3);
	testObj.print();

	testObj.setArraySize(15);
	testObj.print();

	testObj.setArraySize(-5);
	testObj.print();

	testObj.setArraySize(10);
	testObj.print();

	CircularBuffer buffer1(5);

	buffer1.print();

	for (int i = 0; i < 3; i++)
		buffer1.insert(i);

	buffer1.print();

	cout << "\nMiddel: " << buffer1.meanValue() << endl;

	buffer1.insert(20).print();

	//test anden metode
	CircularBuffer2 buffer4(5);

	buffer4.print();

	for (int i = 0; i < 3; i++)
		buffer4.insert( Point(i, i));

	buffer4.print();

	cout << "\nMiddel: ";
	buffer4.meanValue().print();
	cout << endl;

	buffer4.insert (Point(20 ,20));


	return 0;
}