

#include <iostream>

using namespace std;

#include "CircularBuffer-int.h"


CircularBuffer::CircularBuffer( int s )
{
	size_ = ( s>0 ? s : 10);

	try
	{
		arrayPtr_ = new int[size_];  // This will not initialize integers
	}
	catch (const std::bad_alloc &)
	{
		cout << "\nNo memory allocated - program terminated\n\n";
		exit(1);
	}

	// Initialize
	for( int i=0; i<size_; i++ )
		arrayPtr_[i] = 0;

	newestIndex_ = -1;
}


CircularBuffer &CircularBuffer::insert( int element )
{
	(++newestIndex_) %= size_;
	arrayPtr_[newestIndex_] = element;
	return *this;
}


double CircularBuffer::meanValue( ) const
{
	int sum = 0;

	for(int j=0; j<size_; j++ )
		sum += arrayPtr_[j];
	
	return ( (double) sum/size_ );
}


void CircularBuffer::print() const
{	
	cout << endl;

	for(int k=size_; k>0; k-- )
		cout << arrayPtr_[ (k + newestIndex_) % size_ ] << " ";

	cout << endl;
}


CircularBuffer::~CircularBuffer()
{
	delete [] arrayPtr_;
}