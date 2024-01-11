#pragma once

#include "Led.h"

class Batch
{
public:

	auto id() -> long;
	void addLed(long id, double forwardVoltage, double current);
	Batch(long id, double forwardVoltage,double current);

	double averageForwardVoltage();
	double standardeviationForwardVoltage();
private:

	long id_;
};
