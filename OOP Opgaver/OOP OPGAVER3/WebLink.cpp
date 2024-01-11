#include "WebLink.h"
#include "Subject.h"
#include <iostream>


WebLink::WebLink(string address)
	: address_(address)
{
}

void WebLink::printWebLink() const
{
	std::cout << address_;
}
