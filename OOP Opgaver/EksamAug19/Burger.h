#pragma once

#pragma once
// Formål: erklæring af en klasse med attributter og metoder
// ud fra et UML diagram
// med anvendelse af const og korrekte returværdier, incl. void
class Burger
{
public:
	Burger(int, bool, bool);

	void setAntalBoeffer(int);
	int getAntalBoeffer() const;
	void setOst(bool);
	bool getOst() const;
	void setBacon(bool);
	bool getBacon() const;
	void print() const;

private:
	int antalBoeffer_;
	bool ost_;
	bool bacon_;
	
};


