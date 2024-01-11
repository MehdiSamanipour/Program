#include "Hotelroom.h"
#include <iostream>

Hotelroom::Hotelroom() : roomNumber_(0), numberOfBeds_(0), category_('U'), seaView_(false) {}

Hotelroom::Hotelroom(int roomNumber, int numberOfBeds, char category, bool seaView)
    : roomNumber_(roomNumber), numberOfBeds_(numberOfBeds), category_(category), seaView_(seaView) {}

// Getter and Setter implementations...
void Hotelroom::setRoomNumber(int roomNumber) { roomNumber_ = roomNumber; }
int Hotelroom::getRoomNumber() const { return roomNumber_; }

void Hotelroom::setNumberOfBeds(int numberOfBeds) { numberOfBeds_ = numberOfBeds; }
int Hotelroom::getNumberOfBeds() const { return numberOfBeds_; }

void Hotelroom::setCategory(char category) { category_ = category; }
char Hotelroom::getCategory() const { return category_; }

void Hotelroom::setSeaView(bool seaView) { seaView_ = seaView; }
bool Hotelroom::getSeaView() const { return seaView_; }

// Print method implementation
void Hotelroom::print() const {
    using namespace std;
    cout << "Room " << roomNumber_ << endl;

    switch (numberOfBeds_) {
    case 1:
        cout << "Single Room - ";
        break;
    case 2:
        cout << "Double Room - ";
        break;
    case 3:
    case 4:
        cout << "Family Room - ";
    }

    switch (category_) {
    case 'A':
        cout << "Suite" << endl;
        break;
    case 'B':
        cout << "Luxury" << endl;
        break;
    case 'C':
        cout << "Standard" << endl;
        break;
    case 'U':
        cout << "Undefined Category" << endl;
        break;
    }

    cout << "Floor " << roomNumber_ / 100 << endl;
    cout << (seaView_ ? "With" : "Without") << " sea view" << endl << endl;
}
