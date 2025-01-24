#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(){
	std::string	command;
	PhoneBook	phone_book = PhoneBook();

	std::cout << "Enter a command EXIT, SEARCH, ADD" << std::endl;
	while (std::getline(std::cin, command) && !std::cin.eof())
	{
		if (command == "ADD")
		{
			if (phone_book.addContact())
				return 1;
		}
		else if (command == "SEARCH")
		{
			if (phone_book.search())
				return 1;
		}
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "Command not found" << std::endl;
		std::cout << "Enter a command EXIT, SEARCH, ADD" << std::endl;
	}
	return 1;
}