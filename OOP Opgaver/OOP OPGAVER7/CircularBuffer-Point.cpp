//#include <iostream>
//
//using namespace std;
//
//#include "CircularBuffer-Point.h"
//
//
//CircularBuffer::CircularBuffer( int s )
//{
//	size_ = ( s>0 ? s : 10);
//
//	try
//	{
//		arrayPtr_ = new Point[size_]; // This will call the default constructor for Point, which must exist
//	}
//	catch (const std::bad_alloc &)
//	{
//		cout << "\nNo memory allocated - program terminated\n\n";
//		exit(1);
//	}
//
//	// No initialization necessary
//
//	newestIndex_ = -1;
//}
//
//
//CircularBuffer &CircularBuffer::insert( Point &pointRef )
//{
//	(++newestIndex_) %= size_;
//	arrayPtr_[newestIndex_] = pointRef;
//	return *this;
//}
//
//
//Point CircularBuffer::meanValue( ) const
//{
//	double sumX = 0, sumY = 0;
//
//	for(int j=0; j<size_; j++ )
//	{
//		sumX += arrayPtr_[j].getX();
//		sumY += arrayPtr_[j].getY();
//	}
//
//	return Point( sumX/size_, sumY/size_ );
//}
//
//
//void CircularBuffer::print() const
//{	
//	cout << endl;
//
//	for(int k=size_; k>0; k-- )
//	{
//		arrayPtr_[ (k + newestIndex_) % size_ ].print();
//		cout << " ";
//	}
//
//	cout << endl;
//}
//
//
//CircularBuffer::~CircularBuffer()
//{
//	delete [] arrayPtr_;
//}