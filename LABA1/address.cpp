#include <iostream>
#include <string>
#include "ADDRESS.h"

address::address()
{
	std::cout << "Constructor without parameters" << std::endl;
}

address::address(std::string name, std::string street, int addressNum)
{
	std::cout << "Constructor with parameters" << std::endl;
}

address::address(const address& ref) 
{
	std::cout << "Copying constructor" << std::endl;
	this->Name = ref.Name;
	this->street = ref.street;
	this->addressNumber = ref.addressNumber;
}

void address::setName(std::string name) 
{
	this->Name = name;
}

void address::setStreet(std::string street) 
{
	this->street = street;
}

void address::setAddressNum(int addressNum) 
{
	this->addressNumber = addressNum;
}

std::string address::getName()
{
	return Name;
}

std::string address::getStreet()
{
	return street;
}

int address::getAddressNum()
{
	return addressNumber;
}

std::string address::toString() 
{
	std::string info = "name: " + Name + "\nstreet: " + street + "\naddress Number: " + std::to_string(addressNumber);
	return info;
}

address :: ~address() 
{
	std::cout << "Destructor" << std::endl;
}