#include <iostream>
#include "OrderSystem.h"

int main()
{
	product_catalog product_catalog;
	product_catalog.add_product(1, "Car", 20000);
	product_catalog.add_product(2, "Candy", 20);
	product_catalog.add_product(3, "Barbie-doll", 200);

	order order("10/10/2023");
	const product* p = product_catalog.find_product(2);

	order.add_order_line(p->get_name(), p->get_price(), 7);

	p = product_catalog.find_product(3);
	order.add_order_line(p->get_name(), p->get_price(), 2);

	p = product_catalog.find_product(1);
	order.add_order_line(p->get_name(), p->get_price(), 5);

	std::cout << order.to_string() << std::endl;

	return 0;
}
