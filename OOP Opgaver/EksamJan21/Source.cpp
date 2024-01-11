#include <stdio.h>

#include "Hotel.h"
#include "Hotelroom.h"


//opgave 2.a
int countDoubleCharacters(const char* localPtr)
{
    int numberOfDoubleChars = 0;
    
    while (*localPtr != '\0')
    {
        if (*localPtr == *(localPtr + 1))
            numberOfDoubleChars++;
        
        localPtr++;
    }
    
    return numberOfDoubleChars;
}


int main() {
    double number;
    int integer, decimal;

    printf_s("Indtast et decimaltal: ");
    scanf_s("%lf", &number);

    integer = (int)number;
    decimal = (number - integer) * 100;

    printf_s("Tallet svarer til %d kroner og %d øre\n", integer, decimal);

    //opgave 1.b
    for (size_t i = 0; i < 5; i++) {
        printf_s("Indtast et decimaltal: ");
        scanf_s("%lf", &number);

        integer = (int)number;
        decimal = (number - integer) * 100;

        printf_s("Tallet svarer til %d kroner og %d øre\n", integer, decimal);
    }

    //opgave 2.b
     char text[] = "Kampen slutter klokken 11";
    int count = countDoubleCharacters(text);
    
    printf("Der er %d dobbelt karakterer i teksten", count);

    //opgave 3
   //// Hotelroom h1, h2(127, 4, 'C', false);
   // h1.print();
   // h2.print();
   // h1.setRoomNumber(555);
   // h1.setNumberOfBeds(2);
   // h1.setCategory('A');
   // h1.setSeaView(true);
   // h1.print();

    //opgave 4
 Hotel myHotel("Deep sleep");
myHotel.updateRoomData(314, 2, 'C', true);
myHotel.updateRoomData(155, 4, 'B', false);
myHotel.updateRoomData(810, 2, 'A', true);
myHotel.print();
myHotel.searchRoomsWithSeaView();
    return 0;
}
