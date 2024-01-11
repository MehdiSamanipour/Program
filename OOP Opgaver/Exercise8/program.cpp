#include "IceCream.h"
#include "Beholder.h"
#include "Vektor1.h"
#include "Vektor.h"
#include <iostream>

int main() {
    // IceCream
    IceCream i1("Filur", 10.50, 12);
    IceCream i2("Filur", -10, 12);

    std::cout << i1.toString() << std::endl;
    i1.setPrice(5);
    std::cout << i1.toString() << std::endl;
    i1.setVolume(20);
    std::cout << i1.toString() << std::endl;
    std::cout << i2.toString() << std::endl;

    // Vektor1
    Vektor1 v(1, 1);
    std::cout << v.length() << std::endl;
    v.rotate(acos(-1));
    std::cout << v.length() << std::endl;

    double pi = acos(-1);
    Vektor1 v1{ 1, 1 };
    std::cout << v1.length() << std::endl;
    v1.rotate(pi / 2);
    std::cout << v1.length() << std::endl;

    // Beholder
    Beholder b(2, 300, 100);
    std::cout << "Beholder Pressure: " << b.getPressure() << " bar" << std::endl;

    b.setTemperatureForPressureAtFixedVolume(200);
    std::cout << "Beholder New Temperature: " << b.getTemperature() << " K" << std::endl;

    // Vektor
    Vektor u{ 3, 4 };
    std::cout << "Vektor u Length: " << u.length() << std::endl;
    std::cout << "Vektor u String: " << u.toString() << std::endl;

    u.rotate(acos(-1) / 2);
    std::cout << "Vektor u Length after Rotation: " << u.length() << std::endl;
    std::cout << "Vektor u String after Rotation: " << u.toString() << std::endl;

    Vektor v2{ 1, 1 };
    std::cout << "Vektor v2 Length: " << v2.length() << std::endl;
    std::cout << "Vektor v2 String: " << v2.toString() << std::endl;

    v2.rotate(acos(-1) / 4);
    std::cout << "Vektor v2 Length after Rotation: " << v2.length() << std::endl;
    std::cout << "Vektor v2 String after Rotation: " << v2.toString() << std::endl;

    return 0;
}
