#include <iostream>
#include <vector>
using namespace std;
// Including necessary header files for input/output and vectors.

int main ()
{
    vector<int> myVector = {1, 2, 3, 4};
    // Declaring a vector named 'myVector' and initializing it with values 1, 2, 3, and 4.

    for (int i = 0; i < myVector.size(); ++i)
    {
        cout << myVector[i] << endl;
        // Looping through each element of myVector and printing it followed by a newline.
    }

    cout << "enter the size of the vector: ";
    int size;
    cin >> size;
    // Prompting the user to input the size of the vector.

    int* dynamicVector = new int[size];
    // Dynamically allocating memory for an integer array (vector) based on the user-provided size.

    cout << "enter elements of the vector:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << "element " << i + 1 << ": ";
        cin >> dynamicVector[i];
        // Looping through each element of dynamicVector and taking input from the user.
    }

    // Print the elements of the vector using pointer notation.
    std::cout << "Elements of the vector using pointer notation:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << *(dynamicVector + i) << " ";
        // Looping through each element of dynamicVector and printing it using pointer notation.
    }

    // Don't forget to free the dynamically allocated memory.
    delete[] dynamicVector;
    // Deallocating the memory allocated for dynamicVector to prevent memory leaks.

    // Ask the user to input the number of rows and columns for the matrix.
    std::cout << "Enter the number of rows: ";
    int numRows;
    std::cin >> numRows;

    std::cout << "Enter the number of columns: ";
    int numCols;
    std::cin >> numCols;
    // Prompting the user to input the number of rows and columns for a matrix.

    // Create a 2D vector (matrix) using the input dimensions.
    std::vector<std::vector<int>> matrix(numRows, std::vector<int>(numCols));
    // Creating a 2D vector (matrix) with the specified number of rows and columns.

    // Take input for each element of the matrix from the user.
    std::cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            std::cout << "Element at position (" << i + 1 << ", " << j + 1 << "): ";
            std::cin >> matrix[i][j];
            // Looping through each element of the matrix and taking input from the user.
        }
    }

    // Print the matrix.
    std::cout << "Matrix:\n";
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            std::cout << matrix[i][j] << " ";
            // Looping through each element of the matrix and printing it.
        }
        std::cout << "\n";
        // Printing a newline after each row of the matrix.
    }


       // Ask the user to input the number of rows and columns for the matrix.
    std::cout << "Enter the number of rows: ";
    int numRows1;
    std::cin >> numRows1;

    std::cout << "Enter the number of columns: ";
    int numCols1;
    std::cin >> numCols1;

    // Create a 2D vector (matrix) using push_back for dynamic allocation.
    std::vector<std::vector<int>> matrix1;
    for (int i = 0; i < numRows1; ++i) {
        // Create a temporary vector for each row and push it back to the matrix.
        std::vector<int> tempRow;
        for (int j = 0; j < numCols1; ++j) {
            int element;
            std::cout << "Element at position (" << i + 1 << ", " << j + 1 << "): ";
            std::cin >> element;
            // Add the element to the temporary row vector.
            tempRow.push_back(element);
        }
        // Push the temporary row vector back to the matrix.
        matrix1.push_back(tempRow);
    }

    // Print the matrix.
    std::cout << "Matrix:\n";
    for (int i = 0; i < numRows1; ++i) {
        for (int j = 0; j < numCols1; ++j) {
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << "\n";
    }
      return 0;
	// Indicates successful program execution, returning a status code of 0 to the operating system.
}
