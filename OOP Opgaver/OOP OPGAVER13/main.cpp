#include "Box.h"
#include"Club.h"
#include"Member.h"


int main()
{

// TEST CLUB MAIN

Club myClub("NVJ");
	
	myClub += Member("Kurt", "Andersen");
	cout << myClub.getNumberOfMembers() << endl;
	myClub += Member("Nils", "Jensen");
	cout << myClub.getNumberOfMembers() << endl;
	myClub += Member("Bo", "Madsen");
	cout << myClub.getNumberOfMembers() << endl;
	myClub += Member("Kurt", "Jensen");
	cout << myClub.getNumberOfMembers() << endl;
	//myClub.addMember(Member("Hanne", "Adler"));
	myClub += Member("Hanne", "Adler");
	cout << myClub.getNumberOfMembers() << endl;

	myClub.print();

	myClub -= Member("Kurt", "Jensen");
	cout << myClub.getNumberOfMembers() << endl;

	myClub.print();
	
	myClub -= Member("Bo", "Madsen");
	cout << myClub.getNumberOfMembers() << endl;

	myClub.print();

	myClub -= Member("Hanne", "Adler");
	cout << myClub.getNumberOfMembers() << endl;

	myClub.print();


// TEST MEMBER MAIN
Member m1("N", "N");
	Member m2("M", "M");

	m1.print();
	cout << endl;

	m1.setMembernumber(1000);

	cout << m1.getMembernumber() << " " << m1.getFirstname() << " " << m1.getLastname() << endl;
	cout << m1 << endl;

	m2.setMembernumber(1001);
	cout << m2 << endl;

	Member m3(m1);
	cout << m3 << endl;

	// test box main
	Box b1("Kabelskokasse", "kabelsko", 300);
	Box b2("Batterikasse", "batterier", 50);
	Box b3("Madkasse", "håndmadder", 6);

	b1.print();
	b2.print();
	b3.print();

	++(++(++b1));
	++(++(++(++(++(b2)))));
	++(++(++(++b3)));

	b1.print();
	b2.print();
	b3.print();

	cout << endl << ++b1 << endl;
	cout << b1++ << endl;
	cout << b1 << endl;

	cout << --b1 << endl;
	cout << b1-- << endl;
	cout << b1 << endl;

	return 0;
}