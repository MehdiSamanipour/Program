

#include "Regtangle.h"


Rectangle::Rectangle(double xTL, double yTL, double xBR, double yBR)
	:bottomRight_(xBR, yBR), topLeft_(xTL, yTL)
{
}


void Rectangle::setXTopLeft(double xTopL)
{
	if (xTopL < 0 || xTopL > 100 || xTopL >= bottomRight_.getX())
	{
		cout << "\nFejl i xTopLeft-koordinat - sat til 0.\n";
		xTopL = 0.0;
	}
	topLeft_.setX(xTopL);
}


void Rectangle::setYTopLeft(double yTopL)
{
	if (yTopL < 0 || yTopL > 100 || yTopL >= bottomRight_.getY())
	{
		cout << "\nFejl i yTopLeft-koordinat - sat til 0.\n";
		yTopL = 0.0;
	}
	topLeft_.setY(yTopL);
}


void Rectangle::setXBottomRight(double xBotR)
{
	if (xBotR < 0 || xBotR > 100 || xBotR <= topLeft_.getX())
	{
		cout << "\nFejl i xBottomRight-koordinat - sat til 100.\n";
		xBotR = 100.0;
	}
	bottomRight_.setX(xBotR);
}


void Rectangle::setYBottomRight(double yBotR)
{
	if (yBotR < 0 || yBotR > 100 || yBotR <= topLeft_.getY())
	{
		cout << "\nFejl i yBottomRight-koordinat - sat til 100.\n";
		yBotR = 100.0;
	}

	bottomRight_.setY(yBotR);
}


double Rectangle::getXTopLeft() const
{
	return topLeft_.getX();
}


double Rectangle::getYTopLeft() const
{
	return topLeft_.getY();
}


double Rectangle::getXBottomRight() const
{
	return bottomRight_.getX();
}


double Rectangle::getYBottomRight() const
{
	return bottomRight_.getY();
}


void Rectangle::print() const
{
	cout << "\nOverste venstre hjorne: ";
	topLeft_.print();
	cout << "\nNederste hojre hjorne: ";
	bottomRight_.print();
	cout << endl;
}


double Rectangle::hight() const
{
	return (bottomRight_.getY() - topLeft_.getY());
}


double Rectangle::width() const
{
	return (bottomRight_.getX() - topLeft_.getX());
}


double Rectangle::perimeter() const
{
	return (2 * (hight() + width()));
}


double Rectangle::area() const
{
	return (hight() * width());
}


bool Rectangle::isSquare() const
{
	return (hight() != 0 && hight() == width());
}