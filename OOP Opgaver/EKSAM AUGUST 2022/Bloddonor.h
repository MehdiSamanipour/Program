#pragma once

#include<string>



class Bloddonor
{
public:
	Bloddonor(std::string navn = "ukendt", double BMI = 22.5, std::string blodtype = "ukendt", bool rhesus = false);
	void setNavn(std::string navn );
	void setBMI(double BMI) ;
	void setBlodtype(std::string blodtype);
	void  setRhesustype(bool rhesus);
	std::string  getNavn()const;
	double getBMI() const;
	std::string  getBlodtype()const;
	bool getRhesustype()const;
	void print()const;

private:

	std::string navn_;
	double BMI_;
	std::string Blodtype_;
	bool rhesustype_;

};


