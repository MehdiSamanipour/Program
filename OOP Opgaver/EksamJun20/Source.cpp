#include <iostream>
#include <ostream>
#include <stdio.h>

#include "Eksamen.h"
#include "Patient.h"


#define SIZE 11

int main()
{//opgave 1 
    int alder;
    printf("Indtast din alder: ");
    scanf_s("%d", &alder);

    int maxPuls = 220 - alder;
    printf("Din maksimale puls er: %d\n", maxPuls);
    printf("Din nedre traeningspuls er: %d\n", maxPuls * 50 / 100);
    printf("Din oevre traeningspuls er: %d\n", maxPuls * 85 / 100);

    //opgave 1 b
    //int alder;
    do
    {
        printf("Indtast din alder: ");
        scanf_s("%d", &alder);
        if (alder < 14 || alder > 101)
            printf("Din alder skal vaere mellem 14 og 101 aar!\n");
    } while (alder < 14 || alder > 101);

    //int maxPuls = 220 - alder;
    printf("Din maksimale puls er: %d\n", maxPuls);
    printf("Din nedre traeningspuls er: %d\n", maxPuls * 50 / 100);
    printf("Din oevre traeningspuls er: %d\n", maxPuls * 85 / 100);
    // opgave 2

    int karArr[SIZE] = { 0,12,4,2,10,7,12,0,-3,2,7 };

    printf("%f %% har bestaaet\n", bestaaelsesProcent(karArr, SIZE));

    std::cout << bestaaelsesProcent(karArr, SIZE) << " %% har bestaaet!" << std::endl;

    // opgave 3

    Patient p1;
    Patient p2("Borge Andersen", 1.75, 92.5, 5, 5, 1965);
    p1.print();
    p2.print();
    std::cout << "BMI: " << p1.calculateBMI() << std::endl;


    return 0;
}
