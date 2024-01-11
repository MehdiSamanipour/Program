#include <iostream>
using namespace std;


bool search(int *A , int size, int x)
{
      if (size == 0)
        return false;

	 else if (*A == x)
        return true;

	 else
		search(A+1, size -1, x);
}

int maximum(int* A, int size, int max = -10000)
{
    if (size == 0)
        return max;

    else if (*A > max)
        max =* A;

        maximum(A + 1, size - 1, max);
}
int minimum(int* A, int size, int min = +10000)
{
    if (size == 0)
        return min;

    else if (*A < min)
        min = *A;

    minimum(A + 1, size - 1, min);
}

int main() {
    

    

    int A[10], size , max, min;
    cout << "Enter the size of the array : "<<endl;
    cin >> size;
    cout << "Enter the elements of the array : " << endl;
    for (size_t i = 0; i < size; i++)
        cin >> A[i];
    max = A[0];
    for (size_t i = 0; i < size; i++)
    {
        if (max < A[i])
            max = A[i];
    }
    min = A[0];
    for (size_t i = 0; i < size; i++)
    {
        if (min > A[i])
            min = A[i];
    }
    cout << "Largest element : " << max<<std::endl;
    cout << "Smallest element : " << min<<endl;

    cout << "is number in array:  " << search(A, size, 9) << endl;
    cout << "max is :  " << maximum(A, size) << endl;
    cout << "min is :  " << minimum(A, size) << endl;

  
 

    //int input[100], count, i, num;

    //cout << "Enter Number of Elements in Array\n";
    //cin >> count;

    //cout << "Enter " << count << " numbers \n";

    //// Read array elements
    //for (i = 0; i < count; i++) {
    //    cin >> input[i];
    //}

    //cout << "Enter a number to serach in Array\n";
    //cin >> num;

   

    //// search num in inputArray from index 0 to elementCount-1 
    //for (i = 0; i < count; i++) {
    //    if (input[i] == num) {
    //        cout << "Element found at index " << i;
    //        break;
    //    }
    //}

    //if (i == count) {
    //    cout << "Element Not Present in Input Array\n";
    //}

    return 0;
}
