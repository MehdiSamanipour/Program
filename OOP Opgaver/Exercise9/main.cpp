
//opgave 1 ARRAY FORM OPGAVE 2 POINTER FORM 

//
//#include <stdio.h>
//#include <stdlib.h> // For rand() and srand()
//#include <time.h>   // For time()
//
//#define MAX_SIZE 10
//
//#define RANDOM_MIN 1
//#define RANDOM_MAX 100
//
//
//int sum(int arr[], int n); // Calculates the sum of numbers in the array
//int find_min(int arr[], int n); // Returns the minimum element in the array
//int find_max(int arr[], int n); // Returns the maximum element in the array
//float calculate_average(int arr[], int n); // Calculates the average of the elements in the array
//
//int main() {
//    // Seed the random number generator with current time
//    srand(time(0));
//
//    int arr[MAX_SIZE];
//    int arr1[MAX_SIZE] = { 2,5,3,8,6,5,4,3,5,0 };
//    int n;
//    int arr_rand[MAX_SIZE];
//
//    printf("Enter the number of elements (max %d): ", MAX_SIZE);
//    scanf_s("%d", &n);
//
//    printf("Enter %d elements:\n", n);
//    for (int i = 0; i < n; i++) {
//        scanf_s("%d", &arr[i]);
//    }
//
//    int total = sum(arr, n);
//    printf("The sum of the elements is %d\n", total);
//    printf("Minimum: %d\n", find_min(arr, n));
//    printf("Maximum: %d\n", find_max(arr, n));
//    printf("Average: %.2f\n", calculate_average(arr, n));
//    printf("\n ARRAY: ");
//    for (int i = 0; i < MAX_SIZE; i++) {
//        printf(" %d ",arr1[i]);
//    }
//
//    printf("\nMinimum: %d\n", find_min(arr1, n));
//    printf("Maximum: %d\n", find_max(arr1, n));
//
//
//    printf("Generating %d random numbers...\n", n);
//    for (int i = 0; i < n; i++) {
//        arr_rand[i] = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
//    }
//
//    printf("\nMinimum: %d\n", find_min(arr_rand, n));
//    printf("Maximum: %d\n", find_max(arr_rand, n));
//
//    return 0;
//}
//
///*
// * Calculates the sum of the elements in the array.
// * arr: Array containing the numbers to be summed
// * n: Size of the array
// */
//int sum(int arr[], int n) {
//    int total = 0;
//    for (int i = 0; i < n; i++) {
//        total += arr[i];
//    }
//    return total;
//}
//
///*
// * Returns the minimum element in the array.
// * arr: Array containing the numbers to be searched
// * n: Size of the array
// */
//int find_min(int arr[], int n) {
//    int min = arr[0];
//    for (int i = 1; i < n; i++) {
//        if (arr[i] < min) {
//            min = arr[i];
//        }
//    }
//    return min;
//}
//
///*
// * Returns the maximum element in the array.
// * arr: Array containing the numbers to be searched
// * n: Size of the array
// */
//int find_max(int arr[], int n) {
//    int max = arr[n - 1];
//    for (int i = 0; i < (n - 1); i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    return max;
//}
//
///*
// * Calculates the average of the elements in the array.
// * arr: Array containing the numbers for which the average is to be calculated
// * n: Size of the array
// */
//float calculate_average(int arr[], int n) {
//    float sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += arr[i];
//    }
//    float average = sum / n;
//    return average;
//}
////
////#include <stdio.h>
////#include <stdlib.h>
////
////// Funktion til at allokere plads til en matrix af heltal
////// matrix er en pegepind til en pointer til en matrix
////// rows er antallet af rækker i matrixen
////// cols er antallet af kolonner i matrixen
////void allocateMatrix(int*** matrix, int rows, int cols) {
////	*matrix = (int**)malloc(rows * sizeof(int*));
////	for (int i = 0; i < rows; i++) {
////		(*matrix)[i] = (int*)malloc(cols * sizeof(int));
////	}
////}
////
////// Funktion til at udfylde en matrix med data
////// matrix er en pointer til en matrix
////// rows er antallet af rækker i matrixen
////// cols er antallet af kolonner i matrixen
////void fillMatrix(int** matrix, int rows, int cols) {
////	for (int i = 0; i < rows; i++) {
////		for (int j = 0; j < cols; j++) {
////			matrix[i][j] = i + j;
////		}
////	}
////}
////
////// Funktion til at udskrive en matrix
////// matrix er en pointer til en matrix
////// rows er antallet af rækker i matrixen
////// cols er antallet af kolonner i matrixen
////void printMatrix(int** matrix, int rows, int cols) {
////	for (int i = 0; i < rows; i++) {
////		for (int j = 0; j < cols; j++) {
////			printf("%d ", matrix[i][j]);
////		}
////		printf("\n");
////	}
////}
////
////int main() {
////	int rows = 3;
////	int cols = 4;
////	// Pointer til en matrix af heltal
////	int** matrix;
////	// Allokerer plads til en matrix af heltal
////	allocateMatrix(&matrix, rows, cols);
////	// Fyld matrix med data
////	fillMatrix(matrix, rows, cols);
////	// Udskriv matrix
////	printMatrix(matrix, rows, cols);
////	// Frigiv plads allokeret af matrix
////	for (int i = 0; i < rows; i++) {
////		free(matrix[i]);
////	}
////	free(matrix);
////	return 0;
////}


// opgave 2



#include <stdio.h>
#include<string.h>


struct myStruct {
    int x;
    int y;
};


void swap(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int number = 10;
    int* pointer = &number;

    int numbers[5] = { 10, 20, 30, 40, 50 };
    int* pointer1 = &numbers[0];

    for (int i = 0; i < 5; i++) {
        printf("Værdien på index %d i arrayet er: %d\n", i, *(pointer1 + i));
    }



    printf("Værdien af heltalsvariablen er: %d\n", number);

    *pointer = 20;

    printf("Værdien af heltalsvariablen efter ændringen er: %d\n", number);


    char str[] = "Hello, world!";
    char* pointer3 = str;
    int count = 0;

    while (*pointer3 != '\0') {
        count++;
        pointer3++;
    }

    printf("Længden af strengen '%s' er %d\n", str, count);

    //opgave d

    int x = 10;
    int y = 20;

    printf("Før swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("Efter swap: x = %d, y = %d\n", x, y);

    //opgave d
    struct myStruct myVar = { 10, 20 };
    struct myStruct* ptr = &myVar;

    // initialisering af struct-felter ved hjælp af pointer
    ptr->x = 30;
    ptr->y = 40;

    // udskrivning af struct-felter
    printf("x = %d, y = %d", ptr->x, ptr->y);



    //opgave e



    // Pointer til en integer
    int* ptr1;
    // Pointer til en pointer til en integer
    int** ptr2;
    // ptr1 peger på x
    ptr1 = &x;
    // ptr2 peger på ptr1 (ptr2 peger på en pointer (ptr1) som peger på en int (x))
    ptr2 = &ptr1;
    // værdien af det som ptr1 peger på udskrives (dvs værdien af x = 10)
    printf("Værdien af x: %d\n", *ptr1);
    // værdien af det som ptr2 peger på udskrives (dvs værdien af ptr1 som er adressen på x)
    printf("Adressen af x: %p\n", *ptr2);
    //værdien af værdien af det som ptr2 peger på udskrives (værdien af det ptr2 peger på = ptr1, værdien af det som ptr1 peger på er x, dvs 10)
    printf("Værdien af x: %d\n", **ptr2);





    //opgave 3




    return 0;
}

