#include "Led.h"


     Led::Led()
     {
	     
     }
	 Led::Led(long id, double forwardVoltage,double current)
     {
         id_=id;
        forwardVoltage_=forwardVoltage;
        current_=current;


     }
	std::string Led::getId()const
     {
        return id_;

     }
	double Led::getForwardVoltage()const
     {
        return forwardVoltage_;

     }
	double Led::getCurrent()const
     {

        return current_;
     }
	std::string Led::toString()const
     {


     }