#pragma once
#include <list>
#include "Member.h"

class Club
{
public:
	Club(const string &clubname);
	const Club & operator+=(const Member &newMember);
	const Club & operator-=(const Member &oldMember);
	int getNumberOfMembers() const;
	void print() const;
	static int getNextMemberNumber();
private:
	string clubname_;
	list<Member> memberList_;
	static int nextMemberNumber_;
};