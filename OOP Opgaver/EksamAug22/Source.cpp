#include "potensfun.h"
#include "Bloddonor.h"
#include <iostream>
using namespace std;


int main() {
    int tal1, tal2;
    
    // Input the first and second numbers
    printf("Indtast foerste tal: ");
    scanf_s("%d", &tal1);
    
    printf("Indtast andet tal: ");
    scanf_s("%d", &tal2);
    
    // Print the result of tal1^tal2
    printf("%d oploeftet til %d giver %d\n", tal1, tal2, potens(tal1, tal2));

    // Display the value of tal1 before calling erstatMedPotens()
    printf("Variabel foer kald til erstatMedPotens(): %d\n", tal1);
    
    // Call the function to replace tal1 with its power to tal2
    erstatMedPotens(&tal1, tal2); // & is important
    
    // Display the value of tal1 after calling erstatMedPotens()
    printf("Variabel efter kald til erstatMedPotens(): %d\n", tal1);

    //opgave 2
     int mdr;        // Number of whole months worked
    int afholdt;    // Number of days of vacation taken
    int kanAfholde; // Number of whole vacation days that can be taken now
    double rest;    // Remaining fraction of vacation days

    // Input the number of whole months worked
    printf("Hvor mange hele maaneder har du arbejdet siden sidste 1. september? ");
    scanf_s("%d", &mdr);

    // Input the number of days of vacation taken
    printf("Hvor mange dages ferie har du afholdt i den periode? ");
    scanf_s("%d", &afholdt);

    // Calculate the remaining vacation days
    rest = mdr * 2.08 - afholdt;

    // Calculate whole vacation days that can be taken now
    kanAfholde = (int)rest;

    // Calculate the remaining fraction of vacation days
    rest = rest - kanAfholde;

    // Output the results
    printf("Du kan afholde %d dages ferie nu og har %.2f dage til senere\n", kanAfholde, rest);
    //opgave 3
  Bloddonor b1;
    Bloddonor b2("Jens Jensen", 28, "A", false);
    Bloddonor b3("Nils Nilsen", 30.6, "AB", true);

    b1.print();
    b2.print();
    b3.print();

    b1.setNavn("Anders Andersen");
    b1.setBMI(15.0);
    b1.setBlodtype("0");
    b1.setRhesustype(true);
    b1.print();

   Bloddonor Register[5] = {
        b1, b2, b3,
        Bloddonor("Birte Bendtsen", 23, "B",true),
        Bloddonor("Carl Carlsen", 28, "A", true)
    };

    // Opgave 3E
    cout << "Alle donorer" << endl;
    for (int i = 0; i < 5; i++) {
        Register[i].print();
    }

    // Opgave 3F
    cout << "Alle A- donorer, der opfylder BMI" << endl;
    for (int i = 0; i < 5; i++) {
        if (Register[i].getBlodtype() == "A"
            && Register[i].getRhesustype() == false
            && Register[i].getBMI() >= 18.5
            && Register[i].getBMI() <= 35)
            Register[i].print();
    }
    return 0;
}
