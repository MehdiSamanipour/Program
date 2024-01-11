
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <vector>
using namespace std;

//Write a program that generates random M integers
//and puts them in an vector.Then it generates another N random integersand
//counts how many of them are in the array using an iterator.Estimate the worst - case
//complexity of your program.


int main(int argc, char* argv[]) {
    srand(time(0));
    vector<int>::iterator ptr;

    const int M = 10;
    const int N = 10;
    const int max = 10;

    vector<int> array = vector<int>(M);

    // O(M)
    for (int i = 0; i < M; i++) {
        array.push_back(rand() % max);
    }

    int count = 0;
    for (int i = 0; i < N; i++) { //O(N)
        int r = (rand() % max);
        for (ptr = array.begin(); ptr < array.end(); ptr++) {// O(M)
            if ((*ptr) == r) {
                count++;
                break;
            }
        }
    }

    cout << count << " numbers found " << endl;

    // Total complexity: O(M) + O(N)*O(M) = O(N*M)

    return 0;
}
