#include "Person.h"
#include"Family.h"


int main()
{
	Person friend1("111111-1111");
	Person friend2("222222-2222", "Peter");
	const Person friend3("333333-3333", "Kurt", "Skov");
	Person friend4("444444-4444", "Peter", "Kastrup", "Hansen");

	friend1.printAll();
	friend1.printPartially();
	friend2.printAll();
	friend2.printPartially();
	friend3.printAll();
	friend3.printPartially();
	friend4.printAll();
	friend4.printPartially();

	cout << "\nI dette program er der lige nu " << Person::getNumberOfPersons() << " personer\n\n";

	{
		Person friend0;

		friend0.printAll();
		friend0.printPartially();

		cout << "\nI dette program er der lige nu " << Person::getNumberOfPersons() << " personer\n\n";

		friend0.setFirstName("Lone");
		friend0.setMiddleName("Alstrup");
		friend0.setLastName("Larsen");

		friend0.printAll();
		friend0.printPartially();
	}

	cout << "\nI dette program er der lige nu " << Person::getNumberOfPersons() << " personer\n\n";

	cout << friend3.checkForSameName(friend4) << endl << endl;
	cout << friend3.checkForSameName(friend3) << endl << endl;

	string s, f, m, l;

	friend3.getData(s, f, m, l);

	cout << s << ' ' << f + " " + m + " " + l << endl << endl;

	friend4 = friend3;			// memberwise assignment

	friend4.printAll();
	friend4.printPartially();

	Family f1(Person("121176-1111", "Kurt", "Skov"),
		Person("090275-2222", "Lise", "Kastrup", "Skov"),
		Person("030799-3333", "Mikkel", "Kastrup"),
		Person("270902-4444", "Hanne", "Kastrup", "Skov"));

	f1.print();

	cout << "\nAntal personer oprettet: " << Person::getNumberOfPersons() << endl << endl;

	// ekstra opgave array metode
	Person p[] = { Person("121176-1111", "Kurt", "Skov"),
				   Person("090275-2222", "Lise", "Skov", "Kastrup"),
				   Person("030799-3333", "Mikkel", "Kastrup"),
				   Person("270902-4444", "Hanne", "Skov", "Kastrup") };

	Family2 f9(p);

	f9.print();

	cout << "\nAntal personer oprettet: " << Person::getNumberOfPersons() << endl << endl;
	// ekstra opgave also array metod
	Person p1[] = { Person("121176-1111", "Kurt", "Skov"),
				Person("090275-2222", "Lise", "Kastrup", "Skov"),
				Person("030799-3333", "Mikkel", "Skov") };

	Person p2[] = { Person("121176-4444", "Bo", "Mark", "Viby"),
					Person("090275-2222", "Anne", "Viby"),
					Person("030799-3333", "Mick", "Viby"),
					Person("270902-4444", "Tove", "Mark", "Viby"),
					Person("270902-4444", "Lotte", "Mark", "Viby") };

	Family3 skov(p1, 3);
	Family3 viby(p2, 5);

	skov.print();
	viby.print();

	cout << "\nAntal personer oprettet: " << Person::getNumberOfPersons() << endl << endl;

	return 0;
}