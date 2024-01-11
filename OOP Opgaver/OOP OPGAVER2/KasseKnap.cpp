#include "KasseKnap.h"


KasseKnap::KasseKnap(NummerStander* numPtr, Display* dispPtr)
{
	nummerPtr_ = numPtr;
	displayPtr_ = dispPtr;
}


void KasseKnap::tryk() const
{
	int nummer = nummerPtr_->getNaesteNummerIKoe();

	if (nummer != -1)
		displayPtr_->opdater(nummer);
}