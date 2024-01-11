#pragma once


class TestClass
{
public:
	TestClass( const char * = "NN" );
	~TestClass();
	void setName( const char * );
	void print( );
private:
	char *namePtr_;
};