#include "IceCream.h"
#include <iostream>

IceCream::IceCream(std::string name, double price, double volume) : price_(price), volume_(volume), name_((price <= 0 || volume <= 0) ? "ugyldig" : name) {
    if (price <= 0 || volume <= 0) {
        std::cout << "ERROR" << std::endl;
    }
}

void IceCream::setVolume(double volume) {
    const double pricePrVolume = price_ / volume_;
    volume_ = volume;
    price_ = pricePrVolume * volume_;
}

void IceCream::setPrice(double price) {
    const double volumePrPrice = volume_ / price_;
    price_ = price;
    volume_ = volumePrPrice * price_;
}

double IceCream::getPricePrVolume() const {
    return price_ / volume_;
}

std::string IceCream::toString() const {
    return "Name: " + name_ + " Price: " + std::to_string(price_) + " Volume: " + std::to_string(volume_) + " PricePrVolume" + std::to_string(getPricePrVolume());
}
