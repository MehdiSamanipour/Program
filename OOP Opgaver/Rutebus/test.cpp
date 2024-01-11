#include "Rutebus.h"


int main()
{
	Rutebus  bus, bus133("sort", 133, 45);

	bus.print();
	bus133.print();

	bus.setFarve("gul");
	bus.setRutenr(567);
	bus.setAntalPladser(57);
	bus.setIDrift(true);

	bus.print();

	return 0;
}
