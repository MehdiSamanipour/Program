#include <iostream>
using namespace std;

int main()
{
    // Opgave 1: Udskriver tal fra -10 til 15
    for (int i = -10; i <= 15; i++)
    {
        cout << i << " "; // Udskriv værdien af i og et mellemrum
    }
    cout << endl; // Gå til næste linje

    // Opgave 2: Udskriver tal fra 100 til 50 med intervaller på 10
    for (int i = 100; i >= 50; i -= 10)
    {
        cout << i << " "; // Udskriv værdien af i og et mellemrum
    }
    cout << endl; // Gå til næste linje

    // Opgave 3: Læser to tal og en regneoperation, udfører operationen og udskriver resultatet
    double tal1, tal2, resultat;
    string regneart;

    cout << "Indtast et nummer " << endl;
    cin >> tal1;
    cout << "Indtast et regnestykke (+, -, * eller /) " << endl;
    cin >> regneart;
    cout << "Indtast endnu et nummer " << endl;
    cin >> tal2;

    if (regneart == "+") {
        resultat = tal1 + tal2;
    }
    else if (regneart == "-") {
        resultat = tal1 - tal2;
    }
    else if (regneart == "*") {
        resultat = tal1 * tal2;
    }
    else if (regneart == "/") {
        if (tal2 != 0) {
            resultat = tal1 / tal2;
        }
        else {
            cout << "Fejl: Division med 0 er ikke tilladt." << endl;
            return 1; // Afslut programmet med en fejlkode
        }
    }
    else {
        cout << "Ugyldig regneart. Brug kun +, -, * eller /." << endl;
        return 1; // Afslut programmet med en fejlkode
    }

    cout << "Resultatet er: " << resultat << endl;

    char regnearte;
    // Alternative med switch (Opgave 3 med switch)
    cout << "Indtast et nummer " << endl;
    cin >> tal1;
    cout << "Indtast et regnestykke (+, -, * eller /) " << endl;
    cin >> regnearte;
    cout << "Indtast endnu et nummer " << endl;
    cin >> tal2;

    switch (regnearte) {
    case '+':
        resultat = tal1 + tal2;
        break;
    case '-':
        resultat = tal1 - tal2;
        break;
    case '*':
        resultat = tal1 * tal2;
        break;
    case '/':
        if (tal2 != 0) {
            resultat = tal1 / tal2;
        }
        else {
            cout << "Fejl: Division med 0 er ikke tilladt." << endl;
            return 1; // Afslut programmet med en fejlkode
        }
        break;
    default:
        cout << "Ugyldig regneart. Brug kun +, -, * eller /." << endl;
        return 1; // Afslut programmet med en fejlkode
    }

    cout << "Resultatet er: " << resultat << endl;

    // Variabler til koefficienterne og diskriminanten
    double a, b, c,d;

    // Indtastning af koefficienterne
    cout << "Indtast koefficient A: ";
    cin >> a;
    cout << "Indtast koefficient B: ";
    cin >> b;
    cout << "Indtast koefficient C: ";
    cin >> c;

    // Beregning af diskriminanten
    d = b * b - 4 * a * c;

    // Beslutningsstruktur baseret på diskriminanten
    if (d > 0) {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Der er 2 rødder: x1 = " << x1 << " og x2 = " << x2 << endl;
    }
    else if (d == 0) {
        double x = -b / (2 * a);
        cout << "Der er 1 rod: x = " << x << endl;
    }
    else {
        cout << "Der er ingen reelle rødder." << endl;
    }

    //alternative opgave 4  loop 
    while (true) // Infinite loop
    {
        // Variabler til koefficienterne og diskriminanten
     

        cout << "Indtast koefficient A: ";
        cin >> a;
        cout << "Indtast koefficient B: ";
        cin >> b;
        cout << "Indtast koefficient C: ";
        cin >> c;

        // Beregning af diskriminanten
        d = b * b - 4 * a * c;

        // Beslutningsstruktur baseret på diskriminanten
        if (d > 0) {
            double x1 = (-b + sqrt(d)) / (2 * a);
            double x2 = (-b - sqrt(d)) / (2 * a);
            cout << "Der er 2 rødder: x1 = " << x1 << " og x2 = " << x2 << endl;
        }
        else if (d == 0) {
            double x = -b / (2 * a);
            cout << "Der er 1 rod: x = " << x << endl;
        }
        else {
            cout << "Der er ingen reelle rødder." << endl;
        }
    }
    //alternative   
    double A, B, C,D;
    double x1, x2;
    string svar = "j";

    while (svar[0] == 'j' || svar[0] == 'J')
    {
        cout << "Indtast koeffienterne til en 2. gradsligning (Ax^2 + Bx + C = 0): ";
        cin >> A;
        cin >> B;
        cin >> C;

        D = B * B - 4 * A * C;

        if (D < 0)
        {
            cout << "Der er ingen roedder!" << endl;
        }
        else if (D == 0)
        {
            x1 = -B / (2 * A);
            cout << "Der er een rod: " << x1 << endl;
        }
        else
        {
            x1 = (-B - sqrt(D)) / (2 * A);
            x2 = (-B + sqrt(D)) / (2 * A);
            cout << "Der er 2 roedder: " << x1 << " og " << x2 << endl;
        }

        cout << "Vil du loese flere ligninger ? (j/n): ";
        cin >> svar;
    }

    return 0;
}
