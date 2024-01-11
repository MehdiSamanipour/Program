#include "Hotelroom.h"
#include <iostream>

using namespace std;

// Setter methods
void Hotelroom::setRoomNumber(int roomNumber)
{
    roomNumber_ = (100 <= roomNumber && roomNumber <= 1099 ? roomNumber : 0);
}

void Hotelroom::setNumberOfBeds(int numberOfBeds)
{
    numberOfBeds_ = (1 <= numberOfBeds && numberOfBeds <= 4 ? numberOfBeds : 0);
}

void Hotelroom::setCategory(char category)
{
    category_ = ('A' <= category && category <= 'C' ? category : 'U');
}

void Hotelroom::setSeaView(bool seaView)
{
    seaView_ = seaView;
}

// Getter methods
int Hotelroom::getRoomNumber() const
{
    return roomNumber_;
}

int Hotelroom::getNumberOfBeds() const
{
    return numberOfBeds_;
}

char Hotelroom::getCategory() const
{
    return category_;
}

bool Hotelroom::getSeaView() const
{
    return seaView_;
}

// Constructor implementation
Hotelroom::Hotelroom(int roomNumber, int numberOfBeds, char category, bool seaView)
{
    setRoomNumber(roomNumber);
    setNumberOfBeds(numberOfBeds);
    setCategory(category);
    setSeaView(seaView);
}

// Print method
void Hotelroom::print() const
{
    cout << "Værelse " << roomNumber_ << endl;

    switch (numberOfBeds_)
    {
    case 1:
        cout << "Enkeltværelse  - ";
        break;
    case 2:
        cout << "Dobbeltværelse - ";
        break;
    case 3:
    case 4:
        cout << "Familieværelse - ";
    }

    switch (category_)
    {
    case 'A':
        cout << "Suite" << endl;
        break;
    case 'B':
        cout << "Luksus" << endl;
        break;
    case 'C':
        cout << "Standard" << endl;
        break;
    case 'U':
        cout << "Udefineret kategori" << endl;
        break;
    }

    cout << roomNumber_ / 100 << ". etage" << endl;
    cout << (seaView_ ? "Med" : "Uden") << " havudsigt" << endl
         << endl;
}
