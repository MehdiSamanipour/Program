#include"BitSet.h"

BitSet::BitSet(int size) {
	size_ = (size > 0 ? size : 32);
	dataPtr_ = new int[size_];
	for (size_t i = 0; i < size_; i++)
	{
		dataPtr_[i] = 0;
	}

}
BitSet::~BitSet() {
	delete[] dataPtr_;
}

// Ekstra metoder til rule-of-three Opgave 11.3
// Copy constructor
BitSet::BitSet(const BitSet& copyMe) {

	size_ = copyMe.size_;
	dataPtr_ = new int[size_];
	for (size_t i = 0; i < size_; i++)
	{
		dataPtr_[i] = copyMe.dataPtr_[i];
	}

}
	
// Copy Assignment
const BitSet& BitSet::operator=(const BitSet& copyMe) {

	if (this !=&copyMe)
	{
		delete[] dataPtr_;
		size_ = copyMe.size_;
		dataPtr_ = new int[size_];
	}
	for (size_t i = 0; i < size_; i++)
	{
		dataPtr_[i] = copyMe.dataPtr_[i];
	}
	return *this;
}

BitSet& BitSet::shiftIn(int data){

	if (data == 0 || data == 1)
	{
		for (int i = 0; i < size_ - 1; ++i)
		{
			dataPtr_[i] = dataPtr_[i + 1];
		}

		dataPtr_[size_ - 1] = data;
	}

	return *this;
}
// int shiftOut();

void BitSet::print() const {

	for (int i = 0; i < size_; i++)
	{
		cout << dataPtr_[i];
	}
}