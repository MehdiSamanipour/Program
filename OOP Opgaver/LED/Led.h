#pragma once

class Led
{
public:
	Led(int nummer);

	// Kan ikke l�ngere v�re const, for vi �ndrer p� isOn
	void on();
	void off();

	void toggle();

private:
	int number;
	bool isOn;
};