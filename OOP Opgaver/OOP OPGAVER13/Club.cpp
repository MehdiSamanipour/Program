#include "Club.h"


int Club::nextMemberNumber_ = 1000;

Club::Club(const string &clubname)
{
	clubname_ = clubname;
}

const Club & Club::operator+=(const Member &newMember)
{
	list<Member>::iterator iter;

	for (iter = memberList_.begin(); iter != memberList_.end(); ++iter)
	{
		if (iter->getLastname() > newMember.getLastname())
		{
			iter = memberList_.insert(iter, newMember);
			iter->setMembernumber(nextMemberNumber_);
			++nextMemberNumber_;
			break;
		}
	}

	if (iter == memberList_.end())
	{
		// Insert at the end instead
		memberList_.push_back(newMember);
		memberList_.back().setMembernumber(nextMemberNumber_);
		++nextMemberNumber_;
	}

	return *this;
}

const Club & Club::operator-=(const Member &oldMember)
{
	list<Member>::iterator iter;

	for (iter = memberList_.begin(); iter != memberList_.end(); ++iter)
	{
		if (iter->getFirstname() == oldMember.getFirstname() 
			&& 
			iter->getLastname() == oldMember.getLastname())
		{
			iter = memberList_.erase(iter);
			break;
		}
	}

	return *this;
}

int Club::getNumberOfMembers() const
{
	return memberList_.size();
}

void Club::print() const
{
	// Traditionel med iterator
	for (list<Member>::const_iterator iter = memberList_.begin(); iter != memberList_.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << endl;

	//// C++11: definer iteratoren med auto
	for (auto iter = memberList_.begin(); iter != memberList_.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << endl;

	// C++11: brug for - range statement (kan ikke bruges til insert og erase)
	for (Member m : memberList_)
	{
		cout << m << endl;
	}

	cout << endl;

}

int Club::getNextMemberNumber()
{
	return nextMemberNumber_;
}