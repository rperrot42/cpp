#include <string>
#include "Contact.hpp"

std::string Contact::getName(){
	return this->name;
}

std::string Contact::getFirstName(){
	return this->firstName;
}

std::string Contact::getNickName(){
	return this->nickName;
}

std::string Contact::getDarkest(){
	return this->darkest;
}

std::string Contact::getPhoneNumber(){
	return this->phoneNumber;
}

void Contact::setName(std::string name){
	this->name = name;
}

void Contact::setFirstName(std::string firstName){
	this->firstName = firstName;
}

void Contact::setPhoneNumber(std::string phoneNumber){
	this->phoneNumber = phoneNumber;
}

void Contact::setNickName(std::string nickName){
	this->nickName = nickName;
}

void Contact::setDarkest(std::string darkest){
	this->darkest = darkest;
}
std::string createPhoneNumber(){
	std::string phoneNumber;
	bool isNumber = false;
	bool first = true;
	while (!isNumber){
		if (first){
			std::cout << "Enter the phone number" << std::endl;
			first = false;
		}
		std::getline(std::cin, phoneNumber);
		if (std::cin.eof())
			return "";
		if (phoneNumber.length() == 10) {
			for (int i = 0; i < 10; i++) {
				if (phoneNumber[i] >= '0' && phoneNumber[i] <= '9') {
					isNumber = true;
				}
				else {
					isNumber = false;
					break;
				}
			}
		}
		else {
			std::cout << "The phone number must have 10 digits" << std::endl;
		}
	}
	return phoneNumber;
}

std::string createText(std::string name){
	std::string text;
	std::cout << "Enter the " << name << std::endl;
	std::getline(std::cin, text);
	if (std::cin.eof())
		return "";
	while (text.empty()){
		if (text.empty()){
			std::cout << "The " << name << " can't be empty" << std::endl;
		}
		std::getline(std::cin, text);
		if (std::cin.eof())
			return "";
	}
	return text;
}

int Contact::addInfoContact()
{
	this->name = createText("name");
	if (this->name.empty())
		return (1);
	this->firstName = createText("first name");
	if (this->firstName.empty())
		return (1);
	this->nickName = createText("nickname");
	if (this->nickName.empty())
		return (1);
	this->phoneNumber = createPhoneNumber();
	if (this->phoneNumber.empty())
		return (1);
	this->darkest = createText("darkest secret");
	return (this->darkest.empty());
}

std::string Contact::toString()
{
	std::string contactStr = "Name: " + this->name + "\n" +
	"First name: " + this->firstName + "\n" +
	"Nickname: " + this->nickName + "\n" +
	"Phone number: " + this->phoneNumber + "\n" +
	"Darkest secret: " + this->darkest + "\n";
	return contactStr;
}

Contact::Contact(){

}


