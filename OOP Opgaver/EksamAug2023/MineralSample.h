#pragma once
class MineralSample {
public:
    MineralSample(double weight, double volume);
    bool is_gold() const;
    bool is_silver() const;

private:
    double weight;
    double volume;
};
