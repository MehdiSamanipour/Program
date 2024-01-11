#pragma once
#include <string>


class Led
{
public:

     Led();
	 Led(long id, double forwardVoltage,double current);
	std::string getId()const;
	double getForwardVoltage()const;
	double getCurrent()const;
	std::string toString()const;

private:

	long id_;
	double forwardVoltage_;
	double current_;



};
