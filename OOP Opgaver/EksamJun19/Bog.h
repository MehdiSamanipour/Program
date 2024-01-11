#pragma once
#include <string>

class Bog
{
public:
    Bog(
         std::string titel = "Ukendt",
         std::string forfatter = "Ukendt",
         std::string ISBN = "1234567890123",
        int sider = 1
    );

    void setTitel(std::string);
    std::string getTitel() const;

    void setForfatter(std::string);
    std::string getForfatter() const;

    void setISBN(std::string);
    std::string getISBN() const;

    void setAntalSider(int);
    int getAntalSider() const;

    void print() const;

private:
    std::string titel_;
    std::string forfatter_;
    std::string ISBN_;
    int antalSider_;
};
