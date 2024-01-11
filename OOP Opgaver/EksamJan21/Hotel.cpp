#include "Hotel.h"
#include <iostream>

using namespace std;


Hotel::Hotel(string hotelname)
{
    hotelname_ = hotelname;
}

void Hotel::updateRoomData(int roomNumber, int numberOfBeds, char category, bool seaView)
{
    int index = roomNumber - 100;

    rooms_[index].setRoomNumber(roomNumber);
    rooms_[index].setNumberOfBeds(numberOfBeds);
    rooms_[index].setCategory(category);
    rooms_[index].setSeaView(seaView);
}

Hotelroom Hotel::getHotelroom(int roomNumber) const
{
    if (100 <= roomNumber && roomNumber < ROOMS+100)
 return rooms_[ roomNumber-100 ];
 else
 return Hotelroom();
}

void Hotel::searchRoomsWithSeaView() const
{
    cout << "Vaerelser med havudsigt:" << endl << endl;

    cout << "Vaerelser med havudsigt:" << endl << endl;
 for (size_t i = 0; i < ROOMS; i++)
 {
 if (rooms_[i].getRoomNumber() != 0 && rooms_[i].getSeaView() == true)
 rooms_[i].print();
 }
}

void Hotel::print() const
{
    cout << "****** " << hotelname_ << " ******" << endl << endl;
 for (size_t i = 0; i < ROOMS; i++)
 {
 if (rooms_[i].getRoomNumber() != 0)
 rooms_[i].print();
 }
}