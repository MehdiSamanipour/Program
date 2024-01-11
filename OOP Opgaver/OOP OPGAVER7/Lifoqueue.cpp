//
//
//
// Lifoqueue::Lifoqueue()
//{
//	firstFreeIndex_ = 0;
//
//	for (int i = 0; i < QUEUE_LENGTH; i++)
//		queueArray_[i] = 0;
//}
//
//
//bool Lifoqueue::insert(int localInt)
//{
//	if (!isFull())
//	{
//		queueArray_[firstFreeIndex_++] = localInt;
//		return true;
//	}
//
//	return false;
//}
//
//
//bool Lifoqueue::remove(int& intRef)
//{
//	if (!isEmpty())
//	{
//		intRef = queueArray_[--firstFreeIndex_];
//		return true;
//	}
//
//	return false;
//}
//
//
//bool Lifoqueue::isEmpty() const
//{
//	return (firstFreeIndex_ == 0);
//}
//
//
//bool Lifoqueue::isFull() const
//{
//	return (firstFreeIndex_ == QUEUE_LENGTH);
//}
//
//
//void Lifoqueue::clear()
//{
//	firstFreeIndex_ = 0;
//}