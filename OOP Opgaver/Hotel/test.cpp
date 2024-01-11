#include "Hotel.h"
#include <iostream>

int countDoubleCharacters(const char* localPtr) {
    int count = 0;

    while (*localPtr != '\0') {
        if (*localPtr == *(localPtr + 1)) {
            count++;
        }
        localPtr++;
    }

    return count;
}

int main() {
    const char* text = "Kampen slutter klokken 11";
    int result = countDoubleCharacters(text);

    std::cout << "Antal dobbeltkarakterer: " << result << std::endl;

    const int maxSize = 1000;
    char userText[maxSize];

    std::cout << "Enter a text: ";
    std::cin.getline(userText, maxSize);

    std::cout << "Number of double characters in the entered text: " << result << std::endl;

    Hotel myHotel("Awesome Hotel");

    myHotel.updateRoomData(101, 2, 'A', true);
    myHotel.updateRoomData(202, 1, 'B', false);
    myHotel.updateRoomData(303, 3, 'C', true);

    myHotel.print();
    myHotel.searchRoomsWithSeaView();

    return 0;
}
