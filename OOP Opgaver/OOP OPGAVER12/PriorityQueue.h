#pragma once

#include <iostream>

using namespace std;


class PriorityQueue
{
	// operator<< kunne være friend
	// Men da getData() giver adgang til data, er der ikke det store behov
	// friend ostream &operator<<( ostream &, const PriorityQueue & );
public:
	PriorityQueue( int = 10 );
	~PriorityQueue();
	bool push( int );
	int pop();
	int getSize() const;
	int getFreeSpace() const;
	const int *getData() const;
	// Exercise 12.9
	PriorityQueue(const PriorityQueue& copyMe);
	const PriorityQueue & operator=(const PriorityQueue& copyMe);

private:
	int size_;
	int freeSpace_;
	int *data_;
};


ostream &operator<<( ostream &, const PriorityQueue & );