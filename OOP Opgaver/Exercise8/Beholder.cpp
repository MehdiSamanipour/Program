#include "Beholder.h"

Beholder::Beholder(double mol, double temperature, double volume) : mol_(mol), temperature_(temperature), volume_(volume) {
    pressure_ = mol * R * temperature_ / volume_;
}

double Beholder::getPressure() const {
    return pressure_;
}

double Beholder::getTemperature() const {
    return temperature_;
}

double Beholder::getVolume() const {
    return volume_;
}

double Beholder::getMol() const {
    return mol_;
}

void Beholder::setTemperatureForPressureAtFixedVolume(double pressure) {
    temperature_ = pressure * volume_ / mol_ / R;
}

void Beholder::setPressureForTemperatureFixedVolume(double temperature) {
    pressure_ = mol_ * R * temperature / volume_;
}


