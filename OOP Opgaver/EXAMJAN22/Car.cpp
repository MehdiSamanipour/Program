#include"Car.h"

Car::Car() {

	 idNumber_ = 0;
	 category_='U';
	 model_="Unknown";
	doors_=0;
	fuelType_='U';
	gearType_='U';
	 pricePrDay_=0.0;
	 isAvailable_=true;
}
Car::Car(int id, char cat, std::string model, int doors, char fuel, char gear, double price) {

	idNumber_ = (100 <= id && id <= 199 ? id : 0);
	category_ = ('A' <= cat && cat <= ' E' ? cat : 'U');
	model_ = model;
	doors_ = (doors==2 || doors==4 ? doors: 0);
	fuelType_ = (fuel == 'D' || fuel == 'E' || fuel || 'G' ? fuel : 'U');
	gearType_ = (gear == 'A' || gear == 'M' ? gear : 'U');
	pricePrDay_ = (0.0 < price ? price : 0.0);
	isAvailable_ = true;
}
char Car::getCategory()const {
	return category_;
}
bool Car::getIsAvailable()const {

	return isAvailable_;
}
void Car::setIsAvailable(bool available) {
	
	isAvailable_ = available;
}
int Car::getIdNumber()const {
	return idNumber_;
}
void Car::setIdNumber(int id) {
	idNumber_ = id;
}
void Car::print() const
{
    cout << idNumber_ << endl;

    switch (category_)
    {
    case 'A':
        cout << "A - Small";
        break;
    case 'B':
        cout << "B- Economy";
        break;
    case 'C':
        cout << "C - Medium";
        break;
    case 'D':
        cout << "D - Large";
        break;
    case 'E':
        cout << "E - Luxury";
        break;
    default:
        cout << "Unspecified category";
    }

    cout << endl << "Model\t\t" << model_ << " or similar" << endl << "Doors\t\t" << doors_ << endl;
    cout << "Fuel\t\t";

    switch (fuelType_)
    {
    case 'G':
        cout << "Gasoline";
        break;
    case 'D':
        cout << "Diesel";
        break;
    case 'E':
        cout << "Electric";
        break;
    default:
        cout << "Unspecified fueltype";
    }

    cout << endl << "Gear\t\t";

    switch (gearType_)
    {
    case 'M':
        cout << "Manual";
        break;
    case 'A':
        cout << "Automatic";
        break;
    default:
        cout << "Unspecified geartype";
    }

    cout << endl << "Price pr day\t" << pricePrDay_ << endl;

    cout << "Available\t" << (isAvailable_ ? "Yes" : "No") << endl << endl;
}
Car::~Car() {

}


