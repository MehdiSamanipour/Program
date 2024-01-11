#include "Samples.h"

void Samples::add_sample(double weight, double volume) {
    samples.emplace_back(MineralSample(weight, volume));
}

double Samples::relative_number_of_gold_samples() const {
    double numGold = 0;
   double result = 0.0;
if (samples.size() == 0)
return 0.0;
for (int i = 0; i < samples.size(); i++)
{
if (samples[i].is_gold())
numGold++;
}
    return numGold / samples.size();
}
