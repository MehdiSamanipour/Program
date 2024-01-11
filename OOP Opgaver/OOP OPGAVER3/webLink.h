#pragma once
#include <string>
using namespace std;

class WebLink
{
public:
	
	WebLink(string);
	void printWebLink()const;
private:
	const string address_;
	   
};
