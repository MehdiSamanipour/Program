#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include "wirringPi.h"

#define LD2 23

int main(void)
{
    if (!Open())
    {
        printf("Error with connection\n");
        exit(1);
    }

    printf("Connected to Raspberry Pi\n");
    pinMode(LD2, OUTPUT);       // Set LD2 pin as OUTPUT
    digitalWrite(LD2, HIGH);    // Set LD2 pin to HIGH

    return 0;
}
