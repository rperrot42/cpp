
#include "PhoneBook.hpp"

int PhoneBook::getContactIndice() const
{
	return contactIndice;
}

void PhoneBook::setContactIndice(int contactIndice)
{
	this->contactIndice = contactIndice;
}

PhoneBook::PhoneBook(){
	contactIndice = 0;
	nbContact = 0;
}

int PhoneBook::getNbContact() const
{
	return nbContact;
}

void PhoneBook::setNbContact(int nb_contact)
{
	nbContact = nb_contact;
}

int PhoneBook::addContact(){
	if (this->nbContact < 8){
		this->nbContact++;
	}
	Contact contact = Contact();
	if (contact.addInfoContact())
		return 1;
	this->listContact[this->contactIndice] = contact;
	this->contactIndice = (this->contactIndice + 1) % 8;
	return 0;
}
std::string get10Char(std::string str){
	std::string result;
	if (str.length() > 10){
		return str.substr(0, 9) + ".";
	}
	result = str;
	for (int i = str.length(); i < 10; i++){
		result += " ";
	}
	return result;
}

void PhoneBook::printAllContact(){
	for (int i = 0; i < 40; i++){
		std::cout << "\u2581";
		if (i == 39){
			std::cout << std::endl;
		}
	}
	std::cout << "|index|name      |first name|nickname  |" << std::endl;
	for (int i = 0; i < this->nbContact; i++){
		std::cout << "|"  << i << "    |";
		std::cout <<  get10Char(this->listContact[i].getName()) << "|";
		std::cout <<  get10Char(this->listContact[i].getFirstName()) << "|";
		std::cout <<  get10Char(this->listContact[i].getNickName()) << "|" << std::endl;
	}
	for (int i = 0; i < 40; i++){
		std::cout << "\u203E";
		if (i == 39){
			std::cout << std::endl;
		}
	}
}


int PhoneBook::search(){
	printAllContact();
	std::cout << "Enter the index of the contact" << std::endl;
	std::string index;
	std::getline(std::cin, index);
	if (std::cin.eof())
		return 1;
	if (index.length() == 1 && index[0] >= '0' && index[0] <= '7'){
		int i = index[0] - '0';
		if (i < this->nbContact){
			std::cout << this->listContact[i].toString() << std::endl;
		}
		else{
			std::cout << "This contact does not exist" << std::endl;
		}
	}
	else{
		std::cout << "This contact does not exist" << std::endl;
	}
	return (0);
}