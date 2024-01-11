#pragma once


class Person
{
public:
	Person( int id=0, int age=0 );
	void setId( int );
	virtual ~Person();
	int getId() const;
	void setAge( int );
	int getAge() const;
	virtual int calcSalary() const=0;
	virtual void print() const;
private:
	int id_;
	int age_;
};