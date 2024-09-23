#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(){
	std::string command;
	PhoneBook phone_book = PhoneBook();
	std::cout << "Enter a command EXIT, SEARCH, ADD" << std::endl;
	std::getline(std::cin, command);
	while (std::getline(std::cin, command)){
		if (command == "ADD"){
			phone_book.addContact();
		}
		else if (command == "SEARCH"){
			phone_book.search();
		}
		else if (command == "EXIT"){
			break;
		}
		else{
			std::cout << "Command not found" << std::endl;
		}
		std::cout << "Enter a command EXIT, SEARCH, ADD" << std::endl;
		std::getline(std::cin, command);
	}
	return 0;
}