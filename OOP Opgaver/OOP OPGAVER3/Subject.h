#pragma once
#include<string>
#include <iostream>
#include "WebLink.h"
using namespace std;

class Subject
{
public:
	
	Subject(string);
	void setLink(const WebLink*);
	const WebLink* getLink();
	void printText()const;

private:
	string text_;
	const WebLink* link_;
};


