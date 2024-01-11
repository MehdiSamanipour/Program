#include <cstdlib>
#include "Kortfunktioner.h"
#include <stdio.h>
#include <time.h>

#include "Adresse.h"
#include "Kontakt.h"

#define POKERSIZE 5

int main() {
    srand(time(NULL));

    int pokerHaand[POKERSIZE];

    for (int i = 0; i < POKERSIZE; i++) {
        pokerHaand[i] = TraekKort();
    }

    printf("Using simple printf loop:\n");
    for (int i = 0; i < POKERSIZE; i++) {
        printf("Kort %d: %d\n", i + 1, pokerHaand[i]);
    }

    printf("\nUsing PrintHaand function:\n");
    PrintHaand(pokerHaand, POKERSIZE);
    //opgave 2
     float afstand; // double is also OK

    // Opgave 2A og 2B kombineret
    do {
        printf("Indtast afstanden fra hjem til arbejde som kommatal:\n");
        scanf_s("%f", &afstand); // %lf hvis der bruges double

        if (afstand < 0) {
            printf("Du maa ikke indtaste en negativ vaerdi, proev igen!\n");
        }
    } while (afstand < 0);

    float daglig = afstand * 2; // daglig kørsel er ud og hjem

    // Andre if/else if/else er også OK, bare de er korrekte
    // Men denne er den simpleste
    if (daglig < 0) {
        printf("Fradraget er %.2f, men input er ugyldigt\n", 0.0);
    } else if (daglig <= 24) {
        printf("Fradraget er %.2f\n", 0.0);
    } else if (daglig <= 120) {
        printf("Fradraget er %.2f\n", (daglig - 24) * 2.16);
    } else {
        // daglig er altså større end 120
        float fradrag = (120 - 24) * 2.16;
        fradrag += (daglig - 120) * 1.08;
        printf("Fradraget er %.2f\n", fradrag);
    }
    //opgave 3

    Adresse a1("Frejasgade", 1, 'D', 8200);
    Adresse a2("Frejasgade", 2, 8200);
    a1.print();
    a2.print();

    a2.setGadenavn("Thorsgade");
    a2.setHusnummer(5);
    a2.setBogstav('B');
    a2.setPostnummer(8000);
    a2.print();

    Kontakt k1("Lars Larsen", 20212223, "Frejasgade", 1, 'D', 8200);
    Kontakt k2("Sigurd Nielsen", 31323334, "Frejasgade", 2, 8200);
    k1.print();
    k2.print();

    return 0;
}
