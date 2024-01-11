#include<iostream>
#include <vector>
#include <algorithm>


//template<typename iterator , typename object>
//
//iterator linerSearch(iterator first ,iterator last , const object& value)
//{
//
//	iterator begin = first;
//	iterator end = last;
//	while (begin != end)
//	{
//		if (*begin == value)
//		{
//			return begin;
//
//		}
//		else
//
//		{
//			begin =std::next(begin);
//		}
//	}
//	return end;
//}
//
//#define N 100
//#define M 1000
//
//
//int main(void)
//{
//	int i, j;
//	std::vector<int>v;
//	std::vector<int>::iterator itr;
//	srand(time(0));
//	for (i=0; i<N;i++)
//	{
//		v.push_back(rand() % M);
//
//	}
//
//	for (itr = v.begin(); itr != v.end(); itr++)
//	{
//		std::cout << *itr << " ";
//	}
//	std::cout << std::endl;
//	j = rand() % M;
//
//	itr = linerSearch(v.begin(), v.end(), j);
//	if (itr != v.end())
//	{
//		std::cout << "Found element: " << *itr << std::endl;
//	}
//	else
//
//	{
//		std::cout << "Element not found: " << j << std::endl;
//	}
//	return 0;
//}


// C++ program to generate the vector
// with random values

using namespace std;


// Driver Code
int main()
{
    // Size of vector
    
    int size = 20;
    // Initialize the vector with
    // initial values as 0
    vector<int> V(size,0);

    // use srand() for different outputs
    srand(time(0));

    // Generate value using generate
    // function
    generate(V.begin(), V.end(), rand);

    cout << "The elements of vector are:\n";

    // Print the values in the vector
    for (int i = 0; i < size; i++) {
        cout << V[i] << " ";
    }

    return 0;
}