#pragma once
#include <string>
#include<iostream>
#include"Kasse.h"
#include"Butik.h"
#include"Vare.h"


using namespace std;

const int ANTAL_KASSER = 3;


class Kasse : public Butik 
{
public:
	Kasse(int nummer = 0);
	void ekspedition(int solgteVarer[], const int SIZE) const;
private:
	int nummer_;
};

