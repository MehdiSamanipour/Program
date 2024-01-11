//#pragma once
//#include<string>
//
#pragma once
#include <string>
using namespace std;
class Skuffe
{
public:
	Skuffe();
	Skuffe(string, int);
	void setIndhold(string);
	string getIndhold() const;
	void setAntal(int);
	int getAntal() const;
	void print() const;
private:
	string indhold_;
	int antal_;
};

