#include "capacitance.h"
#include <iostream>



double capacitance(double epsilon, double area,double distance)
{

	if (area>0 && distance>0)
	{
		return epsilon*(area/distance);
	}
	else
		std::cout<<" fejlmeddelelse og terminer programmet"<<std::endl;
	EOF;  // Mange muligeher for exit program 
}
