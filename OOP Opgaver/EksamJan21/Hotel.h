#pragma once
#include <string>
#include "Hotelroom.h"

const int ROOMS = 1000;

class Hotel
{
public:
	Hotel(std::string hotelname);
	void updateRoomData(int roomNumber, int numberOfBeds, char category, bool seaView);
	Hotelroom getHotelroom(int roomNumber) const;
	void searchRoomsWithSeaView() const;
	void print() const;
private:
	std::string hotelname_;
	Hotelroom rooms_[ROOMS];
};