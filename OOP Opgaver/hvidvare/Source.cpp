#include"Hvidevare.h"
#include"Koeleskab.h"
#include"Vaskemaskine.h"
#include "Moent.h"
#include "Moentsamling.h"

using namespace std;

int main()
{
	

	//-Oprette en STL liste til Hvidevare pointere. - L�gge adresserne for to objekter ind i listen.Det ene objekt skal v�re et Koeleskab - objekt
	//	og det andet skal v�re et vaskemaskine - objekt.NB!Objekterne skal ligge p� heapen og du
	//	m� ikke erkl�re hverken pointere eller objekter i main. - Udskrive informationer om de to objekter via metoderne print().NB!Du skal anvende en
	//	for - l�kke til at genneml�be listen og du skal anvende en iterator i for - l�kken.

	list<Hvidevare*>hvidevareliste;
	hvidevareliste.push_back(new Koeleskab("Simens", "K520",'A', 350));
	hvidevareliste.push_front(new Vaskemaskine("AEG", "745S",'E', 5.5));
	
	list<Hvidevare*>::iterator i;
	for ( i = hvidevareliste.begin(); i !=hvidevareliste.end() ; i++)
	{
		(*i)->print();
	}

	




	Moent m1("Italian", 1968, 0.50, "Lire");
	Moent m2("Danmark", 1850, 2, "Rigsdaler");

	Moentsamling ms;
	
	ms.tilfoejMoent(m1);
	ms.tilfoejMoent(m2);

	ms.print();


	return 0;
}