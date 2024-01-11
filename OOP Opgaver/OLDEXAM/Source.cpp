#include <iostream>
#include <stdlib.h>
#include "MaxHeap.h"
#include "maxheapvector.h"

#include <cassert>

using namespace std;

int main(int argc, char* argv[]) {

	//MaxHeap heap = MaxHeap();

	//assert(heap.isEmpty());

	//heap.insert(0);
	//heap.insert(2);
	//heap.insert(4);
	//heap.insert(5);
	//heap.insert(1);
	//heap.insert(3);
	//heap.insert(6);

	/*assert(heap.findMax() == 6);
	assert(!heap.isEmpty());
	assert(heap.deleteMax() == 6);
	assert(heap.deleteMax() == 5);
	assert(heap.deleteMax() == 4);
	assert(heap.deleteMax() == 3);
	assert(heap.deleteMax() == 2);
	assert(heap.deleteMax() == 1);
	assert(heap.deleteMax() == 0);
	assert(heap.isEmpty());*/


	/*
	Test af MaxHeap. Jens Bennedsen
	*/

	MaxHeap* m = new MaxHeapVector();
	m->insert(2);
	m->insert(3);
	m->insert(-1);
	std::cout << m->findMax() << " size: " << m->size() << std::endl; // 3 size: 3
	m->deleteMax();
	std::cout << m->findMax() << " isEmpty: " << m->isEmpty() << std::endl; // 2 size: false
	std::cout << "Max: " << m->findMax() << " size: " << m->size() << std::endl; // 3 size: 3
	m->deleteMax();
	std::cout << "Max: " << m->findMax() << " isEmpty: " << m->isEmpty() << std::endl; // 2 size: false
	return 0;
}
