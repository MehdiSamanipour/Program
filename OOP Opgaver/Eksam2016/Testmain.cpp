
#include"Butik.h"
#include"Kasse.h"

#include"Vare.h"
#include<string>
#include<iostream>
using namespace std;


#include"Vare.h"
#include<iostream>
#include<string>


int main()
{
	Butik Butik0(), butik1("Lokalkoebmanden");
	butik1.tilfoejVare(1003, "Kartofler 2 kg", 12.95);
	butik1.printLager();
	return 0;
}