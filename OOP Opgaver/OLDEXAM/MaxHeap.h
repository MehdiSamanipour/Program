#pragma once
#include <vector>
#include <cassert>
using namespace std;

class MaxHeap {

private:
	vector<int>* elements;

public:

	MaxHeap();

	// is the heap empty?
	

	// number of elements in the heap
	

	// add an element to the heap
	

	// find the maximum element in the heap
	

	// delete and return the maximum element of the heap
	
	virtual ~MaxHeap() {}
	virtual bool isEmpty() const = 0;     // is the heap empty?
	virtual int size() = 0;               // number of elements in the heap
	virtual void insert(const int x) = 0; // add an element to the heap
	virtual const int findMax() const = 0;    // find the maximum element in the heap
	virtual int deleteMax() = 0;              // delete and return the maximum element of the heap

	// friend ostream& operator<<(ostream& t, Point p);
};



MaxHeap::MaxHeap() {
	elements = new vector<int>();
}

bool MaxHeap::isEmpty()const  {
	return elements->empty();
}

int MaxHeap::size() {
	return elements->size();
}

// O(N), where N is the number of elements in elements.
//  because it's a linear search in a sorted array.
void MaxHeap::insert(const int x) {
	int size_beg = elements->size();

	vector<int>::iterator it;
	bool inserted = false;
	for (it = elements->begin(); it < elements->end(); it++) {
		if ((*it) >= x) {
			elements->insert(it, x);
			inserted = true;
			break;
		}
	}
	if (!inserted) {
		elements->push_back(x);
	}

	assert(!isEmpty());

	assert(elements->size() == size_beg + 1);
}

const int MaxHeap::findMax()const  {
	assert(!isEmpty());
	return elements->back();
}

int MaxHeap::deleteMax() {
	assert(!isEmpty());
	int last = elements->back();
	elements->pop_back();
	return last;
}

 //ostream& operator<<(ostream& t, MaxHeap h){
 //  cout << "(" ;
 //  vector<int>::iterator it;
 //  bool inserted = false;
 //  for (it = elements->begin(); it < elements->end(); it++){
 //    if ((*it) >= x){
 //      elements->insert(it, x);
 //      inserted = true;
 //      break;
 //    }
 //  }
 //}


