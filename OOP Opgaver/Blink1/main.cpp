
#include "wiringPi.h"


#define LD5 0
#define LD6 1

using namespace std;

bool isDay() {
    return true; // Example: always consider it as day
}

int main(void) {
    if (!Open()) {
        cout << "Error with connection" << endl;
        return 1;
    }

    double temperature = getTemperature();
    cout << "Temperature in home: " << temperature << "°C" << endl;

    if (isDay()) {
        cout << "It's day. Turning on LEDs..." << endl;
        ledOn(LD5, 1);
        ledOn(LD6, 1);
    }
    else {
        cout << "It's night. Keeping LEDs off." << endl;
        ledOff(LD5);
        ledOff(LD6);
    }

    lcdShutdown();

    return 0;
}
