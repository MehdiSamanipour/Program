#pragma once
#include<iostream>
#include<string>
using namespace std;
class Rutebus
{
public:
	Rutebus();
	Rutebus(string farve, int rutenr, int antalPladser);
	~Rutebus();
	void setFarve(string farve);
	void setRutenr(int rutenr);
	void setAntalPladser(int antalPladser);
	void setIDrift(bool iDrift);
	void print(void)const ;
private:
	string farve_;
	int rutenr_;
	int antalPladser_;
	bool iDrift_;
};


