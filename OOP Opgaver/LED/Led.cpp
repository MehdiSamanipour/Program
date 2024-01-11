#include "Led.h"
#include <RaspberryDLL.h>

#include <cstdlib>
#include <iostream>
using namespace std;

Led::Led(int nummer)
{
	if (1 <= nummer && nummer <= 6)
	{
		number = nummer;
	}
	else
	{
		cout << "Forkert lysdiode nummer i Led: " << nummer << endl;
		exit(1);
	}
	off(); // Call own method to initialize

}

void Led::on()
{
	ledOn(number);
	isOn = true;
}

void Led::off()
{
	ledOff(number);
	isOn = false;
}

void Led::toggle()
{
	if (isOn)
	{
		off();
	}
	else
	{
		on();
	}
}
