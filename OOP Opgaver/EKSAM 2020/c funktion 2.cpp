#include <stdio.h>  
#include<string.h>
#include <ctype.h>
#include<time.h>
#include<stdlib.h>
#include <conio.h>


using namespace std;

//void reducerArray(double* arrayPtr, int arraySize)
//{
//    for (size_t i = 0; i < arraySize; i++)
//    {
//       arrayPtr[i] -= 5;  // alternative *(arrayPtr + i) -= 5; 
//       if (arrayPtr[i] < 0)   // if (*(arrayPtr + i) < 0)
//           arrayPtr[i] = 0;    //  *(arrayPtr + i) = 0;
//    }
//}


//#define ARRAY_SIZE 100

int setEqual(const int* numberPtr1, int* numberPtr2)
{
    if (*numberPtr1 == *numberPtr2)
        return 1;
    else
    {
        *numberPtr2 = *numberPtr1;
        return 0;
    }

}
    //new opgaver


//    void printTalraekke(int minimum, int maksimum) {
//
//        if (minimum > maksimum)
//            printf("%s", "FEJL!");
//        else
//            for (int i = minimum; i <= maksimum; i++)
//                printf("%d\n", i);
//}

//double bigNumber(double array[], int SIZE)
//{
//    int i;
//    for (i = 0; i < SIZE; i++)
//    {
//        if (array[i] > 10)
//            return array[i];
//    }
//    return 0;
//}
//
//struct Circle
//{
//    int x_;
//    int y_;
//    float radius_;
//};

//int fillArray(int array[], int SIZE) {
//
//    int nowFilled = 0;
//    int sum = 0;
//    int i=0;
//    srand(time(0));
//    while (sum<1000 && i<SIZE)
//    {
//        array[nowFilled] = rand() % 99 + 1;
//        sum += array[nowFilled];
//        nowFilled++;
//    }
//    return nowFilled;
//}
//
////
//
int main()


{

    int number1 = 16, number2 = 30, test;
    printf_s("Tal 1 er %d og tal 2 er %d\n", number1, number2);
    test = setEqual(&number1, &number2);
    if (test == 0)
        printf_s("%s", "Tal 2 er \x91ndret\n");
    printf_s("Tal 1 er %d og tal 2 er %d\n", number1, number2);
   


//   /* double talArray[101];
//for (size_t i = 0; i < 101; i++)
//{
//talArray[i] = i*0.01;
//}
//for (size_t i = 0; i < 101; i++)
//{
//printf("%.2f\n", talArray[i]);
//}*/
//
//    ////new opgave
//
//    //int tal8 = 1;
//    //while (!_kbhit())
//    //{
//    //    printf("%d\n", tal8++);
//    //}
//
//
//    ////new opgave
//
//    //double myArray[]{ 7.8, 1.5, 13.3, 50.9, 4.9, 5.0, 55.3 };
//    //reducerArray(myArray, 7);
//    //for (size_t i = 0; i < 7; i++)
//    //    printf("%f\n", myArray[i]);
//
//    //new opgave
//
//
//   /* int arr[6] = { 1,2,3,6,3 };
//   /* printf("first number is %d ", arr[0]);*/
//
//
//   /* for (size_t i = 10; i <= 990; i += 10)
//    {
//        printf("%d ", i);
//    }
//    printf("\n\n");
//    for (size_t i = 1; i <= 10; i++)
//    {
//        for (size_t j = 10; j <= 100; j += 10)
//
//            printf("%d  ", i * j);
//        printf("\n");
//    }*/
//   //  char myarr[26] = { };
//    //int tal1, tal2;
//    //printf("%s", "Indtast to hele tal: ");
//    //scanf_s("%d", &tal1);
//    //scanf_s("%d", &tal2);
//    //if (tal2 < tal1)              // Alternativ:
//    //{                             // if( tal2 < tal1)
//    //    int temp = tal1;         // printTalraekke(tal2, tal1);
//    //    tal1 = tal2;             // else
//    //    tal2 = temp;              // printTalreakke(tal1, tal2);
//    //} //
//    ////
//    //printTalraekke(tal1, tal2);
//
//
//    ////new opgave
//
//    //int tal;
//    //srand(time(NULL));
//    //do
//    //{
//    //    tal = rand() % 26 + 97;
//    //    printf("%c\n", tal);
//    //} while (tal != 'z');
//
//   /*printf("%s ", " skrive ny ord med stort bogstave i begyndelse \n");
//
//   scanf_s("%c", &myarr);
//  
//   for (size_t i=0 ;getchar() != eof; i++)
//   {
//       while (i)
//       {
//           if (myarr[0] >= 'a' && myarr[0] <= 'z')
//           {
//               printf("%s ", " skrive ny ord med stort bogstave i begyndelse ");
//
//
//               scanf_s("%c", myarr);
//           }
//           
//       
//   }*/
//   
//      
//   /* char myString[] = "ukendt";
//    size_t index = 0;
//    int numberOfE = 0;
//    while (myString[index]!= '\0')
//    {
//        if (myString[index] == 'e')
//            numberOfE++;
//        index++;
//    }
//   
//    printf("%d \n", strlen(myString));
//
//    printf("%d \n", myString[0]);
//    scanf_s("%c", &myString[0]);
//
//    if (myString[0]>=65 && myString[0] <= 90)
//    {
//        for (size_t i = 0; i < getchar() != EOF; i++)
//        {
//            printf("%s ", " skrive ny ord med stort bogstave i begyndelse ");
//            scanf_s("%c", &myString[0]);
//        }
//    }*/
//   
//    //double myArray[] = { 2.1, 4.3, 1.7, 11.8 };
//    //// OPGAVE 1 d
//    //double number;
//    //number = bigNumber(myArray, 4);
//    //if (number >10)
//    //    printf("Der er fundet følgende tal større end 10: %f\n\n", number);
//    //else
//    //    printf("Der blev ikke fundet noget tal større end 10\n\n");
//    //// slut på 1 d
//    //return 0;
//
//
//   // /* struct Circle C1, C2 = { 2,4,7.3 }, C3 = { 1,2 };
//   // int x , y;
//   // float radius;
//   //
//
//   // printf("Indtast centrum koordinater x og y samt radius for en cirkel.\nx: ");
//   // scanf_s("%d", &x);
//   // printf("y: ");
//   // scanf_s("%d", &y);
//   // printf("Radius: ");
//   // scanf_s("%f", &radius);
//
//
//   // C1.x_ = x;
//   // C1.y_ = y;
//   // C1.radius_ = radius;
//
//   // printf("%d% d %f is ", x, y, radius);*/
//
//
//    //#define arr 100
//
// /*  int  myArray[ARRAY_SIZE] = { 0 };
//
//   int filled = fillArray(myArray, ARRAY_SIZE);
//   int index;
//   for (index = 0; index < filled; index++)
//   {
//       printf("%d ", myArray[index]);
//       printf("%d \n", myArray[0]);
//   }*/
//
//




}