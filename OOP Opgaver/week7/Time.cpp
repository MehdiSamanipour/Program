#include "Time.h"
#include <iostream>
using namespace std;

void printTime(Time t)
{
	cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}

Time addTime(Time t1, Time t2) {
	Time sum;
	sum.hour = t1.hour + t2.hour;
	sum.minute = t1.minute + t2.minute;
	sum.second = t1.second + t2.second;


	// The sequence of these calculation is very important

// Find any minutes in seconds and add them to minutes
	sum.minute += sum.second / 60;
	// Adjust second to just contain the extra seconds
	sum.second %= 60;

	// Find any hours in minutes and add them to hours
	sum.hour += sum.minute / 60;
	// Adjust minute to just contain the extre minutes
	sum.minute %= 60;



	return sum;
}

int convertToSeconds(Time time) {
	// The simplest possible implementation
	// Other solutions using a variable is also correct
	// That is why it should be tested
	return ((time.hour * 60) + time.minute) * 60 + time.second;
}

Time createHour(int input) {
	Time result;
	// Take the seconds less than 60 from input
	result.second = input % 60;
	input /= 60;
	// Now input contains the whole number of minutes

	// Takle the minutes less than 60 from input
	result.minute = input % 60;
	input /= 60;
	// Now input contains the whole number of hours
	result.hour = input;

	return result;
}





