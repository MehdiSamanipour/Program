#include "Triangle.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c;
    // Test Triangle objects
    Triangle triangle1(3, 4, 5);
    Triangle triangle2(1, 1, 1);
    Triangle trekant3(1, 3, 13); // Ugyldig pga. sidesummerne - ikke en mulig trekant
    Triangle trekant4(3, 4, -5); // Ugyldig pga. en negativ side
    // Print initial values
    std::cout << "Triangle 1:" << std::endl;
    triangle1.print();
    std::cout << "Circumference: " << triangle1.circumference() << std::endl;

    std::cout << "\nTriangle 2:" << std::endl;
    triangle2.print();
    std::cout << "Circumference: " << triangle2.circumference() << std::endl;

    // Use setSides to update Triangle 1
    triangle1.setSides(5, 12, 13);

    // Print updated values
    std::cout << "\nTriangle 1 (after update):" << std::endl;
    triangle1.print();
    std::cout << "Circumference: " << triangle1.circumference() << std::endl;



        // Print initial values
        std::cout << "Triangle 1:" << std::endl;
        triangle1.print();
        std::cout << "Circumference: " << triangle1.circumference() << std::endl;
        std::cout << "Area: " << triangle1.area() << std::endl;

        std::cout << "\nTriangle 2:" << std::endl;
        triangle2.print();
        std::cout << "Circumference: " << triangle2.circumference() << std::endl;
        std::cout << "Area: " << triangle2.area() << std::endl;

        // Use setSides to update Triangle 1
        triangle1.setSides(5, 12, 13);

        // Print updated values
        std::cout << "\nTriangle 1 (after update):" << std::endl;
        triangle1.print();
        std::cout << "Circumference: " << triangle1.circumference() << std::endl;
        std::cout << "Area: " << triangle1.area() << std::endl;
        cout << "\nDu skal nu indtaste sidel\x91ngderne i trekant2 ";
        cout << "(positive tal!).\n\n";

        cout << "Indtast siden a: ";
        cin >> a;
        cout << "Indtast siden b: ";
        cin >> b;
        cout << "Indtast siden c: ";
        cin >> c;

        triangle2.setSides(a, b, c);

        cout << "\nStatus for trekant2 er:" << endl;
        triangle2.print();
        cout << endl;

        cout << "Den ugyldige trekant3 har siderne:"
            << " a = " << trekant3.getSideA()
            << " b = " << trekant3.getSideB()
            << " c = " << trekant3.getSideC();

        cout << endl;

        cout << "Den ugyldige trekant4 har siderne:"
            << " a = " << trekant4.getSideA()
            << " b = " << trekant4.getSideB()
            << " c = " << trekant4.getSideC();

        cout << endl;


    return 0;
}
