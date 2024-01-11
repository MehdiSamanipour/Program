#include"CircularBuffer-int.h"






CircularBuffer2::CircularBuffer2( int s )
{
	size_ = ( s>0 ? s : 10);

	arrayPtr_ = new int[size_];  // This will not initialize integers

	// Initialize
	for( int i=0; i<size_; i++ )
		arrayPtr_[i] = 0;

	newestIndex_ = -1;
}


CircularBuffer2 &CircularBuffer2::insert( int element )
{
	(++newestIndex_) %= size_;
	arrayPtr_[newestIndex_] = element;
	return *this;
}


double CircularBuffer2::meanValue( ) const
{
	int sum = 0;

	for(int j=0; j<size_; j++ )
		sum += arrayPtr_[j];
	
	return ( (double) sum/size_ );
}


void CircularBuffer2::print() const
{	
	cout << endl;

	for(int k=size_; k>0; k-- )
		cout << arrayPtr_[ (k + newestIndex_) % size_ ] << " ";

	cout << endl;
}


CircularBuffer2::~CircularBuffer2()
{
	delete [] arrayPtr_;
}