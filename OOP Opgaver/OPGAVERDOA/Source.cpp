#include<iostream>

#include<ctime>

#define arr  6

int main() {
    int counter=0;

    srand(time(0));

  

    int myarr[arr];
    for (size_t i = 0; i < arr; i++) 
    {
        myarr[i] = rand() % 5;
        std::cout << myarr[i] << std::endl;

    }
    if (myarr[2] == 2) {

        counter++;
    }

    std::cout << "counter is " << counter;


   
}