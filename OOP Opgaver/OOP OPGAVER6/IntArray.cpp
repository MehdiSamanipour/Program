#include "IntArray.h"
#include "IntArrayExceptions.h"

IntArray::IntArray( int size )
{
	arraySize_ = (size>0 ? size : 10);
	try
	{
		arrayPtr_ = new int[arraySize_];
		// throw std::bad_alloc();  // Uncomment this line to test the code
	}
	catch (std::bad_alloc e)
	{
		throw MemoryAllocationException(size);
	}

	for (int i = 0; i < arraySize_; i++)
		arrayPtr_[i] = 0;

	/*arrayPtr_ = new int[arraySize_];

	for( int i=0; i<arraySize_; i++ )
		arrayPtr_[i] = 0;*/
}


void IntArray::setArraySize( int size )
{
	if( size <= 0)
	{
		cout << "\nChanging arraysize: Cannot change size to " << size << ". Size must be positive. No changes made.\n";
		return;
	}
	
	if(size == arraySize_)
	{
		cout << "\nChanging arraysize: Array already have size " << size << ". No changes made.\n";
		return;
	}

	if( size > arraySize_ )
	{
		cout << "\nChanging arraysize. Increase size to " << size << ".\n";

		int *tempPtr = arrayPtr_;

		/*arrayPtr_ = new int[size];*/

		try
		{
			arrayPtr_ = new int[size];
			// throw std::bad_alloc();  // Uncomment this line to test the code
		}
		catch (std::bad_alloc e)
		{
			// Clean up after failure, no changes made
			arrayPtr_ = tempPtr;
			throw MemoryAllocationException(size);
		}

		for( int i=0; i<arraySize_; i++ )
			arrayPtr_[i] = tempPtr[i];

		for( int i=arraySize_; i<size; i++ )
			arrayPtr_[i] = 0;

		arraySize_ = size;

		delete [] tempPtr;
	}

	if( size < arraySize_ )
	{
		cout << "\nChanging arraysize. Decrease size to " << size << ". Some data will be lost.\n";

		int *tempPtr = arrayPtr_;
		try
		{
			arrayPtr_ = new int[size];
			// throw std::bad_alloc();  // Uncomment this line to test the code
		}
		catch (std::bad_alloc e)
		{
			// Clean up after failure, no changes made
			arrayPtr_ = tempPtr;
			throw MemoryAllocationException(size);
		}


		/*arrayPtr_ = new int[size];*/

		for( int i=0; i<size; i++ )
			arrayPtr_[i] = tempPtr[i];
	
		arraySize_ = size;

		delete [] tempPtr;
	}
}


int IntArray::getArraySize() const
{
	return arraySize_;
}


void IntArray::insertNumber( int number, int index )
{
	if( index >= 0 && index < arraySize_ )
	{
		arrayPtr_[ index ] = number;
	}
	else
		throw IndexRangeException(index);
		/*cout << "\nInvalid index: " << index << " No changes made.\n";*/
}


 void IntArray::print() const
{
	cout << endl;

	for( int i=0; i<arraySize_; i++ )
		cout << arrayPtr_[i] << " ";

	cout << endl;
}


IntArray::~IntArray()
{
	delete [] arrayPtr_;
}