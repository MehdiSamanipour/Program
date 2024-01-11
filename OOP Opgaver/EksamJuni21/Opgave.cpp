#include "Opgave.h"
#include <iostream>

using namespace std;

Opgave::Opgave() : deadline_() // Can be omitted
{
    opgave_ = "To do";
    prioritet_ = 1;
    // Date uses default
}

Opgave::Opgave(std::string opgave, int prioritet, int dag, int maaned, int aar) : deadline_(dag, maaned, aar)
{
    // If set functions are not called, validation is necessary
    setOpgave(opgave);
    setPrioritet(prioritet);
}

void Opgave::setOpgave(std::string opgave)
{
    // ?: operator allowed instead of if/else
    opgave_ = opgave.empty() ? "To do" : opgave;
}

void Opgave::setPrioritet(int prioritet)
{
    // if/else allowed instead of ?:
    prioritet_ = (1 <= prioritet && prioritet <= 5) ? prioritet : 1;
}

void Opgave::setDeadline(int dag, int maaned, int aar)
{
    // It makes sense to let Dato validate input since the task specifies the same rules
    // Local validation is therefore redundant and should be avoided
    deadline_.setDato(dag, maaned, aar);
}

std::string Opgave::getOpgave() const
{
    return opgave_;
}

int Opgave::getPrioritet() const
{
    return prioritet_;
}

Dato Opgave::getDeadline() const
{
    return deadline_;
}

void Opgave::print() const
{
    cout << "Opgave: " << opgave_ << endl;
    cout << "Prioritet: " << prioritet_ << endl;
    cout << "Deadline: ";
    deadline_.print(); // There is no to-string for Dato, so a mix of cout << and print calls is necessary
    cout << endl;
}
