//#include <iostream>
//#include <string>
//#include <vector>  // Include the vector header
//#include <cmath>   // Include the cmath header for sqrt and pow
//#include <cstdlib> // Include the cstdlib header for srand and rand
//#include <ctime>   // Include the ctime header for time
//#include <cctype>  // Include the cctype header for isupper and islower
//
//using namespace std;
//
//string promptWithQuestion(string question) {
//    string answer;
//    cout << question << "?" << endl;
//    getline(cin, answer);
//    return answer;
//}
//
//double length(double a, double b) {
//    return sqrt(pow(a, 2) + pow(b, 2));
//}
//
//int main() {
//    srand(time(NULL));
//
//    int Heart = rand() % 13 + 1;
//
//    enum Suit {
//        Spades = 8,
//        Hearts = 10,
//        Diamonds,
//        Clubs
//    };
//
//    Suit sp = Spades;
//
//    cout << "Value of spades: " << sp << endl;
//    cout << "Value of Spades: " << Spades << endl;
//    cout << "Value of Hearts: " << Hearts << endl;
//
//    string t = "hello woorrld";
//    string userText;
//
//    // Get user input
//    cout << "Enter a text: ";
//    getline(cin, userText);
//
//    // Count consecutive double letters
//    int doubleLetterCount = 0;
//    for (size_t i = 0; i < userText.length() - 1; ++i) {
//        if (userText[i] == userText[i + 1]) {
//            doubleLetterCount++;
//        }
//    }
//
//    // Display results
//    cout << "Number of consecutive double letters: " << doubleLetterCount << endl;
//    cout << "Length of the entered text: " << userText.length() << endl;
//    cout << "Size of the entered text: " << userText.size() << endl;
//    cout << "Character at index 4: " << userText.at(4) << endl;
//    cout << "Value at index 3: " << userText[3] << endl;
//    cout << "Comparison with 'axe': " << userText.compare("axe") << endl;
//    cout << "Find first character not in 'lw': " << userText.find_first_not_of("lw") << endl;
//    cout << "Find first character in 'wl': " << userText.find_first_of("wl") << endl;
//    cout << "Find last character not in 'lo': " << userText.find_last_not_of("lo") << endl;
//    cout << "Find last character in 'lo': " << userText.find_last_of("lo") << endl;
//
//    char alphabet = t[0];
//    if (isupper(alphabet)) {
//        cout << "The first letter is uppercase" << endl;
//    } else {
//        cout << "The first letter is not uppercase" << endl;
//    }
//
//    char firstChar = t[0];
//
//    string lowercaseChars;
//    for (size_t i = 0; i < userText.length(); ++i) {
//        if (islower(userText[i])) {
//            lowercaseChars.push_back(userText[i]);
//        }
//    }
//    cout << "Length of userText: " << userText.length() << ", lowercase chars: " << lowercaseChars << endl;
//
//    cout << "Original text: " << t << endl;
//    cout << "First character: " << firstChar << endl;
//
//    double x = 3, y = 4;
//    cout << "Length: " << length(x, y) << endl;
//
//    vector<string> answers;
//
//    answers.push_back(promptWithQuestion("How old are you"));
//    answers.push_back(promptWithQuestion("How do you feel today"));
//    answers.push_back(promptWithQuestion("What's your name"));
//    answers.push_back(promptWithQuestion("What's your telephone number"));
//
//    // Display all answers
//    cout << "\nAll Answers:" << endl;
//    for (const string &answer : answers) {
//        cout << answer << endl;
//    }
//
//    return 0;
//}
//
//
////int main()
////{
////    vector<string> answers;
////    string answer;
////
////    cout << "How old are you?" << endl;
////    getline(cin, answer);
////    answers.push_back(answer);
////
////    cout << "How do you feel today?" << endl;
////    getline(cin, answer);
////    answers.push_back(answer);
////
////    cout << "What's your name?" << endl;
////    getline(cin, answer);
////    answers.push_back(answer);
////
////    cout << "What's your telephone number?" << endl;
////    getline(cin, answer);
////    answers.push_back(answer);
////
////    // Display all answers
////    cout << "\nAll Answers:" << endl;
////    for (int i = 0; i < answers.size(); ++i) {
////        cout << answers[i] << endl;
////    }
////
////    return 0;
////}


#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

#define arraySize 10

// Function declarations
void printVector(const std::vector<int>& vec);
void testSortFunctions();

// Bubble Sort
void bubbleSort(std::vector<int>& arr);

// Selection Sort
void selectionSort(std::vector<int>& arr);

// Insertion Sort
void insertionSort(std::vector<int>& arr);

// Quick Sort
int partition(std::vector<int>& arr, int low, int high);
void quickSort(std::vector<int>& arr, int low, int high);

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    // Test the sorting functions
    testSortFunctions();

    return 0;
}

// Function to print the elements of a vector
void printVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Function to test all sorting functions
void testSortFunctions() {
    // Create a vector of random integers
    std::vector<int> randomNumbers;
    randomNumbers.reserve(arraySize);  // Reserve space for arraySize elements

    for (int i = 0; i < arraySize; ++i) {
        randomNumbers.push_back(rand() % 100);  // Random integers between 0 and 99
    }

    // Print the unsorted vector
    std::cout << "Unsorted vector: ";
    printVector(randomNumbers);

    // Test Bubble Sort
    std::vector<int> bubbleSorted = randomNumbers;  // Copy the vector
    bubbleSort(bubbleSorted);
    std::cout << "Bubble Sort: ";
    printVector(bubbleSorted);

    // Test Selection Sort
    std::vector<int> selectionSorted = randomNumbers;  // Copy the vector
    selectionSort(selectionSorted);
    std::cout << "Selection Sort: ";
    printVector(selectionSorted);

    // Test Insertion Sort
    std::vector<int> insertionSorted = randomNumbers;  // Copy the vector
    insertionSort(insertionSorted);
    std::cout << "Insertion Sort: ";
    printVector(insertionSorted);

    // Test Quick Sort
    std::vector<int> quickSorted = randomNumbers;  // Copy the vector
    quickSort(quickSorted, 0, arraySize - 1);
    std::cout << "Quick Sort: ";
    printVector(quickSorted);
}


void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();  // Get the size of the vector
    for (int i = 0; i < n - 1; ++i) {  // Outer loop for passes
        for (int j = 0; j < n - i - 1; ++j) {  // Inner loop for comparisons
            if (arr[j] > arr[j + 1]) {  // Compare adjacent elements
                std::swap(arr[j], arr[j + 1]);  // Swap if needed
            }
        }
    }
}

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();  // Get the size of the vector
    for (int i = 0; i < n - 1; ++i) {  // Outer loop for passes
        int minIndex = i;  // Assume the current index is the minimum
        for (int j = i + 1; j < n; ++j) {  // Inner loop for finding minimum
            if (arr[j] < arr[minIndex]) {  // Compare with assumed minimum
                minIndex = j;  // Update minimum index
            }
        }
        std::swap(arr[i], arr[minIndex]);  // Swap the minimum with the current element
    }
}


void insertionSort(std::vector<int>& arr) {
    int n = arr.size();  // Get the size of the vector
    for (int i = 1; i < n; ++i) {  // Start from the second element
        int key = arr[i];  // Store the current element
        int j = i - 1;  // Start comparing with the previous element
        while (j >= 0 && arr[j] > key) {  // Shift elements greater than key to the right
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;  // Insert the key at its correct position
    }
}


int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];  // Choose the last element as the pivot
    int i = low - 1;  // Initialize the index of the smaller element
    for (int j = low; j < high; ++j) {  // Loop through the elements
        if (arr[j] <= pivot) {  // If current element is smaller than or equal to pivot
            ++i;  // Increment the index of the smaller element
            std::swap(arr[i], arr[j]);  // Swap elements at i and j
        }
    }
    std::swap(arr[i + 1], arr[high]);  // Swap the pivot with the element at i + 1
    return i + 1;  // Return the partitioning index
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // Get the partitioning index
        quickSort(arr, low, pi - 1);  // Recursively sort elements before partition
        quickSort(arr, pi + 1, high);  // Recursively sort elements after partition
    }
}

