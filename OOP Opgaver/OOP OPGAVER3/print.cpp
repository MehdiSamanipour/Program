#include"WebLink.h"
#include "Subject.h"
#include <iostream>


void WebLink::printWebLink()const
{
	cout << address_;
}


void Subject::printText()const
{
	std::cout << text_ << std::endl;

	if (text_=="abc")
		std::cout << "No further information avaiable" << std::endl << std::endl;
	else
	{
		std::cout << "Further information here: ";
			// Add code here
			std::cout << std::endl << std::endl;
	}
}