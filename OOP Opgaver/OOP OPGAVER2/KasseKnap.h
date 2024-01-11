#pragma once

#include "NummerStander.h"
#include "Display.h"


class KasseKnap
{
public:
	KasseKnap(NummerStander*, Display*);
	void tryk() const;
private:
	NummerStander* nummerPtr_;
	Display* displayPtr_;
};