#pragma once
#include <string>

class Moent
{
public:
	Moent(const std::string& land = "X", int aarstal = 0, double vaerdi = 0.0, const std::string& moentfod = "X");
	void setLand(const std::string& land);
	std::string getLand() const;
	void setAarstal(int aarstal);
	int getAarstal() const;
	void setVaerdi(double vaerdi);
	double getVaerdi() const;
	void setMoentfod(const std::string& moentfod);
	std::string getMoentfod() const;
	void print() const;
private:
	std::string land_;
	int aarstal_;
	double vaerdi_;
	std::string moentfod_;
};

