// navn: Mehdi Samanipour   StdNr :201604432
// dato: 05-01-2023         Fag   :OOP
// 
// 
////Opgave 1.a

#pragma once

#include<string>

class FakturaLinje
{
public:

	FakturaLinje(std::string navn, double enhedsPris, double antal);
	double beregnPris(double Pris);
	virtual double beregnPris(double)const = 0;
	virtual ~FakturaLinje();
	virtual void print() const;

protected:
	double enhedsPris_;
	double antal_;





private:

	std::string navn_;



};

std::ostream& operator<<(std::ostream& out, const FakturaLinje& right);


////opgave 2.B

#include "FakturaLinje.h"
#include <iostream>
using namespace std;

FakturaLinje::FakturaLinje(std::string navn, double enhedsPris, double antal) {

	navn_ = navn;
	enhedsPris_ = (enhedsPris >= 0 ? enhedsPris : 100.0);
	antal_ = (antal > 0 ? antal : 1);

}
double FakturaLinje::beregnPris(double finalPris) {

	return finalPris;
}
FakturaLinje::~FakturaLinje() {



}
////mulighed for tom antal vare
////  cout << "Destructoren for klassen  er kaldt" << endl;
/////delete[] antal_;

void FakturaLinje::print() const
{
	std::cout << navn_ << " " << antal_ << " a " << enhedsPris_ << " kr. i alt " << beregnPris() << " kr." << endl;
}

std::ostream& operator<<(std::ostream& out, const FakturaLinje& right) {

	right.print();
	return out;
}


////opgave 2.c
#pragma once
#include"FakturaLinje.h"

class Vare : public FakturaLinje
{
public:
	Vare(std::string navn, double enhedsPris, double antal);

	double beregnPris(double)const override;
	~Vare();

private:

};

////opgave 2.d

#include"Vare.h"
#include"FakturaLinje.h"


Vare::Vare(std::string navn, double enhedsPris, double antal)
	: FakturaLinje(navn, enhedsPris, antal)

{


}

double Vare::beregnPris(double)const {

	return (enhedsPris_ * antal_ * 1.25);
}
Vare::~Vare() {



}

////opgave2.e

#pragma once
#include"FakturaLinje.h"

class Service : public FakturaLinje
{
public:
	Service(const std::string navn, double enhedsPris, double antal, bool momsPligtig);
	double beregnPris(double)const override;
	void print()const;

	~Service();

private:

	bool momspligtig_;


};

////opgave2.f

#include"Service.h"
#include"FakturaLinje.h"
#include<iostream>

Service::Service(std::string navn, double enhedsPris, double antal, bool momsPligtig)
	: FakturaLinje(navn, enhedsPris, antal) {

	momspligtig_ = (momsPligtig == true ? momsPligtig : false);
}
double Service::beregnPris(double)const {

	if (enhedsPris_ * antal_ * 1.25)   // switch også mulighed
	{
		return true;
	}

	else if (enhedsPris_ * antal_)

		return false;

}
void Service::print()const {

	FakturaLinje::print();
	if (momspligtig_ == true)

		std::cout << "Forsendelse " << antal_ << " " << "enhed " << "af " <<
		enhedsPris_ << " i alt " << finalPris << "kr" << "(momsfri)" << endl;

	else if (momspligtig_ == false)

		std::cout << "Rengoering " << antal_ << " " << "enhed " << "af " <<
		enhedsPris_ << " i alt " << finalPris << "kr" << "(momspligtig)" << endl;



}

Service::~Service() {


}

#include"FakturaLinje.h"
#include"Service.h"
#include"Vare.h"
#include<vector>


int main() {
	//// opgave 2.G
	Vare obj1("pen", 20.5, 2);
	Vare obj2(" ore", 800, 1);
	Service obj3("papire", 100, 45, true);


	obj1.print();
	obj2.print();
	obj3.print();

	////opgave 2.h

	void FakturaLinje::print() const
	{
		cout << " antal: " << antal_ << endl;
		list<antal*>::const_iterator iter;
		for (iter = antal_.begin(); iter != m_.end(); iter++)
		{
			(*iter)->print();
		}
	}


}


//opgave 1.a

#include<string>


class Periode
{
public:
	Periode();

	void setPeriode(int, int);
	void  setForbrug(double);
	int getStartMaaned()const;
	int  getSlutMaaned()const;
	double  getForbrug()const;
	void  print()const;
	 double beregnGennemsnitPerMaaned() const;
	~Periode();

private:
	int startMaaned_;
	int slutMaaned_;
	double  forbrug_;

};
















