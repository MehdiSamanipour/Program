// Bog.cpp
#include "Bog.h"
#include <iostream>

// Implementation of the constructor
Bog::Bog(std::string titel, std::string forfatter, std::string ISBN, int sider)
{
    setTitel(titel);
    setForfatter(forfatter);
    setISBN(ISBN);
    setAntalSider(sider);
}

// Implementation of setTitel
void Bog::setTitel(std::string titel)
{
    titel_ = titel;
}

// Implementation of getTitel
std::string Bog::getTitel() const
{
    return titel_;
}

// Implementation of setForfatter
void Bog::setForfatter(std::string forfatter)
{
    forfatter_ = forfatter;
}

// Implementation of getForfatter
std::string Bog::getForfatter() const
{
    return forfatter_;
}

// Implementation of setISBN
void Bog::setISBN(std::string ISBN)
{
    if (ISBN.size() != 13)
    {
        ISBN_ = "1234567890123";
    }
    else
    {
        bool error = false;
        for (int i = 0; i < 13; i++)
        {
            if (ISBN[i] < '0' || '9' < ISBN[i])
            {
                error = true;
                break;
            }
        }
        if (error)
            ISBN_ = "1234567890123";
        else
            ISBN_ = ISBN;
    }

    if (ISBN.size() == 13 &&
        isdigit(ISBN[0]) && isdigit(ISBN[1]) && isdigit(ISBN[2]) &&
        isdigit(ISBN[3]) && isdigit(ISBN[4]) && isdigit(ISBN[5]) &&
        isdigit(ISBN[6]) && isdigit(ISBN[7]) && isdigit(ISBN[8]) &&
        isdigit(ISBN[10]) && isdigit(ISBN[11]) && isdigit(ISBN[12]))
    {
        ISBN_ = ISBN;
    }
    else
    {
        ISBN_ = "123457890123";
    }
}

// Implementation of getISBN
std::string Bog::getISBN() const
{
    return ISBN_;
}

// Implementation of setAntalSider
void Bog::setAntalSider(int sider)
{
    if (sider > 0)
    {
        antalSider_ = sider;
    }
    else
    {
        antalSider_ = 1;
    }
}

// Implementation of getAntalSider
int Bog::getAntalSider() const
{
    return antalSider_;
}

// Implementation of print
void Bog::print() const
{
    std::cout << forfatter_ << ": " << titel_ << std::endl;
    std::cout << "ISBN: " << ISBN_ << std::endl;
    std::cout << antalSider_ << " sider" << std::endl;
}
