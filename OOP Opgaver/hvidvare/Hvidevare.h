#pragma once
#include <iostream>
#include <list>

class Hvidevare
{
public:
	Hvidevare(const std::string& maerke, const std::string& model, char energiklasse);
	
	void setEnergiklasse(char energiklasse);
	char getEnergiklasse()const;
	
	virtual void print()const;
	

	

protected:
	std::string maerke_;
	std::string model_;

private:
	char energiklasse_;
	virtual void tegnSymbol()const=0;
	//std::list <const Hvidevare*> Koeleskab;

};

std::ostream& operator<<(std::ostream& out, const Hvidevare& right);
//template < typename myType >
//std::ostream& operator<<(std::ostream& outRef, const myType& txtRef);
//
//template<typename myType>
//inline std::ostream& operator<<(std::ostream& outRef, const myType& txtRef)
//{
//	// TODO: insert return statement here
//}



// ostream operator<< in ogsa cpp
//Det ønskes nu, at stream - operatoren << skal kunne anvendes til at udskrive informationer om
//Hvidevare - objekter.Du skal derfor implementere en overloaded udgave af stream - operatoren
//<< .Der er følgende krav :
//1. Du må kun implementere en overloaded udgave af stream - operatoren << .
//2. Denne operatoren skal virke på alle Hvidevare - objekter – dvs.både på Koeleskabobjekter og Vaskemaskine - objekter(og Opvaskemaskine - objekter hvis denne klasse
//	var implementeret).
//	3. I implementeringen af operatoren skal du anvende metoden print().

