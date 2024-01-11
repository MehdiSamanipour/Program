
#include"Rentalbrureau.h"
Rentalbureau::Rentalbureau(std::string name)
{
	bureauName_ = name;
}
void Rentalbureau::print() const
{
	cout << "###### " << bureauName_ << " ######\n\n";
	for (size_t i = 0; i < MAX_CARS; i++)
	{
		if (cars_[i].getIdNumber() != 0)
			cars_[i].print();
	}
}

void Rentalbureau::searchCarByCategory(char category) const
{
	for (size_t i = 0; i < MAX_CARS; i++)
	{
		if (cars_[i].getCategory() == category)
			cars_[i].print();
	}
}

void Rentalbureau::addCar(Car car)
{
	int index = car.getIdNumber() - 100;

	if (index < 0)
		index = 0;

	if (cars_[index].getIdNumber() == 0)
		cars_[index] = car;
	else
	{
		for (size_t i = 0; i < MAX_CARS; i++)
		{
			if (cars_[i].getIdNumber() == 0)
			{
				car.setIdNumber(i + 100);
				cars_[i] = car;
				break;
			}
		}
	}
}