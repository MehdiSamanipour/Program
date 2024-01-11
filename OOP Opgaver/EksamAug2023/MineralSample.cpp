#include "MineralSample.h"
#include <iostream>
#include <cmath>

MineralSample::MineralSample(double weight, double volume) {
    if (weight < 0 || volume < 0) {
        std::cout << "Negative input value, attributes set to default" << std::endl;
        this->weight = 0;
        this->volume = 1;
    } else if (volume == 0) {
        std::cout << "Volume is 0, attributes set to default" << std::endl;
        this->weight = 0;
        this->volume = 1;
    } else {
        this->weight = weight;
        this->volume = volume;
    }
}

bool MineralSample::is_gold() const {
    double rho = weight / volume;
    return std::abs(rho - 19.3) < 5.0e-2;
}

bool MineralSample::is_silver() const {
    double rho = weight / volume;
    return std::abs(rho - 10.5) < 5.0e-2;
}
