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
	// Følgende alternativer omgår validering
	result.resistance_ = 1 / (lhs.getConductance() + rhs.getConductance());
	// Der også mulighed for at bruge formlen baseret på resistance_, det skal
	//jo så være korrekt
		// Teoretisk kan man få en ugyldig værdi, hvis modstandene er meget store
	//	eller
		// meget små. Vi har ikke behandlet floating formaters begrænsninger
		result.resistance_ = lhs.resistance_ * rhs.resistance_ / (lhs.resistance_
			+ rhs.resistance_);
	return result;
}
