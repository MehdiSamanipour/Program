#include "OrderSystem.h"

order_line::order_line(const std::string product_name, const float price, const int count):
	product_name_(product_name), price_(price), count_(count)
{
}

float order_line::sub_total() const
{
	return price_ * static_cast<float>(count_);
}

std::string order_line::get_name() const
{
	return product_name_;
}

float order_line::get_price() const
{
	return price_;
}

int order_line::get_count() const
{
	return count_;
}

std::string order_line::to_string() const
{
	std::string s;
	s.append("product:");
	s.append(product_name_);
	s.append(" count:");
	s.append(std::to_string(count_));
	s.append(" subtotal:");
	s.append(std::to_string(sub_total()));
	return s;
}

order::order(const std::string date): date_(date)
{
}

void order::add_order_line(std::string product_name, float price, int count)
{
	lines_.emplace_back(product_name, price, count);
}

float order::total() const
{
	float sum = 0;
	for (size_t i = 0; i < lines_.size(); i++)
	{
		sum += lines_[i].sub_total();
	}
	return sum;
}

std::string order::to_string() const
{
	std::string s;
	s.append("Date:");
	s.append(date_);
	s.append("\n");
	for (size_t i = 0; i < lines_.size(); i++)
	{
		s.append(lines_[i].to_string());
		s.append("\n");
	}
	s.append("Total:");
	s.append(std::to_string(total()));
	return s;
}

product::product(int bar_code, const std::string name, const float price):
	bar_code_(bar_code), name_(name), price_(price)
{
}

float product::get_price() const
{
	return price_;
}

std::string product::get_name() const
{
	return name_;
}

int product::get_barcode() const
{
	return bar_code_;
}

void product_catalog::add_product(int bar_code, std::string name, float price)
{
	products_.emplace_back(bar_code, name, price);
}

product* product_catalog::find_product(int bar_code)
{
	for (size_t i = 0; i < products_.size(); i++)
	{
		if (bar_code == products_[i].get_barcode())
		{
			return &products_[i];
		}
	}
	return nullptr;
}
