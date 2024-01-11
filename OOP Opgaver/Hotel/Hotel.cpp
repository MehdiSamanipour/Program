#include "Hotel.h"
#include <iostream>

Hotel::Hotel(std::string hotelname) : hotelname_(hotelname) {}

void Hotel::updateRoomData(int roomNumber, int numberOfBeds, char category, bool seaView) {
    int index = roomNumber - 100;

    if (index >= 0 && index < ROOMS) {
        rooms_[index].setRoomNumber(roomNumber);
        rooms_[index].setNumberOfBeds(numberOfBeds);
        rooms_[index].setCategory(category);
        rooms_[index].setSeaView(seaView);
    }
}

Hotelroom Hotel::getHotelroom(int roomNumber) const {
    int index = roomNumber - 100;

    if (index >= 0 && index < ROOMS)
        return rooms_[index];
    else
        return Hotelroom(); // Return default Hotelroom if roomNumber is invalid
}

void Hotel::searchRoomsWithSeaView() const {
    std::cout << "Rooms with sea view:" << std::endl << std::endl;

    for (const auto& room : rooms_) {
        if (room.getRoomNumber() != 0 && room.getSeaView()) {
            room.print();
        }
    }
}

void Hotel::print() const {
    std::cout << "Hotel: " << hotelname_ << std::endl << std::endl;

    for (const auto& room : rooms_) {
        if (room.getRoomNumber() != 0) {
            room.print();
        }
    }
}
