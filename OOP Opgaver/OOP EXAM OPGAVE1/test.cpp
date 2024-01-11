#include"FakturaLinje.h"
#include"Service.h"
#include"Vare.h"
#include<vector>


int main() {
	//// opgave 2.G
	Vare obj1("pen", 20.5, 2);
	Vare obj2(" ore", 800, 1);
	Service obj3("papire", 100, 45, true);


	obj1.print();
	obj2.print();
	obj3.print();

	////opgave 2.h

	void FakturaLinje::print() const
	{
		cout << " antal: " << antal_ << endl;
		list<antal*>::const_iterator iter;
		for (iter = antal_.begin(); iter != m_.end(); iter++)
		{
			(*iter)->print();
		}
	}


}