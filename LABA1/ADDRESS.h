#pragma once
#include <string>

class address {
private:
    std::string Name;
    std::string street;
    int addressNumber;
public:

    address();

    address(std::string, std::string, int);

    address(const address&);

    void setName(std::string);

    void setStreet(std::string);

    void setAddressNum(int);

    std::string getName();

    std::string getStreet();

    int getAddressNum();

    std::string toString();

    ~address();
};