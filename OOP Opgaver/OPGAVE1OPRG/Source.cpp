#include <algorithm>
#include <iostream>
#include <vector>

using namespace std ; // ikke anbefale kun for spar tid

#define arraySize 20


int main()
{
	srand(time(nullptr));

	char  c =rand()%7+2;    //random between 0 to 6 and 2 is shift number so 6+2=8
  char randomAlphabet = 'i' + rand() % ('q' - 'i' + 1);

    std::cout << "Random alphabet between 'i' and 'q': " << randomAlphabet << std::endl;

	   char randomAlphabet1 = 'q' - rand() % ('q' - 'i' + 1);

    std::cout << "Random alphabet between 'q' and 'i': " << randomAlphabet1 << std::endl;



	    const int numberOfCharacters = 4;
    for (int i = 0; i < numberOfCharacters; ++i) {
        char randomAlphabet2 = 'i' + rand() % ('q' - 'i' + 1);
        std::cout << "Random alphabet between 'i' and 'q': " << randomAlphabet2 << std::endl;
    }






    char randomAlphabet3[arraySize];

    // Generate and print a random alphabet between 'i' and 'q'
    randomAlphabet3[0] = 'i' + rand() % ('q' - 'i' + 1);
    std::cout << "Random alphabet between 'i' and 'q': " << randomAlphabet3[0] << std::endl;

    // Generate and print a random alphabet between 'q' and 'i'
    randomAlphabet3[1] = 'q' - rand() % ('q' - 'i' + 1);
    std::cout << "Random alphabet between 'q' and 'i': " << randomAlphabet3[1] << std::endl;

    // Generate and print 4 random alphabets between 'i' and 'q'
    const int numberOfCharacters1 = 4;
    for (int i = 0; i < numberOfCharacters1; ++i) {
        randomAlphabet3[i + 2] = 'i' + rand() % ('q' - 'i' + 1);
        std::cout << "Random alphabet between 'i' and 'q': " << randomAlphabet3[i + 2] << std::endl;
    }


        int lowerBound, upperBound;

    // Get user input for lower and upper bounds
    std::cout << "Enter the lower bound: ";
    std::cin >> lowerBound;

    std::cout << "Enter the upper bound: ";
    std::cin >> upperBound;

    vector<int> randomNumbers;
    randomNumbers.reserve(arraySize); // Reserve space for arraySize elements

    // Generate and store random numbers in the vector
    for (int i = 0; i < arraySize; ++i) {
        randomNumbers.push_back(lowerBound + rand() % (upperBound - lowerBound + 1));
    }

    // Sort the vector
    std::sort(randomNumbers.begin(), randomNumbers.end());

    // Print the sorted numbers
    std::cout << "Sorted numbers: ";
    for (int num : randomNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Calculate and print the sum of sorted numbers
    int sum = 0;
    for (int num : randomNumbers) {
        sum += num;
    }

    std::cout << "Sum of sorted numbers: " << sum << std::endl;



}