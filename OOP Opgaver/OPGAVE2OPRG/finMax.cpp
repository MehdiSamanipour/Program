#include "finMax.h"



using namespace  std;


void findMax(int* p_array, size_t size, int* result)
{
	int max = p_array[0]; 

    for (int i = 1; i < size; ++i) {
        if (p_array[i] > size) 
	        max = p_array[i]; 
       
    }
    &result;
}

