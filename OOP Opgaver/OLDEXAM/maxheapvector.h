#pragma once
#pragma once
#include <vector>
#include "maxheap.h"
using namespace std;

class MaxHeapVector : public MaxHeap
{
private:
    vector<int> v;
    vector<int>::const_iterator  maxElement() const {
        vector<int>::const_iterator m = v.begin();
        for (vector<int>::const_iterator i = v.begin(); i != v.end(); i++)
            if (*i > *m) m = i;
        return m;
        /*O(N), where N=v.size()*/
    }
public:
    MaxHeapVector() {}
    virtual ~MaxHeapVector() {}
    // is the heap empty?
    virtual bool isEmpty() const { return v.empty(); /*O(the complexity of v.empty()) = O(1)*/ }
    // number of elements in the heap     
    virtual int size() { return v.size(); /*O(the complexety of v.size()) = O(1)*/ }
    // add an element to the heap
    virtual void insert(const int x) { v.push_back(x);/*O(the complexity of v.push_back()) = O(1)*/ };
    // find the maximum element in the heap 
    virtual const int findMax() const { /*O(the complexity of maxElement()) = O(N)*/
        return *maxElement();
    }
    // delete and return the maximum element of the heap  
    virtual int deleteMax() { /*O(max(complexity of findMax, complexity of maxElement, complexety of erase)) = O(max(N, N, 1)) = O(N)*/
        int max = findMax();
        v.erase(maxElement());
        return max;
    }
};


