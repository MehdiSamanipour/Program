#include "ClassB.h"

ClassB::ClassB(ClassC* CPtr, int x)
{
	CPtr_ = CPtr;  // Don't mix up your assignment!

	x_ = x;
}

void ClassB::print() const
{
	CPtr_->print();
	cout << x_ << endl;
}