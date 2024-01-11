#pragma once
#include <string>

// IceCream.h
class IceCream {
public:
    IceCream(std::string name, double price, double volume);
    void setVolume(double volume);
    void setPrice(double price);
    double getPricePrVolume() const;
    std::string toString() const;

private:
    double price_;
    double volume_;
    std::string name_;
};