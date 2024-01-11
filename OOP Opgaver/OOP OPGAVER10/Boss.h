#pragma once
#include"Employee.h"


class Boss :public Employee
{
public:
	Boss( int id=0, int age=0, int bonus=0 );
	void setBonus( int );
	int getBonus() const;
	virtual int calcSalary() const;
	virtual void print(void) const override;
private:
	virtual void setStep( int );
	int bonus_;
};
