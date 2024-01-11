#pragma once

class Hotelroom {
private:
    int roomNumber_;
    int numberOfBeds_;
    char category_;
    bool seaView_;

public:
    Hotelroom(); // Default constructor
    Hotelroom(int roomNumber, int numberOfBeds, char category, bool seaView);

    // Getter and Setter methods
    void setRoomNumber(int roomNumber);
    int getRoomNumber() const;

    void setNumberOfBeds(int numberOfBeds);
    int getNumberOfBeds() const;

    void setCategory(char category);
    char getCategory() const;

    void setSeaView(bool seaView);
    bool getSeaView() const;

    // Print method
    void print() const;
};
