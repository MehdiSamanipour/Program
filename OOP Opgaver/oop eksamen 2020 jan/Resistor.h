#pragma once
#include<iostream>
using namespace std;

class Resistor
{
public:
	
	Resistor(double resistance = 1.0);
	double getResistance()const;
	double  getConductance()  const;
	void  setResistance(double);
	void setConductance(double);

	friend Resistor operator&&(const Resistor&, const Resistor&);
	friend Resistor operator||(const Resistor&, const Resistor&);
	

private:
	double resistance_;
};


