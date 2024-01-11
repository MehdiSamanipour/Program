#pragma once
#include <string>
#include <vector>


class order_line
{
public:
	order_line(std::string product_name, float price, int count);
	float sub_total() const;
	std::string get_name() const;
	float get_price() const;
	int get_count() const;
	std::string to_string() const;

private:
	std::string product_name_;
	float price_;
	int count_;
};

class order
{
public:
	order(std::string date);
	void add_order_line(std::string product_name, float price, int count);
	float total() const;
	std::string to_string() const;

private:
	std::string date_;
	std::vector<order_line> lines_;
};

class product
{
public:
	product(int bar_code, std::string name, float price);
	float get_price() const;
	std::string get_name() const;
	int get_barcode() const;

private:
	int bar_code_;
	std::string name_;
	float price_;
};

class product_catalog
{
public:
	void add_product(int bar_code, std::string name, float price);
	product* find_product(int bar_code);

private:
	std::vector<product> products_;
};
