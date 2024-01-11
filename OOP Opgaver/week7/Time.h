#pragma once

struct Time
{
	int hour;
	int minute;
	int second;
};

void printTime(Time t);
Time addTime(Time t1, Time t2);
int convertToSeconds(Time time);
Time createHour(int seconds);