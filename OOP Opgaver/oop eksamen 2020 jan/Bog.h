#pragma once
#include<string>
using namespace std;
class Bog
{
public:
	
	Bog(const string& titel, const string& forfatter);
	string getTitel()const;
	void setTitel(const string& titel);
	string getForfater() const;
	void setForfater(const string& forfatter);
	virtual int getMinimumAlder() const =0 ;
	 virtual void print()const;
	virtual ~Bog();

private:
	string titel_;
	string forfatter_;
};


