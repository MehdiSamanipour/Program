#pragma once

class Hotelroom
{
public:
    Hotelroom(int roomNumber = 0, int numberOfBeds = 0, char category = 'U', bool seaView = false);
    void setRoomNumber(int roomNumber);
    int getRoomNumber() const;
    void setNumberOfBeds(int numberOfBeds);
    int getNumberOfBeds() const;
    void setCategory(char category);
    char getCategory() const;
    void setSeaView(bool seaView);
    bool getSeaView() const;
    void print() const;

private:
    int roomNumber_;
    int numberOfBeds_;
    char category_;
    bool seaView_;
};
