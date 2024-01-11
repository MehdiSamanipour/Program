#include "capacitance.h"

#include <iostream>
#include <string>


//opgave 2

#include "finMax.h"

#define arrysize 5


using namespace std;  // bruget den kun  for spar tid

int main()
{
	double afstand;
     double areal;
    string materiale;

	cout<<"Dette program beregner kapacitans mellem to parallelle plader med et givet materiale"<<endl;

	cout<<"Indtast materiale, areal (i enheden kvadratmeter) og afstand (i enheden meter). Materialet kan være: vakuum, polyethelene, mica eller keramik:"<<endl;

	cin>>areal>>afstand;
	cout<<"intast material"<<endl;

	getline(cin,materiale);

	cout<<"capacitet er : "<< materiale.capacity()<<endl;


	//opgave 2

	int myarr[]={1,2,3,4,5,};

	cout<<"maximum number in array er : "<<findMax (myarr[])<<endl;;

}

