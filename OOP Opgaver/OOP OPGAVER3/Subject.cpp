#include "Subject.h"
#include <iostream>

Subject::Subject(std::string text)
{
	link_ = nullptr;
	text_ = text;
}

void Subject::setLink(const WebLink* link)
{
	link_ = link;
}

const WebLink* Subject::getLink() 
{
	return link_;
}

void Subject::printText() const
{
	std::cout << text_ << std::endl;

	if (link_ == nullptr)
		std::cout << "No further information avaiable" << std::endl << std::endl;
	else
	{
		std::cout << "Further information here: ";
		link_->printWebLink();
		std::cout << std::endl << std::endl;
	}
}
