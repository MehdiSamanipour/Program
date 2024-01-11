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
			enhedsPris_ << " i alt " << finalPris <<"kr" << "(momsfri)" << endl;

	else if (momspligtig_==false)

		std::cout << "Rengoering " << antal_ << " " << "enhed " << "af " <<
		enhedsPris_ << " i alt " << finalPris << "kr" << "(momspligtig)" << endl;
	

	
}

Service::~Service() {


}