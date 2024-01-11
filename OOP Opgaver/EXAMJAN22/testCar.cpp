#include"Car.h"
#include"Rentalbrureau.h"

int main() {

	Car Car0, Car1(167, 'A', "Fiat 500", 2, 'B', 'M', 367.95);

	Car0.print();
	Car1.print();
	Car car1(167, 'A', "Fiat 500", 2, 'B', 'M', 367.95);
	Car	car2(123, 'E', "Audi A6 Avant 3.0 TDI", 4, 'D', 'A', 855.99);

	Rentalbureau r("Europabil");
	r.addCar(car1);
	r.addCar(car2);
	r.print();
	r.searchCarByCategory('E');

	return 0;

}