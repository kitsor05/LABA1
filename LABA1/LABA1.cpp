#include <iostream>
#include <string>
#include "ADDRESS.h"

int main() {

	std::string name;
	std::string street;
	int addressNum;

	std::cout << "Enter name: " << std::endl;
	std::cin >> name;
	std::cout << "Enter street: " << std::endl;
	std::cin >> street;
	std::cout << "Enter number of address: " << std::endl;
	std::cin >> addressNum;

	address address;
	address.setName(name);
	address.setStreet(street);
	address.setAddressNum(addressNum);

	std::cout << address.getName() << std::endl;
	std::cout << address.getStreet() << std::endl;
	std::cout << address.getAddressNum() << std::endl;

	std::cout << address.toString() << std::endl;

}