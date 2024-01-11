#include <stdio.h>
#include "Isvaffel.h"
#include "IsbodsOrder.h"
#include "Statistik.h"

int main() {
    // Det er i opgaven valgfrit at benytte int, float eller double som datatype for højden
    // printf og scanf_s skal benytte det korrekte tilsvarende formatspecifikationer (%d eller %f eller %lf)
    int hmor, hfar, hbarn;
    // Svarene kan være char, char[] eller int ­ char[] er nemmest at arbejde med
    char koen[10];
    char svar[5];
    // Do while der det bedste valg, når beregningen skal gøres mindst een gang.
    // Andre løkker er OK, men knap så gode
    do {
        printf("Indtast moderens hoejde i cm: ");
        scanf_s("%d", &hmor);
        printf("Indtast faderens hoejde i cm: ");
        scanf_s("%d", &hfar);
        printf("Hvilket koen er barnet? (D for dreng, P for pige): ");
        scanf_s("%s", koen, sizeof(koen));

        // Bruges char er den bedste løsning scanf_s("%c\n", &svar, 1); med int er det lige ud af landevejen
        if (koen[0] == 'P' || koen[0] == 'p') {
            hbarn = (12 * hfar + 13 * hmor) / 26;
        }
        else {
            hbarn = (12 * hfar + 13 * hmor) / 24;
        }
        printf("Dit barns forventede hoejde bliver ca.: %d cm\n", hbarn);
        printf("Vil du foretage en beregning igen (J/N)? ");
        // Bruges int til svaret er det bedst, at der angives en talværdi for ja og en for nej
        scanf_s("%s", svar, sizeof(svar));
        // Bruges char er den bedste løsning scanf_s("%c\n", &svar, 1); med int er det lige ud af landevejen
    } while (svar[0] != 'n' && svar[0] != 'N');
    // } while (svar != 'n' && svar != 'N'); hvis der benyttes char, bruges int skal

    double arr1[] = { -2, -1, 0, 1, 2 };
    double arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    printf("Variance for arr1: %f\n", varians(arr1, 5, 0));
    printf("Variance for arr2: %f\n", varians(arr2, 8, 4.5));

    // Create Isvaffel instances
    Isvaffel i1;
    Isvaffel i2(2, 3);

    // Print details of Isvaffel instances
    i1.print();
    i2.print();

    // Add scoops and extras to Isvaffel i1
    i1.tilfoejKugle();
    i1.tilfoejKugle();
    i1.tilfoejKugle();
    i1.tilfoejKugle();
    i1.tilfoejKugle();
    i1.tilfoejKugle();
    i1.tilfoejExtra();
    i1.tilfoejExtra();
    i1.tilfoejExtra();
    i1.tilfoejExtra();
    i1.tilfoejExtra();
    i1.tilfoejExtra();

    // Print updated details of Isvaffel i1
    i1.print();

    // Create IsbodsOrdre instance and insert Isvaffel instances
    IsbodsOrdre ordre;
    ordre.indsaetIsvaffel(i1);
    ordre.indsaetIsvaffel(i2);

    // Print details of the IsbodsOrdre instance
    ordre.print();
    return 0;
}
