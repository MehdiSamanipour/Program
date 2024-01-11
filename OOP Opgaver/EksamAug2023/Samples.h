#pragma once
#include "MineralSample.h"
#include <vector>

class Samples {
public:
    void add_sample(double weight, double volume);
    double relative_number_of_gold_samples() const;

private:
    std::vector<MineralSample> samples;
};