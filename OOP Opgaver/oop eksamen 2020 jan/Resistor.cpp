#include"Resistor.h"


Resistor::Resistor(double resistance ) {

	setResistance(resistance);
}
double Resistor::getResistance()const {

	return resistance_ ;
}
double  Resistor::getConductance()  const {

	return (1 / resistance_);
}
void  Resistor::setResistance(double resistance) {

	resistance_ = (resistance > 0) ? resistance : 1.0;
}
void Resistor::setConductance(double conductance) {

	if (conductance > 0) {

		setResistance(1 / conductance);
	}
}

Resistor operator&&(const Resistor& lhs, const Resistor& rhs)
{
	// Fint her bruges constructoren, den laver validering
	return Resistor(lhs.resistance_ + rhs.resistance_);
}
Resistor operator||(const Resistor& lhs, const Resistor& rhs)
{
	Resistor result;
	// Det er smart at bruge set/getConductance selvom man er friend
	result.setConductance(lhs.getConductance() + rhs.getConductance());
	// F�lgende alternativer omg�r validering
	result.resistance_ = 1 / (lhs.getConductance() + rhs.getConductance());
	// Der ogs� mulighed for at bruge formlen baseret p� resistance_, det skal
	//jo s� v�re korrekt
		// Teoretisk kan man f� en ugyldig v�rdi, hvis modstandene er meget store
	//	eller
		// meget sm�. Vi har ikke behandlet floating formaters begr�nsninger
		result.resistance_ = lhs.resistance_ * rhs.resistance_ / (lhs.resistance_
			+ rhs.resistance_);
	return result;
}
