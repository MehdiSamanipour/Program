#include "ludo.h"
#include "ludo1.h"
#include <iostream>

int main() {
    Ludo1 ludo;
    ludo.udskriv();

    int diceResult = ludo.slaa();
    std::cout << "Dice result: " << diceResult << std::endl;

    // Assuming you want to move the first piece of the first player
    ludo.flyt("Player1", 0, diceResult);
    ludo.udskriv();

    return 0;
}

