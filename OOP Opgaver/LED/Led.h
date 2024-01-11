#pragma once

class Led
{
public:
	Led(int nummer);

	// Kan ikke længere være const, for vi ændrer på isOn
	void on();
	void off();

	void toggle();

private:
	int number;
	bool isOn;
};